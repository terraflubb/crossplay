#include "InkForgedScreenAssetCard.h"
#include <cstdint>

#include "../ui/ToyboxTokens.h"
#include "apps_local/inkforged/InkForgedScreens.h"

namespace inkforgedui {
namespace {

// sqrt(3)/2 and its reciprocal, per thousand. A pointy-top hexagon is 2r tall
// and r*sqrt(3) wide, and a uniform stroke of w on the flats means insetting
// the circumradius by w * 2/sqrt(3), because the flats sit at r*sqrt(3)/2.
constexpr int32_t kHalfRoot3 = 866;
constexpr int32_t kInsetPerWeight = 1155;

// A regular pointy-top hexagon, by rows.
//
// Drawn as a series of rows rather than a fan of triangles,
// The robot thought that using polygon would introduce integer rounding
// errors creating gaps.
void hexagonRows(toybox::Screen& screen, const int16_t cx, const int16_t cy, const int16_t r,
                 const fui::Paint& paint) {
  if (r <= 0) return;
  for (int16_t dy = static_cast<int16_t>(-r); dy <= r; ++dy) {
    const int32_t away = dy < 0 ? -dy : dy;
    // Full width down the middle third, then a straight taper to each point.
    const int32_t flat = r * kHalfRoot3 / 1000;
    const int32_t taper = (r - away) * kHalfRoot3 * 2 / 1000;
    const int32_t half = taper < flat ? taper : flat;
    if (half <= 0) continue;
    screen.target().fill(fui::makeRect(cx - half, cy + dy, half * 2, 1), paint);
  }
}

// Filled, or hollow with `weight` of ink on the flats. Hollow is the ring()
// idiom -- ink, then a smaller one in paper on top -- which closes by
// construction rather than by six line() calls meeting at the corners.
void hexagon(toybox::Screen& screen, const int16_t cx, const int16_t cy, const int16_t r, const bool filled,
             const int16_t weight) {
  hexagonRows(screen, cx, cy, r, fui::Paint::solid(fui::Color::Black));
  if (filled) return;
  hexagonRows(screen, cx, cy, static_cast<int16_t>(r - weight * kInsetPerWeight / 1000),
              fui::Paint::solid(fui::Color::White));
}

// The card's own geometry: the air inside its frame, how far a note's text sits
// clear of its marker, and the slab around the type chip's cut.
constexpr int16_t kCardRadius = 10;
constexpr int16_t kCardPad = 12;
constexpr int16_t kNoteIndent = 22;
constexpr int16_t kNoteGap = 10;
// The bullet: centre to point, and the stroke left on the flats when hollow.
constexpr int16_t kBulletRadius = 8;
constexpr int16_t kBulletWeight = 2;
constexpr int16_t kTypePadX = 8;
constexpr int16_t kTypePadY = 3;

// Style for titles, robot suggest this be in a function
// I'm not sure why.
fui::TextStyle titleTextStyle() {
  fui::TextStyle style;
  style.font = toybox::kDisplayFont;
  style.maxLines = 2;
  return style;
}

// Text for the little labels, it's white because it goes
// on a dark rectangle
fui::TextStyle typeLabelStyle() {
  fui::TextStyle style;
  style.font = toybox::kSmallFont;
  style.color = fui::Color::White;
  style.align = fui::TextAlign::Center;
  return style;
}


// The text for the ability card. It's small.
fui::TextStyle assetCardAbilityTextStyle() {
  fui::TextStyle style;
  style.font = toybox::kSmallFont;
  // Each bulleted item can be at max 12 lines, if I don't set this
  // it's wrapped to 1 line. Usually the whole card is 12, so 36 is
  // a lot.
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
  height = static_cast<int16_t>(height + fui::measureWrappedText(target, card.name, titleTextStyle(), inner).height);
  height = static_cast<int16_t>(height + toybox::spaceBetween + target.lineHeight(typeLabelStyle().font) + 2 * kTypePadY);
  height = static_cast<int16_t>(height + toybox::kGutter + toybox::kHairline + toybox::kGutter);
  for (uint8_t i = 0; i < kAssetNotes; ++i) {
    if (i > 0) height = static_cast<int16_t>(height + kNoteGap);
    height = static_cast<int16_t>(height + fui::measureWrappedText(target, card.notes[i], assetCardAbilityTextStyle(),
                                                                  noteWidth)
                                               .height);
  }
  return height;
}

// The card itself, drawn into whatever box it is handed.
void assetCardFace(toybox::Screen& screen, const fui::Rect& box, const AssetCard& card) {
  fui::DrawTarget& target = screen.target();

  const fui::Paint blackPaint = fui::Paint::solid(fui::Color::Black);
  target.stroke(box, blackPaint, toybox::kRule, kCardRadius);

  // The never-changing X coordinate of the card
  const int16_t cardOriginX = static_cast<int16_t>(box.x + kCardPad);
  const int16_t cardOriginY = static_cast<int16_t>(box.y + kCardPad);

  // The width of the interior of the card
  const int16_t innerWidth = static_cast<int16_t>(box.width - 2 * kCardPad);

  // A sliding Y position we nudge as we move down
  int16_t currentY = cardOriginY;

  // Draw the title (name of the card)
  const fui::TextStyle titleStyle = titleTextStyle();
  const int16_t titleHeight = fui::measureWrappedText(target, card.name, titleStyle, innerWidth).height;
  target.text(fui::makeRect(cardOriginX, currentY, innerWidth, titleHeight), card.name, titleStyle);
  currentY = static_cast<int16_t>(currentY + titleHeight + toybox::spaceBetween);

  // Draw the little type label, white text on a black rounded rectangle
  const fui::TextStyle typeStyle = typeLabelStyle();
  const int16_t typeLabelHeight = static_cast<int16_t>(target.lineHeight(typeStyle.font) + 2 * kTypePadY);
  const int16_t typeLabelWidth = static_cast<int16_t>(target.measureText(typeStyle.font, card.type, typeStyle).width + 2 * kTypePadX);
  const fui::Rect typeLabelRect = fui::makeRect(cardOriginX, currentY, typeLabelWidth, typeLabelHeight);
  target.fill(typeLabelRect, blackPaint, static_cast<uint8_t>(typeLabelHeight / 2));
  target.text(typeLabelRect, card.type, typeStyle);
  currentY = static_cast<int16_t>(currentY + typeLabelHeight + toybox::kGutter);

  // Little line
  target.fill(fui::makeRect(cardOriginX, currentY, innerWidth, toybox::kHairline), blackPaint);
  currentY = static_cast<int16_t>(currentY + toybox::kHairline + toybox::kGutter);

  // Now for the text.
  const fui::TextStyle noteStyle = assetCardAbilityTextStyle();
  const int16_t noteX = static_cast<int16_t>(cardOriginX + kNoteIndent);
  const int16_t noteWidth = static_cast<int16_t>(innerWidth - kNoteIndent);
  const int16_t noteLineHeight = target.lineHeight(noteStyle.font);

  for (uint8_t i = 0; i < kAssetNotes; ++i) {
    // Start each note with a hexagon which might be full or empty
    hexagon(screen,
            static_cast<int16_t>(cardOriginX + kNoteIndent / 2),
            static_cast<int16_t>(currentY + noteLineHeight / 2),
            kBulletRadius,
            (i == 0),       // Hack for now, by default only the first one is solid.
            kBulletWeight);

    const int16_t blockHeight =  modestTextBlock(target, noteX, currentY, noteWidth, card.notes[i], noteStyle);
    currentY = static_cast<int16_t>(currentY + blockHeight + kNoteGap);
  }
}

}  // namespace

void buildAssetCards(toybox::Screen& screen, const AssetCard& card) {
  toyboxChrome(screen, "ASSET CARDS");
  navBar(screen, NavTab::AssetCards);

  // takeTop clamps to what is left, so a card longer than the body is cut off
  // at the navigation row rather than drawn over it.
  assetCardFace(screen, screen.takeTop(assetCardHeight(screen, screen.body().width, card)), card);
}

}  // namespace inkforgedui
