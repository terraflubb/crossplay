#pragma once

// The asset cards, generated from the source data by flubb/assets/asset_parser.rb.
//
// inline constexpr, so the table and every string in it live in flash rather
// than being copied into RAM at startup, and one entity rather than a copy per
// translation unit that includes this.

#include "InkForgedScreenAssetCard.h"

namespace inkforgedui {

inline constexpr AssetCard kCards[] = {
    {
        "Starship",
        "Command Vehicle",
        {
            "Your armed, multipurpose starship is suited for interstellar and atmospheric "
            "flight. It can comfortably transport several people, has space for cargo, and "
            "can carry and launch support vehicles. When you Advance, you may spend "
            "experience to equip this vehicle with module assets.",
            "When you Finish an Expedition (dangerous or greater) in your starship and score "
            "a hit, this journey strengthened your ties to your ship and any fellow "
            "travelers. You and your allies may mark 1 tick on your bonds legacy track.",
            "When you Withstand Damage, you may roll +heart. If you do, Endure Stress (-1) "
            "on a weak hit or miss.",
        },
    },
};

inline constexpr int kCardCount = static_cast<int>(sizeof(kCards) / sizeof(kCards[0]));

}  // namespace inkforgedui
