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

}  // namespace

void buildInkForged(toybox::Screen& screen) {
  toyboxChrome(screen, "INKFORGED");

  // Footer first, so nothing above can grow into it. Back is a swipe on this
  // hardware and the pill is the visible affordance for it; both land on the
  // same shelf::leave().
  fui::ButtonProps back;
  back.label = "BACK";
  back.action = ActionLeaveInkForged;
  screen.button(back, screen.takeBottom(toybox::kPillHeight, toybox::kGutter));

  // screen.body() is the first row this app owns. Nothing draws in it yet.
}

}  // namespace inkforgedui
