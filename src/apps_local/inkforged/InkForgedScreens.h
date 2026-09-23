#pragma once

// The INKFORGED screen: chrome, the name, and a body with nothing in it yet.
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

// One builder per view. Each knows which view it is, so it can mark its own
// navigation cell as the selected one.
void buildHome(toybox::Screen& screen);
void buildMoves(toybox::Screen& screen);
void buildAssetCards(toybox::Screen& screen);

}  // namespace inkforgedui
