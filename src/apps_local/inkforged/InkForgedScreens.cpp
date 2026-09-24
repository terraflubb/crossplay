#include "InkForgedScreens.h"

#include "../ui/ToyboxIcons.h"
#include "apps_local/ui/ToyboxTokens.h"

namespace inkforgedui {
namespace {

// The air between the chrome and this app's first object.
//
// Tighter than the house cadence (toybox::kBodyGutter, kGutter * 3, which 41
// screens use). That cadence is sized for a list whose first row starts at its
// own text; a card opens with a frame and 14px of padding inside it, so the
// standard gutter reads as roughly twice the gap it is.
constexpr int16_t kChromeGap = toybox::kGutter;

// Tall enough for a 32px icon inside the component's pill and content insets.
constexpr int16_t kNavHeight = 56;
// Three views and room for three more. Empty slots keep the icons that exist
// from shifting sideways when a view is added.
constexpr uint8_t kNavSlots = 6;
// The views that exist. The slots past these are the placeholders.
constexpr uint8_t kNavViews = 3;

// The navigation row, and the only chrome along the bottom. Called first in
// every builder so nothing above can grow into it.
//
// There is no drawn way out: on this device Back is the left-edge swipe and it
// is the only exit from any app (docs/shelf.md). A drawn exit belongs to a
// mode, whose exit would otherwise be invisible, not to an app's top level.
//
// The selected cell is the component's default treatment: a black pill with the
// icon knocked out white. tabBar skips frame.hit() for a disabled cell, so the
// empty slots draw nothing and cannot be tapped.
void navBar(toybox::Screen& screen, const NavTab active) {
  static constexpr NavTab kViews[kNavViews] = {NavTab::Home, NavTab::Moves, NavTab::AssetCards};

  fui::TabItem tabs[kNavSlots];
  for (uint8_t i = 0; i < kNavSlots; ++i) tabs[i].enabled = false;
  for (uint8_t i = 0; i < kNavViews; ++i) {
    tabs[i].icon = fui::bitmapFromIcon(navIcon(kViews[i]));
    tabs[i].value = static_cast<int16_t>(kViews[i]);
    tabs[i].selected = kViews[i] == active;
    tabs[i].enabled = true;
  }

  fui::TabBarProps props;
  props.tabs = tabs;
  props.count = kNavSlots;
  props.action = ActionGoView;
  props.iconSize = toybox::kIconSize;

  // tabBar has no Screen wrapper, so it is called on the frame directly -- the
  // same path LinkScreens takes for settingRow. Its defaults need no theme
  // tokens: an icon-only tab never measures text.
  fui::tabBar(screen.frame(), screen.takeBottom(kNavHeight, toybox::kGutter), props);
}

// The doubled rule under a solid header. Local rather than shared because
// PlayerScreen, ChessScreens, ConnectionsScreens and LinkScreens each keep
// their own; another copy is cheaper than a header dependency between apps.
void toyboxChrome(toybox::Screen& screen, const char* title) {
  fui::HeaderProps header;
  header.title = title;
  header.borderEdges = fui::EdgesNone;
  toybox::headerBand(screen, header);
  screen.insetContent(fui::Insets{kChromeGap, toybox::kMargin, toybox::kMargin, toybox::kMargin});
}

// The card's own geometry: the air inside its frame, how far a note's text sits
// clear of its dot, and the slab around the type chip's cut.
constexpr int16_t kCardRadius = 10;
constexpr int16_t kCardPad = 12;
constexpr int16_t kNoteIndent = 22;
constexpr int16_t kNoteGap = 10;
constexpr int16_t kDotRadius = 5;
constexpr int16_t kChipPadX = 8;
constexpr int16_t kChipPadY = 3;

// Three cuts, three jobs. Under readingFaces() the title slot is the display
// cut, the body slot is the reading serif and the small slot is the dense
// Jersey one: a name read from arm's length, notes read as prose, and a
// classification that is a label rather than either.
fui::TextStyle nameStyle() {
  fui::TextStyle style;
  style.font = toybox::kDisplayFont;
  style.maxLines = 2;
  return style;
}

// White because it is knocked out of the chip's solid: GfxRendererTarget::text
// decides ink with `color != White`, so this is the one colour that draws paper.
fui::TextStyle typeStyle() {
  fui::TextStyle style;
  style.font = toybox::kSmallFont;
  style.color = fui::Color::White;
  style.align = fui::TextAlign::Center;
  return style;
}

// Twelve lines rather than three. maxLines is where layoutText starts
// ellipsizing, and nothing here is ever elided (docs/design-language.md), so
// this is headroom past the longest note the body width can hold -- not a
// budget. The height a note actually gets is measured, never this.
fui::TextStyle assetCardAbilityTextStyle() {
  fui::TextStyle style;
  style.font = toybox::kSmallFont;
  style.maxLines = 12;
  return style;
}

// What the card needs at `width`. Measured rather than fixed: a note is prose
// of whatever length the asset came with, so three reserved rows would either
// cut one short or leave a hole under all three.
int16_t assetCardHeight(toybox::Screen& screen, const int16_t width, const AssetCard& card) {
  const fui::DrawTarget& target = screen.target();
  const int16_t inner = static_cast<int16_t>(width - 2 * kCardPad);
  const int16_t noteWidth = static_cast<int16_t>(inner - kNoteIndent);

  int16_t height = static_cast<int16_t>(2 * kCardPad);
  height = static_cast<int16_t>(height + fui::measureWrappedText(target, card.name, nameStyle(), inner).height);
  height = static_cast<int16_t>(height + toybox::spaceBetween + target.lineHeight(typeStyle().font) + 2 * kChipPadY);
  height = static_cast<int16_t>(height + toybox::kGutter + toybox::kHairline + toybox::kGutter);
  for (uint8_t i = 0; i < kAssetNotes; ++i) {
    if (i > 0) height = static_cast<int16_t>(height + kNoteGap);
    height = static_cast<int16_t>(height + fui::measureWrappedText(target, card.notes[i], assetCardAbilityTextStyle(), noteWidth).height);
  }
  return height;
}

// The card itself, drawn into whatever box it is handed.
//
// An outline and one small solid, rather than a filled ground: the card is the
// part of the screen that changes when the asset changes, and the black you can
// afford is inversely proportional to how often it changes.
void assetCardFace(toybox::Screen& screen, const fui::Rect& box, const AssetCard& card) {
  fui::DrawTarget& target = screen.target();
  const fui::Paint ink = fui::Paint::solid(fui::Color::Black);
  target.stroke(box, ink, toybox::kRule, kCardRadius);

  const int16_t x = static_cast<int16_t>(box.x + kCardPad);
  const int16_t inner = static_cast<int16_t>(box.width - 2 * kCardPad);
  int16_t y = static_cast<int16_t>(box.y + kCardPad);

  const fui::TextStyle name = nameStyle();
  const int16_t nameHeight = fui::measureWrappedText(target, card.name, name, inner).height;
  target.text(fui::makeRect(x, y, inner, nameHeight), card.name, name);
  y = static_cast<int16_t>(y + nameHeight + toybox::spaceBetween);

  const fui::TextStyle type = typeStyle();
  const int16_t chipHeight = static_cast<int16_t>(target.lineHeight(type.font) + 2 * kChipPadY);
  const int16_t chipWidth = static_cast<int16_t>(target.measureText(type.font, card.type, type).width + 2 * kChipPadX);
  const fui::Rect chip = fui::makeRect(x, y, chipWidth, chipHeight);
  target.fill(chip, ink, static_cast<uint8_t>(chipHeight / 2));
  target.text(chip, card.type, type);
  y = static_cast<int16_t>(y + chipHeight + toybox::kGutter);

  target.fill(fui::makeRect(x, y, inner, toybox::kHairline), ink);
  y = static_cast<int16_t>(y + toybox::kHairline + toybox::kGutter);

  const fui::TextStyle note = assetCardAbilityTextStyle();
  const int16_t noteX = static_cast<int16_t>(x + kNoteIndent);
  const int16_t noteWidth = static_cast<int16_t>(inner - kNoteIndent);
  const int16_t noteLine = target.lineHeight(note.font);
  for (uint8_t i = 0; i < kAssetNotes; ++i) {
    const int16_t height = fui::measureWrappedText(target, card.notes[i], note, noteWidth).height;
    // Centred on the note's FIRST line, not on the block: a dot floating halfway
    // down five lines reads as belonging to the line beside it.
    toybox::disc(screen, static_cast<int16_t>(x + kNoteIndent / 2), static_cast<int16_t>(y + noteLine / 2), kDotRadius,
                 fui::Color::Black);
    target.text(fui::makeRect(noteX, y, noteWidth, height), card.notes[i], note);
    y = static_cast<int16_t>(y + height + kNoteGap);
  }
}

}  // namespace

// Placeholder art: InkForged has no icons of its own yet, so these borrow shelf
// glyphs whose shape reads close enough -- a grid, a walking figure, a stack.
const freeink::Icon& navIcon(const NavTab tab) {
  switch (tab) {
    case NavTab::Moves:
      return icon_cat_act_32;
    case NavTab::AssetCards:
      return icon_xkcd_32;
    case NavTab::Home:
      break;
  }
  return icon_apps_32;
}

void buildHome(toybox::Screen& screen) {
  toyboxChrome(screen, "INKFORGED");
  navBar(screen, NavTab::Home);

  // screen.body() is the first row this app owns. Nothing draws in it yet.
}

void buildMoves(toybox::Screen& screen) {
  toyboxChrome(screen, "MOVES");
  navBar(screen, NavTab::Moves);
}

void buildAssetCards(toybox::Screen& screen, const AssetCard& card) {
  toyboxChrome(screen, "ASSET CARDS");
  navBar(screen, NavTab::AssetCards);

  // takeTop clamps to what is left, so a card longer than the body is cut off
  // at the navigation row rather than drawn over it. One card is the whole view
  // for now; a deck of them is what needs scrolling.
  assetCardFace(screen, screen.takeTop(assetCardHeight(screen, screen.body().width, card)), card);
}

}  // namespace inkforgedui
