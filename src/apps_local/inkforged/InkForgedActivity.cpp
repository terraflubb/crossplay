#include "InkForgedActivity.h"

#include <Memory.h>

#include "../Shelf.h"
#include "../ui/Toybox.h" // IWYU pragma: export
#include "../ui/ToyboxFonts.h"
#include "../ui/ToyboxTheme.h"
#include "InkForgedScreens.h"

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
  fui::GfxRendererTarget target = toybox::makeTarget(renderer);
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
      inkforgedui::buildAssetCards(screen);
      break;
  }

  interactionsReady = true;
  toybox::reportOverflow(interactions, "InkForged");

  const auto labels = mappedInput.mapLabels("Back", "", "", "");
  GUI.drawButtonHints(renderer, labels.btn1, labels.btn2, labels.btn3, labels.btn4);
  renderer.displayBuffer();
}
