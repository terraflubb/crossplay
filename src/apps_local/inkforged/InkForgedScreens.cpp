#include "InkForgedScreens.h"

namespace inkforgedui {
namespace {

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

// The two views this one is not, above the way out. Called first in every
// builder, so nothing above can grow into it. Laid out bottom-up: BACK sits
// lowest, then the second view, then the first.
void footer(toybox::Screen& screen, const char* firstLabel, const fui::ActionId firstAction,
            const char* secondLabel, const fui::ActionId secondAction) {
  // Back is a swipe on this hardware and the pill is the visible affordance for
  // it; both land on the same shelf::leave().
  pill(screen, "BACK", ActionLeaveInkForged);
  pill(screen, secondLabel, secondAction);
  pill(screen, firstLabel, firstAction);
}

}  // namespace

void buildHome(toybox::Screen& screen) {
  toyboxChrome(screen, "INKFORGED");
  footer(screen, "MOVES", ActionGoMoves, "ASSET CARDS", ActionGoAssetCards);

  // screen.body() is the first row this app owns. Nothing draws in it yet.
}

void buildMoves(toybox::Screen& screen) {
  toyboxChrome(screen, "MOVES");
  footer(screen, "HOME", ActionGoHome, "ASSET CARDS", ActionGoAssetCards);
}

void buildAssetCards(toybox::Screen& screen) {
  toyboxChrome(screen, "ASSET CARDS");
  footer(screen, "HOME", ActionGoHome, "MOVES", ActionGoMoves);
}

}  // namespace inkforgedui
