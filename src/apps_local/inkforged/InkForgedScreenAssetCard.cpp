#include "InkForgedScreenAssetCard.h"

#include "../ui/ToyboxTokens.h"

namespace inkforgedui {
namespace {

// sqrt(3)/2 and its reciprocal, per thousand. A pointy-top hexagon is 2r tall
// and r*sqrt(3) wide, and a uniform stroke of w on the flats means insetting
// the circumradius by w * 2/sqrt(3), because the flats sit at r*sqrt(3)/2.
constexpr int32_t kHalfRoot3 = 866;
constexpr int32_t kInsetPerWeight = 1155;

// A regular pointy-top hexagon, by rows.
//
// Rows rather than a fan of triangles, although DrawTarget exposes triangle()
// and a hexagon is four of them: fillPolygon interpolates every edge from its
// own endpoints with truncating integer division, so the two triangles either
// side of a shared edge can land a pixel apart and leave a seam down the
// middle. A row is one fill and cannot disagree with itself. toybox::disc is
// drawn this way for the same reason, and its comment records what the
// hand-rolled alternative looked like.
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
    screen.target().fill(fui::makeRect(static_cast<int16_t>(cx - half), static_cast<int16_t>(cy + dy),
                                       static_cast<int16_t>(half * 2), 1),
                         paint);
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
constexpr int16_t kChipPadX = 8;
constexpr int16_t kChipPadY = 3;

// Three cuts, three jobs. Under readingFaces() the title slot is the display
// cut, the body slot is the reading serif and the small slot is the dense
// Jersey one: a name read from arm's length, notes read as prose, and a
// classification that is a label rather than either.
fui::TextStyle nameStyle() {
  fui::TextStyle style;
  style.font = toybox::kDisplayFont;
  style.maxLines = 2;
  return style;
}

// White because it is knocked out of the chip's solid: GfxRendererTarget::text
// decides ink with `color != White`, so this is the one colour that draws paper.
fui::TextStyle typeStyle() {
  fui::TextStyle style;
  style.font = toybox::kSmallFont;
  style.color = fui::Color::White;
  style.align = fui::TextAlign::Center;
  return style;
}

// Twelve lines rather than three. maxLines is where layoutText starts
// ellipsizing, and nothing here is ever elided (docs/design-language.md), so
// this is headroom past the longest note the body width can hold -- not a
// budget. The height a note actually gets is measured, never this.
fui::TextStyle assetCardAbilityTextStyle() {
  fui::TextStyle style;
  style.font = toybox::kSmallFont;
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
  height = static_cast<int16_t>(height + fui::measureWrappedText(target, card.name, nameStyle(), inner).height);
  height = static_cast<int16_t>(height + toybox::spaceBetween + target.lineHeight(typeStyle().font) + 2 * kChipPadY);
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
//
// An outline and one small solid, rather than a filled ground: the card is the
// part of the screen that changes when the asset changes, and the black you can
// afford is inversely proportional to how often it changes.
void assetCardFace(toybox::Screen& screen, const fui::Rect& box, const AssetCard& card) {
  fui::DrawTarget& target = screen.target();
  const fui::Paint ink = fui::Paint::solid(fui::Color::Black);
  target.stroke(box, ink, toybox::kRule, kCardRadius);

  const int16_t x = static_cast<int16_t>(box.x + kCardPad);
  const int16_t inner = static_cast<int16_t>(box.width - 2 * kCardPad);
  int16_t y = static_cast<int16_t>(box.y + kCardPad);

  const fui::TextStyle name = nameStyle();
  const int16_t nameHeight = fui::measureWrappedText(target, card.name, name, inner).height;
  target.text(fui::makeRect(x, y, inner, nameHeight), card.name, name);
  y = static_cast<int16_t>(y + nameHeight + toybox::spaceBetween);

  const fui::TextStyle type = typeStyle();
  const int16_t chipHeight = static_cast<int16_t>(target.lineHeight(type.font) + 2 * kChipPadY);
  const int16_t chipWidth = static_cast<int16_t>(target.measureText(type.font, card.type, type).width + 2 * kChipPadX);
  const fui::Rect chip = fui::makeRect(x, y, chipWidth, chipHeight);
  target.fill(chip, ink, static_cast<uint8_t>(chipHeight / 2));
  target.text(chip, card.type, type);
  y = static_cast<int16_t>(y + chipHeight + toybox::kGutter);

  target.fill(fui::makeRect(x, y, inner, toybox::kHairline), ink);
  y = static_cast<int16_t>(y + toybox::kHairline + toybox::kGutter);

  const fui::TextStyle note = assetCardAbilityTextStyle();
  const int16_t noteX = static_cast<int16_t>(x + kNoteIndent);
  const int16_t noteWidth = static_cast<int16_t>(inner - kNoteIndent);
  const int16_t noteLine = target.lineHeight(note.font);
  for (uint8_t i = 0; i < kAssetNotes; ++i) {
    const int16_t height = fui::measureWrappedText(target, card.notes[i], note, noteWidth).height;
    // Centred on the note's FIRST line, not on the block: a marker floating
    // halfway down five lines reads as belonging to the line beside it.
    hexagon(screen, static_cast<int16_t>(x + kNoteIndent / 2), static_cast<int16_t>(y + noteLine / 2), kBulletRadius,
            (i == 0), kBulletWeight);
    target.text(fui::makeRect(noteX, y, noteWidth, height), card.notes[i], note);
    y = static_cast<int16_t>(y + height + kNoteGap);
  }
}

}  // namespace

void buildAssetCards(toybox::Screen& screen, const AssetCard& card) {
  toyboxChrome(screen, "ASSET CARDS");
  navBar(screen, NavTab::AssetCards);

  // takeTop clamps to what is left, so a card longer than the body is cut off
  // at the navigation row rather than drawn over it. One card is the whole view
  // for now; a deck of them is what needs scrolling.
  assetCardFace(screen, screen.takeTop(assetCardHeight(screen, screen.body().width, card)), card);
}

}  // namespace inkforgedui
