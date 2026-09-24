#include "InkForgedActivity.h"

#include <Memory.h>

#include "../Shelf.h"
#include "../ui/Toybox.h" // IWYU pragma: export
#include "../ui/ToyboxFonts.h"
#include "../ui/ToyboxTheme.h"
#include "InkForgedScreens.h"

namespace {

// Stand-in copy until cards are read off the SD card. Notes of the length a
// real one runs to, because a layout judged against a short line is a layout
// nobody will ever see.
constexpr inkforgedui::AssetCard kSampleCard{
    "Starship",
    "Command Vehicle",
    {
     "Your armed, multipurpose starship is suited for interstellar and atmospheric flight. It can comfortably "
     "transport several people, has space for cargo, and can carry and launch support vehicles. When you "
     "Advance, you may spend experience to equip this vehicle with module assets.",
     "When you Finish an Expedition (dangerous or greater) in your starship and score a hit, this journey "
     "strengthened your ties to your ship and any fellow travelers. You and your allies may mark 1 tick on "
     "your bonds legacy track.",
     "When you Withstand Damage, you may roll +heart. If you do, Endure Stress (-1) on a weak hit or miss."
     }
  };
}  // namespace

std::unique_ptr<Activity> InkForgedActivity::create(GfxRenderer& renderer, MappedInputManager& mappedInput) {
  return makeUniqueNoThrow<InkForgedActivity>(renderer, mappedInput);
}

void InkForgedActivity::onEnter() {
  Activity::onEnter();
  toybox::ensureFonts(renderer);
  requestUpdate();
}

void InkForgedActivity::loop() {
  namespace fui = freeink::ui;

  // An app never names where Back goes; the shelf puts it back in whichever
  // folder opened it. See Shelf.h rule 3. The global back-swipe arrives here
  // as Button::Back too.
  if (mappedInput.wasReleased(MappedInputManager::Button::Back)) {
    shelf::leave(renderer, mappedInput);
    return;
  }

  fui::InputSnapshot input;
  int tapX = 0;
  int tapY = 0;
  if (mappedInput.wasScreenTapped(tapX, tapY)) {
    input.touchReleased = true;
    input.touchX = static_cast<int16_t>(tapX);
    input.touchY = static_cast<int16_t>(tapY);
  }
  if (!input.touchReleased || !interactionsReady) return;

  const fui::ActionEvent event = interactions.route(input);
  if (event.action == inkforgedui::ActionGoView) {
    // One action for the whole navigation row; the cell tapped arrives as the
    // value. NavTab is the screens' public order, View is this activity's.
    switch (static_cast<inkforgedui::NavTab>(event.value)) {
      case inkforgedui::NavTab::Home:
        ui.view = View::Home;
        break;
      case inkforgedui::NavTab::Moves:
        ui.view = View::Moves;
        break;
      case inkforgedui::NavTab::AssetCards:
        ui.view = View::AssetCards;
        break;
    }
    requestUpdate();
  }
}

void InkForgedActivity::render(RenderLock&&) {
  namespace fui = freeink::ui;

  renderer.clearScreen();
  // readingFaces puts the reading serif in the body slot: this app's surface is
  // prose, and the UI cut sets about 28 characters to a line.
  fui::GfxRendererTarget target = toybox::makeTarget(renderer, toybox::readingFaces());
  const fui::DeviceContext device = target.deviceContext();
  const fui::InputSnapshot noInput{};
  interactionsReady = false;
  toybox::Frame frame(target, device, noInput, interactions);
  toybox::Screen screen(frame);

  switch (ui.view) {
    case View::Home:
      inkforgedui::buildHome(screen);
      break;
    case View::Moves:
      inkforgedui::buildMoves(screen);
      break;
    case View::AssetCards:
      inkforgedui::buildAssetCards(screen, kSampleCard);
      break;
  }

  interactionsReady = true;
  toybox::reportOverflow(interactions, "InkForged");

  const auto labels = mappedInput.mapLabels("Back", "", "", "");
  GUI.drawButtonHints(renderer, labels.btn1, labels.btn2, labels.btn3, labels.btn4);
  renderer.displayBuffer();
}
