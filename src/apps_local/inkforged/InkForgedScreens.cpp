#include "InkForgedScreens.h"

#include "../ui/ToyboxIcons.h"
#include "../ui/ToyboxTokens.h"

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

}  // namespace

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

}  // namespace inkforgedui
