#pragma once

// The ASSET CARDS view: one card drawn as an outlined box -- name, type chip,
// rule, and the notes that explain it.
//
// Freestanding like every screen here: a screen and a model in, a drawn frame
// out, no renderer and no Activity.

#include "InkForgedScreens.h"

namespace inkforgedui {

// One asset: what it is called, what it is grouped under, and the notes that
// explain it. Pointers rather than owned strings, so a card can be drawn
// straight out of whatever buffer the caller loaded it into and this header
// stays freestanding.
constexpr uint8_t kAssetNotes = 3;

struct AssetCard {
  const char* name = "";
  const char* type = "";
  const char* notes[kAssetNotes] = {"", "", ""};
};

void buildAssetCards(toybox::Screen& screen, const AssetCard& card);

}  // namespace inkforgedui
