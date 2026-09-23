#pragma once

// INKFORGED: one screen, and the name on it. The starting point for the real
// app.
//
// Deliberately thin, the way PlayerActivity is: everything worth testing lives
// in InkForgedScreens (freestanding). What is left here is the render lock,
// the tap route and the way out.

#include <memory>

#include "../../activities/Activity.h"
#include "../ui/ToyboxScreen.h"

class InkForgedActivity final : public Activity {
 public:
  InkForgedActivity(GfxRenderer& renderer, MappedInputManager& mappedInput)
      : Activity("InkForged", renderer, mappedInput) {}
  ~InkForgedActivity() override = default;

  // Factory referenced by the shelf registry in ../Shelf.cpp.
  static std::unique_ptr<Activity> create(GfxRenderer& renderer, MappedInputManager& mappedInput);

  void onEnter() override;
  void loop() override;
  void render(RenderLock&&) override;

 private:
  toybox::Interactions interactions;
  // Taps are routed only against a frame that has actually been built, so the
  // first pass cannot dispatch against an empty table.
  bool interactionsReady = false;
};
