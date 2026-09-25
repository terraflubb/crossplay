#pragma once

// The INKFORGED screens: chrome, the navigation row, and whatever the open view
// draws between them.
//
// Freestanding in the PlayerScreen mould -- a screen in, a drawn frame out, no
// renderer and no Activity -- so host-tests/ui/ can assert what it drew and
// what it made tappable as soon as there is something to assert. When the app
// grows state, it arrives here as a model parameter; it does not arrive as
// members read off the Activity.

#include "../ui/ToyboxScreen.h"

namespace inkforgedui {

namespace fui = freeink::ui;

// Action ids only have to be unique within one painted frame. They are not a
// firmware-wide registry -- several apps reuse the same small numbers. The one
// real constraint is a shared builder composed into the same frame, which today
// means linkui's reserved 200s.
enum : fui::ActionId {
  ActionGoView = 360,  // value carries the NavTab
};

// The bottom navigation row, left to right, and the value ActionGoView carries.
// The activity's View enum stays private to the activity; this is the wire
// between them.
enum class NavTab : int16_t {
  Home = 0,
  Moves,
  AssetCards,
};

// The chrome every view wears, called first in each builder so nothing below
// can grow into it. Shared rather than private because each view lives in its
// own translation unit and they must agree on where the body starts.
void toyboxChrome(toybox::Screen& screen, const char* title);
void navBar(toybox::Screen& screen, NavTab active);

// Someday this might allow for underlining text, it's for rendering
// text which was pre-processed a bit. Except we aren't doing that now.
int16_t modestTextBlock(fui::DrawTarget&, int16_t x, int16_t y, int16_t width, const char* text, const fui::TextStyle& style);

// One builder per view, each in its own file once it outgrows a few lines.
// Each knows which view it is, so it can mark its own navigation cell as the
// selected one.
void buildHome(toybox::Screen& screen);
void buildMoves(toybox::Screen& screen);

// The art each navigation cell carries. Public because ToyboxIcons.h declares
// every icon `static const`, so each translation unit holds its own copy at its
// own address: a caller that picked the icon itself would be naming a different
// object than the one drawn here. host-tests/ui asks through this.
const freeink::Icon& navIcon(NavTab tab);

}  // namespace inkforgedui
