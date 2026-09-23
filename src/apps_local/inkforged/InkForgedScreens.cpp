#include "InkForgedScreens.h"

#include "../ui/ToyboxIcons.h"

namespace inkforgedui {
namespace {

// Tall enough for a 32px icon inside the component's pill and content insets.
constexpr int16_t kNavHeight = 56;
// Three views and room for three more. Empty slots keep the icons that exist
// from shifting sideways when a view is added.
constexpr uint8_t kNavSlots = 6;
constexpr uint8_t kNavViews = 3;

// Placeholder art: InkForged has no icons of its own yet, so these borrow shelf
// glyphs whose shape reads close enough -- a grid, a walking figure, a stack.
fui::BitmapRef navIcon(const NavTab tab) {
  switch (tab) {
    case NavTab::Home:
      return fui::bitmapFromIcon(icon_apps_32);
    case NavTab::Moves:
      return fui::bitmapFromIcon(icon_cat_act_32);
    case NavTab::AssetCards:
      return fui::bitmapFromIcon(icon_xkcd_32);
  }
  return {};
}

// The navigation row. The selected cell is the component's default treatment:
// a black pill with the icon knocked out white. tabBar skips frame.hit() for a
// disabled cell, so the empty slots draw nothing and cannot be tapped.
void navBar(toybox::Screen& screen, const NavTab active) {
  static constexpr NavTab kViews[kNavViews] = {NavTab::Home, NavTab::Moves, NavTab::AssetCards};

  fui::TabItem tabs[kNavSlots];
  for (uint8_t i = 0; i < kNavSlots; ++i) tabs[i].enabled = false;
  for (uint8_t i = 0; i < kNavViews; ++i) {
    tabs[i].icon = navIcon(kViews[i]);
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
  screen.insetContent(fui::Insets{toybox::kGutter * 3, toybox::kMargin, toybox::kMargin, toybox::kMargin});
}

void pill(toybox::Screen& screen, const char* label, const fui::ActionId action) {
  fui::ButtonProps props;
  props.label = label;
  props.action = action;
  screen.button(props, screen.takeBottom(toybox::kPillHeight, toybox::kGutter));
}

// Chrome along the bottom, called first in every builder so nothing above can
// grow into it. Laid out bottom-up: the navigation row sits lowest, the way out
// above it.
void footer(toybox::Screen& screen, const NavTab active) {
  navBar(screen, active);
  // Back is a swipe on this hardware and the pill is the visible affordance for
  // it; both land on the same shelf::leave().
  pill(screen, "BACK", ActionLeaveInkForged);
}

}  // namespace

void buildHome(toybox::Screen& screen) {
  toyboxChrome(screen, "INKFORGED");
  footer(screen, NavTab::Home);

  // screen.body() is the first row this app owns. Nothing draws in it yet.
}

void buildMoves(toybox::Screen& screen) {
  toyboxChrome(screen, "MOVES");
  footer(screen, NavTab::Moves);
}

void buildAssetCards(toybox::Screen& screen) {
  toyboxChrome(screen, "ASSET CARDS");
  footer(screen, NavTab::AssetCards);
}

}  // namespace inkforgedui
