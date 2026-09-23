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

// Clear of chess (1-21), the shelf (100s), the link screens (200s) and the
// screens sharing the 300-352 block.
enum : fui::ActionId {
  ActionLeaveInkForged = 360,
};

void buildInkForged(toybox::Screen& screen);

}  // namespace inkforgedui
