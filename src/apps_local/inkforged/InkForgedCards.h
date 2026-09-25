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
     "Your armed, multipurpose starship is suited\n"
     "for interstellar and atmospheric flight. It\n"
     "can comfortably transport several people,\n"
     "has space for cargo, and can carry and\n"
     "launch support vehicles. When you Advance,\n"
     "you may spend experience to equip this\n"
     "vehicle with module assets.",
     "When you Finish an Expedition (dangerous or\n"
     "greater) in your starship and score a hit,\n"
     "this journey strengthened your ties to your\n"
     "ship and any fellow travelers. You and your\n"
     "allies may mark 1 tick on your bonds legacy\n"
     "track.",
     "When you Withstand Damage, you may roll\n"
     "+heart. If you do, Endure Stress (-1) on a\n"
     "weak hit or miss."
  }
},
{
  "Engine Upgrade",
  "Module",
  {
     "Your vehicle's finely-tuned engines speed\n"
     "your travels. When you Undertake an\n"
     "Expedition (+edge) and score a strong hit,\n"
     "take +1 momentum; on a strong hit with a 6\n"
     "on your action die, take +2 momentum instead\n"
     "of +1.",
     "When you Enter the Fray, choose one (before\n"
     "rolling).\n"
     "* Maneuver: Add +1 and take +1 momentum on a\n"
     "strong hit.\n"
     "* Boost: Take +2 momentum on a hit.",
     "When you make a desperate move to pursue a\n"
     "foe, escape a threat, or get in range, you\n"
     "may push your engines to their limit. If you\n"
     "do (decide after rolling), reroll any dice\n"
     "and count a weak hit as a strong hit. Then,\n"
     "Withstand Damage (-2)."
  }
},
{
  "Expanded Hold",
  "Module",
  {
     "Your vehicle carries up to 3 cargo. When you\n"
     "gain +supply, you may convert it to +cargo.\n"
     "When you make a move +supply, you may add\n"
     "+cargo. When you Sacrifice Resources, you\n"
     "may instead suffer -cargo for any portion of\n"
     "the cost.",
     "When you score a miss or weak hit as you\n"
     "make a move to barter or negotiate, and you\n"
     "have at least 1 cargo, you may sweeten the\n"
     "pot. If you do, reroll all dice and add\n"
     "+cargo. Then, suffer -1 cargo.",
     "When you make a move to outrun a threat and\n"
     "have at least 1 cargo, you may first lighten\n"
     "your load by dropping cargo. If you do,\n"
     "suffer -cargo by the amount dropped, add\n"
     "+that amount, and take +2 momentum on a hit."
  }
},
{
  "Grappler",
  "Module",
  {
     "Your grappler can disrupt systems and snare\n"
     "machines and vehicles with a magnetic\n"
     "tether. When you take a minute or so to\n"
     "ready the grappler, roll +integrity or\n"
     "+wits. On a strong hit, the grappler is\n"
     "charged and may be fired. On a weak hit,\n"
     "charging requires extra time or focus; Lose\n"
     "Momentum (-1). On a miss, charging fails and\n"
     "you must Withstand Damage (-2). If you make\n"
     "a move to attack a foe or overcome an\n"
     "obstacle by firing the grappler, take an\n"
     "automatic strong hit.",
     "If you score a strong hit when readying the\n"
     "grappler, you may Sacrifice Resources (-1)\n"
     "to overcharge the module. When you fire an\n"
     "overcharged grappler, take +2 momentum; if\n"
     "in a fight, also mark progress.",
     "When you Take Decisive Action by firing the\n"
     "grappler, you may reroll one challenge die."
  }
},
{
  "Heavy Cannons",
  "Module",
  {
     "When you aim your cannons and use them to\n"
     "Strike, choose one.\n"
     "* Strafing run: Add +1 and take +1 momentum\n"
     "on a hit.\n"
     "* Focus fire: Mark progress on a hit, but\n"
     "Lose Momentum (-1).",
     "Once per fight, when you Clash by committing\n"
     "to an all-or-nothing exchange of fire, add\n"
     "+1, count a weak hit as a strong hit, and\n"
     "mark progress on a hit. On a miss, you must\n"
     "suffer a dire outcome.",
     "When you Compel, Enter the Fray, or Gain\n"
     "Ground by bringing your cannons to bear and\n"
     "sending a promise of violence to your foe\n"
     "over communication channels, add +1 and take\n"
     "+1 momentum on a hit. On a strong hit with a\n"
     "match, take another +1 momentum."
  }
},
{
  "Internal Refit",
  "Module",
  {
     "You have customized the cabins, common\n"
     "spaces, and environment of the ship to your\n"
     "needs. When you Undertake an Expedition\n"
     "(dangerous or greater), reroll any dice for\n"
     "the first leg of your journey. On a hit, you\n"
     "and your allies may envision how you make\n"
     "yourself at home; if you do, take +2\n"
     "momentum or +1 spirit.",
     "Your vessel is stocked with reserves. When\n"
     "you Sacrifice Resources and your supply is\n"
     "reduced to 0, first roll +integrity instead\n"
     "of marking unprepared. On a strong hit, take\n"
     "+1 supply. Otherwise, mark unprepared.",
     "When you Enter the Fray to oppose an invader\n"
     "within your vessel, reroll any dice. On a\n"
     "strong hit, take +momentum equal to\n"
     "integrity. On a strong hit with a match,\n"
     "also mark progress."
  }
},
{
  "Medbay",
  "Module",
  {
     "When you use your medbay to Heal yourself or\n"
     "another patient, you may reroll your action\n"
     "die if its value is less than your vehicle's\n"
     "integrity.",
     "When you or an ally mark the permanently\n"
     "harmed impact and are brought to the medbay\n"
     "without delay (less than an hour or so), you\n"
     "have a shot at making things right. If you\n"
     "Heal and score a strong hit, clear the\n"
     "impact (in addition to the other benefits of\n"
     "the move). Then, envision the scar that now\n"
     "serves as a reminder of the incident.",
     "When you Face Danger by performing a risky\n"
     "medical procedure, or if you Gather\n"
     "Information through an autopsy or medical\n"
     "examination, reroll any dice and take +1\n"
     "momentum on a hit."
  }
},
{
  "Missile Array",
  "Module",
  {
     "Your missile array is armed with 5 ammo.\n"
     "When you Strike or Clash with a missile\n"
     "attack, suffer -1 ammo and mark progress on\n"
     "a hit. If you Resupply in a place where your\n"
     "missiles can be replenished, you may\n"
     "exchange any earned +supply for +ammo.",
     "When you have at least 1 ammo and Gain\n"
     "Ground by locking a missile on target, add\n"
     "+1 and take +1 momentum on a hit.",
     "When you have at least 3 ammo and Take\n"
     "Decisive Action by unleashing all of your\n"
     "missiles, roll an action die before making\n"
     "the progress roll. If your action die is\n"
     "equal to or less than ammo, you may reroll\n"
     "any challenge dice. Then, set ammo to 0."
  }
},
{
  "Overseer",
  "Module",
  {
     "Your AI module keeps watch over the\n"
     "vehicle's systems and sensor data. When you\n"
     "Secure an Advantage or Gain Ground by\n"
     "talking through a situation with the\n"
     "overseer, you may roll +integrity. If you\n"
     "do, take +1 momentum on a hit.",
     "When you Withstand Damage and roll on the\n"
     "miss table, the overseer will do what it can\n"
     "to help. Roll twice on the table and choose\n"
     "either result.",
     "The overseer can pilot the vehicle\n"
     "independently. When you Face Danger by\n"
     "handing over control to the AI in an\n"
     "emergency, or to summon the vehicle remotely\n"
     "within a hazardous situation, you may roll\n"
     "+integrity. If you do, take +1 momentum on a\n"
     "hit."
  }
},
{
  "Reinforced Hull",
  "Module",
  {
     "Your vehicle is clad in iron. When you\n"
     "Withstand Damage, add +1. On a strong hit,\n"
     "take +1 momentum.",
     "Your reinforced hull is given a fierce and\n"
     "distinctive color or design. When you arrive\n"
     "at a place where your reputation is a\n"
     "factor, take +1 momentum. When you Enter the\n"
     "Fray against a foe who knows your\n"
     "reputation, take +momentum equal to your\n"
     "vehicle's integrity on a strong hit.",
     "When you React Under Fire by letting your\n"
     "reinforced hull take the hit, add +1 and\n"
     "take +1 momentum on a hit. On a strong hit\n"
     "with a match, take another +1 momentum as\n"
     "you surge through the chaos and put yourself\n"
     "in perfect position. On a miss, Pay the\n"
     "Price by marking this module as broken."
  }
},
{
  "Research Lab",
  "Module",
  {
     "When you use your lab to Secure an Advantage\n"
     "or Gather Information through careful\n"
     "analysis or experimentation, add +1 and take\n"
     "+1 momentum on a hit.",
     "When you Face Danger to isolate or secure a\n"
     "hazardous specimen, reroll any dice.",
     "When you Swear an Iron Vow to undertake a\n"
     "long-term research project (extreme or\n"
     "greater), reroll any dice. When you obtain\n"
     "crucial samples, equipment, or data, mark\n"
     "progress on the quest and take +2 momentum.\n"
     "When you devote extended time to the project\n"
     "in your lab, Face Danger and add +1. On a\n"
     "hit, mark progress. On a strong hit with a\n"
     "match, mark progress twice. When you Fulfill\n"
     "Your Vow and score a hit, also mark one box\n"
     "on your discoveries legacy track."
  }
},
{
  "Sensor Array",
  "Module",
  {
     "Your advanced sensors scan the paths ahead\n"
     "to help spot dangers. When you Undertake an\n"
     "Expedition (+wits), you may reroll one\n"
     "challenge die.",
     "When you Secure an Advantage or Gather\n"
     "Information by scanning your vehicle's\n"
     "surroundings or analyzing a nearby object,\n"
     "choose one and take +1 momentum on a hit.\n"
     "* Manual scan: Add +1\n"
     "* Automated scan: Instead of rolling the\n"
     "action die, make it the value of your\n"
     "vehicle's integrity",
     "When you Enter the Fray against an ambush,\n"
     "or Face Danger to detect a hidden threat,\n"
     "you may roll +integrity. If you do, reroll\n"
     "any dice and take +1 momentum on a hit."
  }
},
{
  "Shields",
  "Module",
  {
     "When you raise your shields, roll +your\n"
     "vehicle's integrity or +wits. On a strong\n"
     "hit, set your shields to 4. On a weak hit,\n"
     "make them 3. On a miss, make them 2 but Lose\n"
     "Momentum (-1). Then, if you Withstand\n"
     "Damage, ignore damage up to the value of\n"
     "your shields and suffer -1 shields. Raised\n"
     "shields last for a few minutes. If reduced\n"
     "to 0, they cannot be raised again for an\n"
     "hour or so.",
     "You may React Under Fire by letting your\n"
     "shields take the blow. If you do, roll\n"
     "+shields and take +2 momentum on a hit.",
     "When you Enter the Fray and score a strong\n"
     "hit, you may raise your shields to 3 without\n"
     "rolling. If you do, take +1 momentum."
  }
},
{
  "Stealth Tech",
  "Module",
  {
     "Your vehicle is rigged for silent running.\n"
     "When you make a move against a specific foe\n"
     "or threat to avoid detection, add +1. If you\n"
     "Enter the Fray by ambushing an unaware foe,\n"
     "add +1 and mark progress on a strong hit.",
     "When you travel stealthily as you Undertake\n"
     "an Expedition (+shadow), you may reroll your\n"
     "action die.",
     "When you are poised to Strike from hiding,\n"
     "you may roll +shadow. If you do, choose one\n"
     "(before rolling).\n"
     "* Strike true: Reroll any dice.\n"
     "* Strike hard: Mark progress on a hit.\n"
     "On a strong hit with a match, you also\n"
     "remain totally undetected; take +2 momentum\n"
     "and add +1 on your next Strike."
  }
},
{
  "Vehicle Bay",
  "Module",
  {
     "You may purchase or upgrade a support\n"
     "vehicle for 1 less experience. When you\n"
     "Repair a battered support vehicle, spend 1\n"
     "repair point (instead of 2).",
     "When a support vehicle is destroyed, and you\n"
     "are able to retrieve its wreckage, you may\n"
     "Ask the Oracle using the yes/no table if\n"
     "something can be salvaged from the mess.\n"
     "Make it 50/50. On a yes, spend 1 experience\n"
     "to restore the support vehicle asset with\n"
     "all previously marked abilities. Until you\n"
     "Repair and bring it back to full working\n"
     "order, the vehicle is battered with 0\n"
     "integrity.",
     "When you make a move to launch from or land\n"
     "on your command vehicle in a perilous\n"
     "situation or environment, reroll any dice\n"
     "and take +1 momentum on a hit."
  }
},
{
  "Workshop",
  "Module",
  {
     "When you Repair in the field, add +1.",
     "When you make a move in your workshop to\n"
     "craft, modify, deactivate, or disassemble a\n"
     "device or machine, you may reroll your\n"
     "action die if its value is less than your\n"
     "vehicle's integrity.",
     "When you Swear an Iron Vow to undertake a\n"
     "long-term engineering project (extreme or\n"
     "greater), reroll any dice. When you obtain a\n"
     "crucial part or resource, mark progress on\n"
     "the quest and take +2 momentum. When you\n"
     "devote extended time to the project in your\n"
     "workshop, Face Danger and add +1. On a hit,\n"
     "mark progress. On a strong hit with a match,\n"
     "mark progress twice. When you Fulfill Your\n"
     "Vow and score a hit, mark one extra box on\n"
     "your quests legacy track."
  }
},
{
  "Exosuit",
  "Support Vehicle",
  {
     "Your lumbering rig houses one pilot, is\n"
     "sealed against hostile environments, and is\n"
     "armed with fixed or held weapons. When you\n"
     "make a forceful, damaging, or resistant\n"
     "move, you may (after rolling) replace the\n"
     "value of your action die with the rig's\n"
     "integrity; if you do, Lose Momentum (-1).",
     "Your exosuit is equipped with thrusters. You\n"
     "can maneuver in zero-g, make thrust-assisted\n"
     "leaps, and drop to a surface from altitude.\n"
     "When you burn fuel to overcome a critical\n"
     "obstacle (decide after rolling), you may\n"
     "reroll any dice. If you do, Sacrifice\n"
     "Resources (-1).",
     "When you Withstand Damage, you may reroll\n"
     "one challenge die."
  }
},
{
  "Hoverbike",
  "Support Vehicle",
  {
     "Your unarmed hoverbike provides speedy\n"
     "planetside ground transport, and is equipped\n"
     "to carry up to two people and their gear.\n"
     "When you Undertake an Expedition (+edge),\n"
     "take +1 momentum on a hit. On a strong hit\n"
     "with a match, you also surge ahead or find a\n"
     "new path; mark progress.",
     "When you fire the bike's afterburner and\n"
     "make a move to perform a risky maneuver, you\n"
     "may add +integrity and take +2 momentum on a\n"
     "strong hit. If you do, count a weak hit as a\n"
     "miss.",
     "When you make a move while maneuvering your\n"
     "bike and burn momentum to improve your\n"
     "result, roll your action die. On a 5 or 6,\n"
     "do not reset momentum."
  }
},
{
  "Rover",
  "Support Vehicle",
  {
     "Your unarmed rover provides protected\n"
     "planetside transport. When you Undertake an\n"
     "Expedition or Set a Course, add +1. When you\n"
     "Finish an Expedition in your rover, you may\n"
     "reroll one challenge die.",
     "You may equip your rover with one module\n"
     "asset at no extra cost. When you Withstand\n"
     "Damage, the module can be broken or\n"
     "destroyed as with a command vehicle. If you\n"
     "reconfigure your rover, spend 1 experience,\n"
     "discard the module, and equip another with\n"
     "the same number of marked abilities.",
     "When you Face Danger or React Under Fire by\n"
     "taking a hit or crashing through an\n"
     "obstacle, you may roll +integrity. If you\n"
     "do, take +1 momentum on a hit."
  }
},
{
  "Service Pod",
  "Support Vehicle",
  {
     "Your unarmed utility vehicle houses one\n"
     "pilot for short-range, low gravity\n"
     "operations. When you make a move using the\n"
     "pod's manipulator arms to perform a delicate\n"
     "or forceful task, add +1 and take +1\n"
     "momentum on a hit.",
     "When you Face Danger, Gain Ground, or React\n"
     "Under Fire by maneuvering your pod through a\n"
     "hazardous or obstructed area, choose an\n"
     "approach and roll +integrity.\n"
     "* Careful: Add +2 and Lose Momentum (-1)\n"
     "* Reckless: Take +1 momentum on a hit",
     "When you make a move while controlling the\n"
     "pod and push its capabilities to the limit,\n"
     "you may take an automatic strong hit. If you\n"
     "do, Withstand Damage (-2)."
  }
},
{
  "Shuttle",
  "Support Vehicle",
  {
     "Your unarmed shuttle provides short-range\n"
     "transport for several people and equipment\n"
     "through space or atmosphere. When you travel\n"
     "to a location (not your command vehicle),\n"
     "you and your allies may take +1 momentum\n"
     "when you arrive",
     "When you Face Danger or React Under Fire to\n"
     "navigate through hazardous skies, avoid\n"
     "obstacles, or evade an attack, add +1 and\n"
     "take +1 momentum on a hit.",
     "Your shuttle is sealed against high pressure\n"
     "environments, can travel underwater, and is\n"
     "more resistant to damage; when you Withstand\n"
     "Damage, add +1."
  }
},
{
  "Skiff",
  "Support Vehicle",
  {
     "Your unarmed flatbed hover-vehicle carries\n"
     "several people, gear, and cargo over land or\n"
     "water. When you Undertake an Expedition or\n"
     "Set a Course, you may rely on the skiff's\n"
     "simple durability and roll +integrity. If\n"
     "you do, take +1 momentum on a hit.",
     "Your skiff is armed with a turreted cannon.\n"
     "When you Strike or Clash by firing the\n"
     "cannon, roll +integrity and take +1 momentum\n"
     "on a hit. On a strong hit with a match, your\n"
     "shots cause extra destruction or create\n"
     "havoc; mark progress.",
     "Your skiff is fully stocked. When you Check\n"
     "Your Gear, add +1 and take +1 momentum on a\n"
     "hit."
  }
},
{
  "Snub Fighter",
  "Support Vehicle",
  {
     "Your armed snub fighter carries a single\n"
     "pilot for space or atmospheric flight and\n"
     "combat. When you Enter the Fray, you may\n"
     "roll +integrity; if you do, take +2 momentum\n"
     "on a hit.",
     "When you Strike or Clash, add +1. On a\n"
     "strong hit with a match, mark progress.",
     "When you personally defeat a notable foe in\n"
     "your snub fighter, envision the victory mark\n"
     "you make on the fuselage. Tally your\n"
     "victories in this box. For every five, mark\n"
     "2 ticks on your quests legacy track."
  }
},
{
  "Ace",
  "Path",
  {
     "When you Face Danger or React Under Fire by\n"
     "guiding your vehicle through a hazard or out\n"
     "of harm's way, add +1 and take +1 momentum\n"
     "on a hit.",
     "When you Gain Ground by maneuvering your\n"
     "vehicle against a foe, add +1. If you score\n"
     "a strong hit with a 4, 5, or 6 on the action\n"
     "die, you may put yourself in firing\n"
     "position. If you do, set aside the action\n"
     "die or note its value. If you or an ally\n"
     "Strike using the vehicle's weapons, preset\n"
     "your action die with that value. This\n"
     "persists until you fail to score a strong\n"
     "hit on that move, or until you make another\n"
     "move which changes your vehicle's position.",
     "When you must Endure Stress while piloting a\n"
     "vehicle, you may roll +integrity. If you do,\n"
     "take +1 momentum on a strong hit."
  }
},
{
  "Archer",
  "Path",
  {
     "You carry 6 ammo. When you Strike or Clash,\n"
     "you may add +1 or +2 and suffer that amount\n"
     "as -ammo. To replenish your ammo by crafting\n"
     "projectiles, roll +wits. On a strong hit,\n"
     "take up to +6 ammo. On a weak hit, take up\n"
     "to +4 ammo and Sacrifice Resources (-1). On\n"
     "a miss, Sacrifice Resources (-1).",
     "You may Enter the Fray by unleashing a\n"
     "volley of bow shots. If you do, roll +ammo\n"
     "and suffer -1 ammo. On a hit, mark progress.",
     "When you load a specialized projectile such\n"
     "as a zip line, explosive, or electromagnetic\n"
     "disrupter, suffer -1 ammo. If you then take\n"
     "your shot by making a move, you may preset\n"
     "your action die to 5. On a hit, envision the\n"
     "effects and take +1 momentum."
  }
},
{
  "Armored",
  "Path",
  {
     "When you Face Danger, React Under Fire, or\n"
     "Clash against physical attacks or impact,\n"
     "you may put trust in your armor's strength.\n"
     "If you do, preset your action die to 4. On a\n"
     "strong hit with a match, take +2 momentum as\n"
     "you build confidence, make an impression on\n"
     "your foes, or improve your position.",
     "You add an important new piece to your set\n"
     "of armor, or upgrade its materials. As\n"
     "above, but preset your action die to 5\n"
     "instead of 4.",
     "When you must Endure Harm, you may instead\n"
     "let your armor take the hit. If you do, roll\n"
     "your action die. On a 4 or greater, ignore\n"
     "the harm. On a 1-3, ignore the harm but your\n"
     "armor is now broken; you must Repair and\n"
     "spend 5 repair points to bring it back to\n"
     "working condition."
  }
},
{
  "Artist",
  "Path",
  {
     "When you make a move to craft an artistic\n"
     "work, present an artistic gift or\n"
     "performance, or leave your artistic mark on\n"
     "an item or location, you may reroll your\n"
     "action die if its value is less than your\n"
     "spirit. On a strong hit, take +1 momentum or\n"
     "+1 spirit.",
     "When you Gather Information or Secure an\n"
     "Advantage by studying the aesthetics of a\n"
     "being or culture, add +2.",
     "When you create or perform a significant\n"
     "artistic work as a public memorial or\n"
     "tribute, roll +the stat which best\n"
     "represents the work's nature. On a strong\n"
     "hit, the work will stand the test of time;\n"
     "mark 2 ticks on your bonds legacy track. On\n"
     "a weak hit, its impact is short-lived; mark\n"
     "1 tick instead of 2. On a miss, the work is\n"
     "ignored, misunderstood, or co-opted, and you\n"
     "must Pay the Price."
  }
},
{
  "Augmented",
  "Path",
  {
     "You are equipped with an advanced\n"
     "prosthetic, implant, or mechanical\n"
     "enhancement. When you make a move directly\n"
     "aided by the augment, envision how it gives\n"
     "you exceptional capabilities and add +1. On\n"
     "a strong hit with a match, your augment\n"
     "exceeds expectations; take +2 momentum. On a\n"
     "miss with a match, the augment is broken;\n"
     "you must Repair and spend 3 repair points to\n"
     "bring it back to working condition.",
     "You are equipped with a second augment. It\n"
     "functions as above, but the benefits of the\n"
     "two augments do not stack.",
     "When you must Endure Harm or Face Death, you\n"
     "may instead mark an augment as broken.\n"
     "Repair it as detailed above."
  }
},
{
  "Bannersworn",
  "Path",
  {
     "You are bound to a clan, faction, or creed.\n"
     "When you Swear an Iron Vow in service to\n"
     "this ideology, reroll any dice. On a hit,\n"
     "mark 1 tick on your bonds legacy track.",
     "When you or an ally Sojourn and score a\n"
     "strong hit with a match, you may envision\n"
     "meeting someone of the same ideology. If you\n"
     "Make a Connection with them and score a hit,\n"
     "mark 1 tick on your bonds legacy track. When\n"
     "you Forge a Bond with anyone of your\n"
     "ideology, make the legacy reward one rank\n"
     "higher (1 extra box if already epic).",
     "When you make a progress move in direct\n"
     "service to your ideology, you may reroll one\n"
     "challenge die. If you score a strong hit\n"
     "with a match, your reputation grows among\n"
     "those who share your ideology; mark 1 tick\n"
     "on your bonds legacy track."
  }
},
{
  "Blademaster",
  "Path",
  {
     "When you Clash or Strike in close quarters,\n"
     "add +1. On a strong hit with a match, you\n"
     "are unstoppable; mark progress.",
     "If you Gain Ground by moving into close\n"
     "quarters against your foe, choose your\n"
     "approach.\n"
     "* Charge: Roll +heart, and mark progress on\n"
     "a hit.\n"
     "* Evade: Roll +edge, and take +1 momentum on\n"
     "a hit.",
     "You wield an iconic blade. Give it a name.\n"
     "When you Swear an Iron Vow by binding your\n"
     "promise to the blade, add +1. On a hit, fill\n"
     "the box below. If you make a move (including\n"
     "a progress move) using this oathbound blade\n"
     "and score a miss, you may clear the box to\n"
     "reroll any dice."
  }
},
{
  "Bounty Hunter",
  "Path",
  {
     "When you take a bounty contract and Swear an\n"
     "Iron Vow to see it done, add +1. On a strong\n"
     "hit, you've got a solid lead and may mark\n"
     "progress on the quest. When you Fulfill Your\n"
     "Vow on a hunt, make the legacy reward one\n"
     "rank higher (1 extra box if already epic).",
     "When you Gather Information related to a\n"
     "bounty, add +1. On a match, you reveal a\n"
     "surprising or sinister aspect of the\n"
     "contract; envision what you discover, and\n"
     "choose one.\n"
     "* Forge ahead: Mark progress on the quest.\n"
     "If you scored a strong hit with a match,\n"
     "also take +2 momentum.\n"
     "* Change loyalties: Forsake Your Vow and\n"
     "mark 2 ticks on your bonds legacy track.",
     "When you Take Decisive Action in a fight\n"
     "against a bounty target or their agents, you\n"
     "may reroll one challenge die."
  }
},
{
  "Brawler",
  "Path",
  {
     "When you Gain Ground by attempting to\n"
     "disarm, trip, shove, grapple, or stun your\n"
     "foe, add +1 and take +1 momentum on a hit.",
     "When you Clash in close quarters, you may\n"
     "draw on your momentum to gain advantage. If\n"
     "you do, Lose Momentum (-2) and choose one\n"
     "(before rolling).\n"
     "* Aggressive: Count a weak hit as a strong\n"
     "hit.\n"
     "* Defensive: Count a miss as a weak hit.",
     "When you Enter the Fray already positioned\n"
     "in close quarters against your foe, mark\n"
     "progress on a hit. On a strong hit with a\n"
     "match, your initial assault leaves them\n"
     "stunned; also take +2 momentum."
  }
},
{
  "Courier",
  "Path",
  {
     "When you Swear an Iron Vow to transport and\n"
     "protect something precious, set its safety\n"
     "to 5. When you Undertake an Expedition or\n"
     "Set a Course and score a weak hit or miss,\n"
     "you may suffer -1 safety as the cost. On a\n"
     "miss with a match, you must suffer -2 safety\n"
     "as the cost. When safety falls to 0,\n"
     "envision a major complication related to\n"
     "this mission. If you overcome the threat,\n"
     "mark progress twice on this quest. Then, set\n"
     "safety to 3.",
     "When you Fulfill Your Vow to an unbonded\n"
     "connection by completing a courier mission,\n"
     "mark progress twice on the relationship.",
     "When you Sojourn during a courier mission,\n"
     "you may roll +safety. On a strong hit, take\n"
     "+1 safety or +1 momentum."
  }
},
{
  "Demolitionist",
  "Path",
  {
     "When you make a move to attack, destroy, or\n"
     "sabotage by deploying or triggering an\n"
     "explosive device, choose the value of your\n"
     "charge before rolling: normal=1, high=2, or\n"
     "overcharged=3. If either challenge die is\n"
     "equal to or less than the charge, count a\n"
     "weak hit as a strong hit. If not, and your\n"
     "action die is equal to or less than the\n"
     "charge, you are caught up in the destruction\n"
     "or set off an unintended effect; count a\n"
     "weak hit as a miss.",
     "When you make a move to craft, modify, or\n"
     "disarm an explosive device, or if you\n"
     "threaten or provoke by arming an explosive\n"
     "device, add +1 and take +1 momentum on a\n"
     "hit.",
     "When your momentum is at its max, you may\n"
     "reset momentum (before rolling) to trigger\n"
     "an explosive device as you Take Decisive\n"
     "Action. If you do, reroll any challenge\n"
     "dice."
  }
},
{
  "Devotant",
  "Path",
  {
     "You worship a god, power, or entity. Give it\n"
     "a name and choose one of your stats to\n"
     "represent its nature. When you Secure an\n"
     "Advantage or Gain Ground by calling on it\n"
     "for guidance or aid, roll +linked stat. On a\n"
     "hit, take +1 momentum or +1 spirit. On a\n"
     "strong hit with a match, a miracle or sign\n"
     "manifests; take another +1 momentum or +1\n"
     "spirit.",
     "When you Swear an Iron Vow in service to\n"
     "your faith, roll +linked stat and take +2\n"
     "momentum or +2 spirit on a hit. When you\n"
     "Fulfill Your Vow on a divine quest\n"
     "(formidable or greater) and score a hit,\n"
     "also mark 2 ticks on your bonds legacy\n"
     "track.",
     "When you Hearten through contemplation or\n"
     "sharing of your faith, you may roll +linked\n"
     "stat. If you do, take +1 spirit or +1\n"
     "momentum on a strong hit."
  }
},
{
  "Diplomat",
  "Path",
  {
     "When you Swear an Iron Vow to resolve a\n"
     "dispute, negotiate an agreement, or gather\n"
     "support, add +1. On a strong hit, mark\n"
     "progress on the quest. When you Fulfill Your\n"
     "Vow on a diplomatic mission (formidable or\n"
     "greater) and score a hit, also mark 2 ticks\n"
     "on your bonds legacy track.",
     "When you make a move to defuse, reason, or\n"
     "negotiate, add +1. On a miss, you may take a\n"
     "different tack. Envision this new approach,\n"
     "reroll all dice, and add +2. If you score a\n"
     "miss yet again, face a dire complication or\n"
     "blow to your reputation as you Pay the\n"
     "Price.",
     "When you Make a Connection or Sojourn, add\n"
     "+1. If you Sojourn and score a strong hit\n"
     "with a match, you are shown great kindness\n"
     "or respect; take +2 momentum or make an\n"
     "extra recover move with an automatic strong\n"
     "hit."
  }
},
{
  "Empath",
  "Path",
  {
     "When you read the intent, emotions, or\n"
     "memories of a nearby being, roll +heart. On\n"
     "a strong hit, you glimpse a helpful aspect\n"
     "of their inner self. Envision what you\n"
     "learn, take +2 momentum, and add +1 when you\n"
     "make moves to interact with them in this\n"
     "scene. On a weak hit, the visions are murky;\n"
     "take +1 momentum. On a miss, you reveal a\n"
     "troubling motive or secret; Pay the Price.",
     "As above, and if you score a hit as you read\n"
     "them, you may subtly influence their\n"
     "attitude or actions, such as making a\n"
     "hostile being hesitate. Take another +1\n"
     "momentum. If in a fight, mark progress.",
     "When you Face Danger to soothe a being's\n"
     "distress by creating an empathic bond, roll\n"
     "+spirit and take +1 momentum on a hit. If\n"
     "they are an ally, also give them +2 spirit\n"
     "on a hit."
  }
},
{
  "Explorer",
  "Path",
  {
     "When you Explore a Waypoint, take +1\n"
     "momentum on a hit. When you Finish an\n"
     "Expedition and score a hit, mark 1 extra\n"
     "tick on your discoveries legacy track.",
     "When you come across a wondrous sight or\n"
     "phenomenon, such as an extraordinary planet,\n"
     "majestic creature, or dazzling stellar\n"
     "object, choose one:\n"
     "* Find inspiration: Take +1 momentum\n"
     "* Soak it all in: Hearten; add +1, and take\n"
     "+1 momentum on a hit.",
     "When you Secure an Advantage by studying a\n"
     "newfound place from a safe position, add +1\n"
     "and take +1 momentum on a hit. On a strong\n"
     "hit with a match, take another +1 momentum\n"
     "and envision an unusual aspect of the site."
  }
},
{
  "Fated",
  "Path",
  {
     "When you fill a box on your background vow\n"
     "progress track, also mark 1 tick on your\n"
     "quests legacy track. When you Fulfill Your\n"
     "Vow on the background vow, your fate is at\n"
     "hand; take an automatic strong hit and\n"
     "envision the final sacrifice that brings\n"
     "your story to an end.",
     "When you Face Death or Face Desolation while\n"
     "your background vow is unfulfilled, it is\n"
     "not yet your time. Instead of rolling, you\n"
     "may take an automatic strong hit. If you do,\n"
     "this asset counts as an impact (and you no\n"
     "longer have this protection) until you next\n"
     "Reach a Milestone on the background vow.",
     "When you make any progress move directly\n"
     "related to your background vow, and roll a\n"
     "10 on either challenge die, you may reroll\n"
     "that die. On a strong hit, take +2 momentum."
  }
},
{
  "Firebrand",
  "Path",
  {
     "You wield fiery energy. When you rest and\n"
     "meditate to gather this energy, roll\n"
     "+spirit. On a strong hit, take up to +3\n"
     "fire. On a weak hit, take +2. On a miss,\n"
     "take +2 fire but Endure Harm (-2). Your max\n"
     "fire is +5. When you make moves aided by\n"
     "this energy to attack or overcome obstacles,\n"
     "add +2 and suffer -1 fire.",
     "When you Endure Harm and score a strong hit\n"
     "with a match, you may instead ignore the\n"
     "harm and take +fire equal to the amount of\n"
     "harm faced (+1, +2, or +3).",
     "When you have at least +3 fire, you may Gain\n"
     "Ground or Strike by unleashing hell. If you\n"
     "do, take an automatic strong hit and mark\n"
     "progress. Then, set your fire to 0."
  }
},
{
  "Fugitive",
  "Path",
  {
     "You are hunted by a power or authority. When\n"
     "you make a move, you may improve the result\n"
     "to a strong hit. If you do, fill one segment\n"
     "of a four-segment clock to represent hunters\n"
     "closing in. When the clock is filled, a\n"
     "notable foe or force has tracked you down.\n"
     "If you overcome them or escape, reset the\n"
     "clock and mark 1 tick on your quests legacy\n"
     "track.",
     "When you make a move by hiding, concealing\n"
     "your identity, or fleeing from a pursuer,\n"
     "add +1 and take +1 momentum on a hit.",
     "When you Fulfill Your Vow (extreme or\n"
     "greater) by clearing your name or defeating\n"
     "the power or authority who marked you as a\n"
     "fugitive, gain this ability at no cost. You\n"
     "may then exchange this asset for another\n"
     "with the same number of marked abilities."
  }
},
{
  "Gearhead",
  "Path",
  {
     "When you make a move to craft, repair,\n"
     "repurpose, or modify equipment or\n"
     "technology, add +1 and take +1 momentum on a\n"
     "hit.",
     "When you Gather Information by studying or\n"
     "disassembling a machine or device, reroll\n"
     "any dice. On a match, you reveal an\n"
     "unexpected function, capability, or danger;\n"
     "mark 1 tick on your discoveries legacy\n"
     "track.",
     "With sufficient time (a couple of hours or\n"
     "more), you may Secure an Advantage to\n"
     "assemble or enhance a device for a powerful\n"
     "but limited role. On a hit, the device is\n"
     "ready for use. One time only, when you or an\n"
     "ally make a move aided by the device, take\n"
     "an automatic strong hit. If you are in a\n"
     "fight, also mark progress."
  }
},
{
  "Gunner",
  "Path",
  {
     "When you Strike, choose one (before\n"
     "rolling).\n"
     "* Pin them down: Add +1 and take +1 momentum\n"
     "on a hit.\n"
     "* Make them hurt: Mark progress on a hit.",
     "When you Take Decisive Action by emptying\n"
     "your gun (decide before rolling), you may\n"
     "Sacrifice Resources (-1) and reroll one\n"
     "challenge die. If the fight continues or you\n"
     "are caught up another fight, Check Your Gear\n"
     "to see if you have more ammo on-hand.",
     "Give your favorite gun a name. When you\n"
     "Clash with it, add +1. When you Enter the\n"
     "Fray or Endure Stress while wielding it, add\n"
     "+1 and take +1 momentum on a hit."
  }
},
{
  "Gunslinger",
  "Path",
  {
     "When you Enter the Fray by facing off\n"
     "against your foe (+heart), or by preparing\n"
     "to act without tipping them off (+shadow),\n"
     "add +1 and take +1 momentum on a hit. On a\n"
     "strong hit with a match, you may immediately\n"
     "take a shot (without making a move) and mark\n"
     "progress twice.",
     "When you Gain Ground or React Under Fire by\n"
     "moving into cover, add +1. On a strong hit,\n"
     "this cover gives you leverage; add +1 when\n"
     "you make a move to attack or defend at\n"
     "range. If you then score a miss, the cover\n"
     "is lost or compromised.",
     "When you Compel or Gain Ground with the\n"
     "threat of violence by holding someone at\n"
     "gunpoint, add +1 and take +1 momentum on a\n"
     "hit."
  }
},
{
  "Haunted",
  "Path",
  {
     "You are haunted by the spirit of someone\n"
     "whose death you caused or mourn (or both).\n"
     "When you make a move to call upon their\n"
     "insight, add +1. On a weak hit, also Endure\n"
     "Stress (-1). On a strong hit with a match,\n"
     "mark 1 tick on your bonds legacy track.",
     "When you Face Death guided by the spirit,\n"
     "add +1. On a strong hit, envision what you\n"
     "learn from them or about them, and mark 2\n"
     "ticks on your bonds legacy track.",
     "One time only, when you Fulfill Your Vow\n"
     "(extreme or greater) in service to the\n"
     "spirit, take this ability at no cost and\n"
     "choose one.\n"
     "* Let them go: Mark 2 ticks on your bonds\n"
     "legacy track for each marked ability, and\n"
     "discard this asset.\n"
     "* Bolster your link: When you use a HAUNTED\n"
     "asset ability, take +1 momentum on a hit."
  }
},
{
  "Healer",
  "Path",
  {
     "When you give medical care to Heal yourself\n"
     "or another character, add +1. If you are\n"
     "treating someone other than yourself, take\n"
     "+1 spirit or +1 momentum on a hit.",
     "When you Gather Information by studying\n"
     "medical evidence or biological remains, add\n"
     "+1 and take +1 momentum on a hit. On a\n"
     "strong hit with a match, you also reveal an\n"
     "unexpected medical anomaly; mark 1 tick on\n"
     "your discoveries legacy track.",
     "Once every day or so, when you are in a safe\n"
     "place with plenty of time on your hands, you\n"
     "may Sacrifice Resources (-1) and provide\n"
     "basic medical care for yourself, companions,\n"
     "or allies without risk. If you do, roll only\n"
     "your action die. On a 1-4, automatically\n"
     "give +1 health to everyone whose health is\n"
     "greater than 0. On a 5-6, make it +2."
  }
},
{
  "Infiltrator",
  "Path",
  {
     "When you make a move to break into a secure\n"
     "site, infiltrate a protected area, or hack\n"
     "or manipulate a secure system, add +1 and\n"
     "take +1 momentum on a hit. On a strong hit\n"
     "with a match, access is easier than\n"
     "expected; take another +1 momentum.",
     "When you Face Danger or Secure an Advantage\n"
     "to establish a false identity, add +1. On a\n"
     "hit, you may add +1 when using that identity\n"
     "to deceive or influence others. If you score\n"
     "a miss with a match when using that\n"
     "identity, your deception is completely and\n"
     "dramatically undone.",
     "When you Check Your Gear for a device with a\n"
     "specific function to aid in infiltration,\n"
     "espionage, or sabotage, add +1. On a hit,\n"
     "reroll any dice the first time you make a\n"
     "move aided by the device."
  }
},
{
  "Kinetic",
  "Path",
  {
     "You wield kinetic powers. By focusing, you\n"
     "may remotely push, pull, lift, or constrict\n"
     "objects and beings that are about your size\n"
     "or smaller. When you are in a risky\n"
     "situation and draw on your powers to make a\n"
     "move, add +2 and Lose Momentum (-2).",
     "As above, but you may instead draw on your\n"
     "powers in a desperate effort to change the\n"
     "outcome of an action. If you do, add +2\n"
     "(after you roll) and Lose Momentum (-3).",
     "When your momentum is at its max, you may\n"
     "attempt great kinetic feats, such as\n"
     "manipulating large objects and creating\n"
     "destructive bursts of concussive force. To\n"
     "do so, reset momentum. Then, as you make a\n"
     "single move fueled by your powers, take an\n"
     "automatic strong hit. If you are in a fight,\n"
     "mark progress."
  }
},
{
  "Leader",
  "Path",
  {
     "When you Aid Your Ally through leadership,\n"
     "coordination, or planning, add +1. On a\n"
     "strong hit, any allies who are present take\n"
     "+1 momentum.",
     "When you Enter the Fray (+heart) by\n"
     "coordinating with your team as they wade\n"
     "into the fight, make your move before your\n"
     "allies act. On a strong hit, all allies may\n"
     "take an automatic strong hit. On a strong\n"
     "hit with a match, also mark progress on any\n"
     "objectives in this fight.",
     "When you make a move to influence someone\n"
     "(not an ally) through leadership, add +1 and\n"
     "take +1 momentum on a hit. On a strong hit\n"
     "with a match, your command galvanizes them\n"
     "into unexpected action. Take another +1\n"
     "momentum, and mark 1 tick on your bonds\n"
     "legacy track."
  }
},
{
  "Looper",
  "Path",
  {
     "When you score a miss on a suffer move (not\n"
     "Endure Stress), you may loop back a second\n"
     "or two. If you do, Lose Momentum (-2),\n"
     "reroll any dice, and take +1 momentum on a\n"
     "strong hit.",
     "When you create a link to the current point\n"
     "in time, note the value of condition meters\n"
     "for you and your allies. You can retain only\n"
     "one active link. If you later loop back to\n"
     "this moment, roll +the gap in time: +4 if\n"
     "minutes, +3 if hours, or +2 if days. You may\n"
     "not burn momentum on this roll. On a strong\n"
     "hit, return to the linked point, retain any\n"
     "progress, and set condition meters (except\n"
     "for spirit) to their original values. On a\n"
     "weak hit, as above, but Endure Stress (-2).\n"
     "On a miss, as with a strong hit, but you\n"
     "find the timeline corrupted; Pay the Price.",
     "When you make a reroll granted by any asset\n"
     "ability on an action roll, also add +1."
  }
},
{
  "Lore Hunter",
  "Path",
  {
     "When you Swear an Iron Vow (formidable or\n"
     "greater) to recover valuable knowledge or an\n"
     "extraordinary relic, reroll any dice. When\n"
     "you Reach a Milestone in the pursuit of that\n"
     "quest, take +2 momentum. When you Fulfill\n"
     "Your Vow and score a hit, also mark 2 ticks\n"
     "on your discoveries legacy track.",
     "When you make a move to conduct extended\n"
     "research or study, reroll any challenge\n"
     "dice. On a match, you piece together an\n"
     "extraordinary or harrowing new theory;\n"
     "envision the nature of this revelation and\n"
     "mark 1 tick on your discoveries legacy\n"
     "track.",
     "When you recall esoteric knowledge to Secure\n"
     "an Advantage or Gain Ground, add +1. On a\n"
     "hit, envision the obscure but helpful fact,\n"
     "theory, or technique you put to use, and\n"
     "take +1 momentum."
  }
},
{
  "Loyalist",
  "Path",
  {
     "When you Aid Your Ally, add +1 and take +1\n"
     "momentum on a hit. This is in addition to\n"
     "the benefits taken by your ally. On a strong\n"
     "hit with a match, envision how this moment\n"
     "marks a breakthrough or milestone in your\n"
     "relationship; both of you may mark 1 tick on\n"
     "your bonds legacy track.",
     "You may burn momentum on behalf of an ally\n"
     "to improve their result on a move. If you\n"
     "do, your ally takes +1 momentum.",
     "When you stand with your ally as they make a\n"
     "progress move, envision how you support\n"
     "them. Then, roll one challenge die. On a\n"
     "1-9, your ally may replace one of their\n"
     "challenge dice with yours. On a 10, envision\n"
     "how you inadvertently undermine their\n"
     "action; your ally must replace their lowest\n"
     "challenge die with yours."
  }
},
{
  "Mercenary",
  "Path",
  {
     "When you agree to wage war or defend others\n"
     "from war in exchange for payment or\n"
     "promises, you may Swear an Iron Vow to see\n"
     "the mission done. If you do, reroll any\n"
     "dice. When you Fulfill Your Vow, make the\n"
     "legacy reward one rank higher (1 extra box\n"
     "if already epic).",
     "When you Make a Connection by searching out\n"
     "or making contact with someone in need of\n"
     "your services, add +1 and take +1 momentum\n"
     "on a hit. On a strong hit with a match, this\n"
     "mission pits you against an unresolved\n"
     "aspect of your past or a hated foe; mark 2\n"
     "ticks on your quests legacy track.",
     "When you Check Your Gear in the midst of a\n"
     "fight, or Resupply by looting the field of\n"
     "battle in the aftermath of a fight, add +2."
  }
},
{
  "Naturalist",
  "Path",
  {
     "When you Secure an Advantage or Gather\n"
     "Information using your knowledge of\n"
     "lifeforms or planetside ecosystems, add +1\n"
     "and take +1 momentum on a hit. On a strong\n"
     "hit with a match, you also confirm an\n"
     "obscure theory or reveal a surprising aspect\n"
     "of the encounter; mark 1 tick on your\n"
     "discoveries legacy track.",
     "When you make a move by taking a risky\n"
     "action to pacify, avoid, or outwit a\n"
     "creature (decide before rolling), you may\n"
     "reroll any dice, but must Lose Momentum\n"
     "(-2).",
     "You are skilled at planetside survival. When\n"
     "you Resupply to scavenge resources in a\n"
     "life-bearing natural environment, take +1\n"
     "supply on a hit. When you Face Danger\n"
     "against an environmental threat, add +1 and\n"
     "take +1 momentum on a hit."
  }
},
{
  "Navigator",
  "Path",
  {
     "When you Set a Course, choose one.\n"
     "* Follow the fastest path: Take +2 momentum\n"
     "on a strong hit.\n"
     "* Follow the safest path: Add +1\n"
     "On a strong hit with a match, you charted a\n"
     "new path during the journey; mark 1 tick on\n"
     "your discoveries legacy track.",
     "When you Secure an Advantage by charting the\n"
     "way forward, Face Danger to find a path\n"
     "around a hazard, or Gather Information about\n"
     "a location by studying your charts, add +1\n"
     "and take +1 momentum on a hit.",
     "Once per expedition, when you or an ally\n"
     "Undertake an Expedition and score a weak hit\n"
     "or miss, you may ignore that result, plot an\n"
     "alternate path, and make it an automatic\n"
     "strong hit."
  }
},
{
  "Outcast",
  "Path",
  {
     "When you Hearten in isolation, you may\n"
     "attempt to find solace in fond memories or a\n"
     "hopeful wish. If you do (decide before\n"
     "rolling), reroll any dice but count a strong\n"
     "hit as a weak hit.",
     "When you Sacrifice Resources and your supply\n"
     "is reduced to 0, roll +wits. On a strong\n"
     "hit, you manage to scrape by and take +1\n"
     "supply. On a weak hit, you may Lose Momentum\n"
     "(-1) in exchange for +1 supply. On a miss,\n"
     "your supply remains at 0 and you Lose\n"
     "Momentum (-1).",
     "When you or an ally Sojourn and score a\n"
     "strong hit with a match, you may envision\n"
     "encountering someone who knows or\n"
     "understands you. If you Make a Connection\n"
     "with them, take an automatic strong hit and\n"
     "mark 2 ticks on your bonds legacy track."
  }
},
{
  "Scavenger",
  "Path",
  {
     "When you Gather Information or Resupply by\n"
     "scavenging a wreck, ruin, or abandoned site,\n"
     "add +1 and take +1 momentum on a hit. On a\n"
     "strong hit with a match, you also find\n"
     "something of unique value, significance, or\n"
     "function; envision the nature of this\n"
     "discovery, take +2 momentum, and mark 2\n"
     "ticks on your discoveries legacy track.",
     "When you Secure an Advantage to cobble\n"
     "together an ad hoc tool, device, or weapon,\n"
     "envision what you intend to create. On a\n"
     "hit, you may add +1 when making a move aided\n"
     "by the item. If you roll a 1 on your action\n"
     "die while using the item, it is permanently\n"
     "broken, lost, or depleted.",
     "When you Check Your Gear, roll +wits or\n"
     "+supply (whichever is highest) and take +1\n"
     "momentum on a hit."
  }
},
{
  "Scoundrel",
  "Path",
  {
     "When you make a move by lying, bluffing,\n"
     "stealing, or cheating, add +2. On a strong\n"
     "hit with a match, your deception creates an\n"
     "unexpected opportunity; take the value of\n"
     "your shadow as +momentum.",
     "When you Make a Connection to search out a\n"
     "new contact, you may roll +shadow. If you\n"
     "do, reroll any dice on a miss and envision\n"
     "how your reputation or underworld contacts\n"
     "lead you to a disreputable connection.",
     "When you make a quick escape or con your way\n"
     "out of a situation and burn momentum to gain\n"
     "a strong hit, take +1 momentum after you\n"
     "reset. If you envision how this momentary\n"
     "success leaves you fated for future trouble,\n"
     "mark 2 ticks on your quests legacy track."
  }
},
{
  "Seer",
  "Path",
  {
     "When you envision experiencing a prophetic\n"
     "dream, you may Ask the Oracle for details\n"
     "using an interpretive oracle such as\n"
     "Action/Theme or Descriptor/Focus. If you\n"
     "record the answer, and later face a\n"
     "situation which gives truth to the vision,\n"
     "take an automatic strong hit (one time only)\n"
     "when making a move to act on your foresight.\n"
     "Then, clear the prophecy. Only one prophecy\n"
     "can be active at a time.",
     "When you focus or meditate to Gather\n"
     "Information about a place, being, or\n"
     "situation (in person or remotely), roll\n"
     "+spirit and take +1 momentum on a hit.",
     "When you or an ally roll a match as you\n"
     "Sojourn in a community or Undertake an\n"
     "Expedition within a site, you may envision\n"
     "gaining sudden and unbidden insight about\n"
     "the location. If you do, take +2 momentum."
  }
},
{
  "Shade",
  "Path",
  {
     "Drawing on esoteric energies, you may\n"
     "instantly cloak your form in the shadowy\n"
     "veil of the void. When you are veiled and\n"
     "make a move to ambush, hide, or sneak, you\n"
     "may preset your action die to 5. In\n"
     "darkness, make it 6. On a miss, in addition\n"
     "to any other cost, you are revealed and\n"
     "can't veil yourself again until the current\n"
     "situation is resolved.",
     "When you expand your veil to immerse your\n"
     "surroundings in darkness, roll +shadow. On a\n"
     "strong hit, the darkness extends to all\n"
     "adjacent spaces. On a weak hit, only your\n"
     "immediate surroundings are made dark. On a\n"
     "miss, you fail and draw unwanted attention.",
     "When you intentionally drop your veil to\n"
     "reveal yourself for dramatic or surprising\n"
     "effect, foregoing its further use in this\n"
     "situation, take +2 momentum."
  }
},
{
  "Slayer",
  "Path",
  {
     "When you make a move to investigate, track,\n"
     "or stalk an inhuman foe, add +1 and take +1\n"
     "momentum on a hit.",
     "When you Swear an Iron Vow (formidable or\n"
     "greater) to slay an inhuman foe in service\n"
     "to a community, reroll any dice. When you\n"
     "Fulfill Your Vow and score a hit, also mark\n"
     "2 ticks on your bonds legacy track.",
     "When you Enter the Fray with an objective to\n"
     "slay an inhuman foe, take +2 momentum. If\n"
     "you choose to face the creature on its own\n"
     "terms as you begin the fight, envision the\n"
     "crucial weapon, protection, or aid you set\n"
     "aside, and set the objective one rank\n"
     "higher. If you Take Decisive Action after\n"
     "making this sacrifice and score a strong\n"
     "hit, take a trophy of your victory and mark\n"
     "2 ticks on your quests legacy track."
  }
},
{
  "Sleuth",
  "Path",
  {
     "When you Swear an Iron Vow to solve a\n"
     "murder, disappearance, theft, or other\n"
     "mystery, make the rank of the quest no\n"
     "greater than formidable. Then, when you\n"
     "Gather Information in the course of the\n"
     "investigation, roll three challenge dice and\n"
     "choose two. If any challenge dice match, you\n"
     "must use those values. On a miss with a\n"
     "match, envision what you learn of a\n"
     "deepening conspiracy or betrayal, make the\n"
     "rank of your quest one higher (no greater\n"
     "than epic), and use the new rank when\n"
     "marking future progress.",
     "When you make a move to avoid detection as\n"
     "you put a person or place under\n"
     "surveillance, add +1 and take +1 momentum on\n"
     "a hit.",
     "When you Make a Connection with a potential\n"
     "informant, you may (instead of rolling) take\n"
     "an automatic weak hit."
  }
},
{
  "Sniper",
  "Path",
  {
     "When you target a minor foe from a distance\n"
     "(outside of a fight), roll +wits. On a\n"
     "strong hit, they are out of action. If other\n"
     "foes remain and you Enter the Fray against\n"
     "them, mark progress. On a weak hit, as\n"
     "above, but you sacrifice time or position;\n"
     "Lose Momentum (-1). On a miss, you draw\n"
     "attention or face a reprisal; Pay the Price.",
     "When you Strike from a distance with time\n"
     "enough to line up your shot, you may roll\n"
     "+wits. If you do, mark progress on a strong\n"
     "hit.",
     "When you Secure an Advantage by studying a\n"
     "distant situation through your rifle scope,\n"
     "or Gain Ground by taking careful aim, you\n"
     "may sacrifice time for greater certainty. If\n"
     "you do (decide before rolling), Lose\n"
     "Momentum (-1, -2, or -3) and add that\n"
     "amount. Then, take +1 momentum on a strong\n"
     "hit."
  }
},
{
  "Tech",
  "Path",
  {
     "When you make a move to configure, optimize,\n"
     "hack, or disrupt an electronic system, add\n"
     "+1. On a weak hit, you can choose to press\n"
     "your luck. If you do, reroll all dice and\n"
     "add +2 (instead of +1).",
     "When you Withstand Damage and score a miss,\n"
     "you may attempt to reroute power or reboot\n"
     "critical systems. If you do, first Lose\n"
     "Momentum (-2). Then, reroll all dice, add\n"
     "+wits instead of +integrity, and count a\n"
     "weak hit as a miss.",
     "When you Face Danger or Secure an Advantage\n"
     "by creating a computer program to perform a\n"
     "specific, complex function, add +2 and take\n"
     "+1 momentum on a hit. One time only, when\n"
     "you trigger the program to fulfill its\n"
     "purpose, reroll any dice."
  }
},
{
  "Trader",
  "Path",
  {
     "When you Sojourn or Compel, you may roll\n"
     "+supply. If you do, Sacrifice Resources\n"
     "(-1).",
     "When you Make a Connection with a merchant\n"
     "or supplier, add +1. When you Resupply by\n"
     "bartering with them, reroll your action die\n"
     "if its value is less than your supply. On a\n"
     "strong hit, take +1 momentum or +1 supply.",
     "When you or an ally Sojourn and score a\n"
     "strong hit with a match, you have a chance\n"
     "to secure a unique item or valuable payload.\n"
     "Envision the nature of the opportunity and\n"
     "the obstacle you must overcome to acquire\n"
     "it. If you are successful, mark 2 ticks on\n"
     "your quests legacy track. One time only, you\n"
     "may use this acquisition to gain an\n"
     "automatic strong hit on any move where your\n"
     "resources are a factor."
  }
},
{
  "Vestige",
  "Path",
  {
     "You are all that remains of a people,\n"
     "culture, or tradition. When you Face Death\n"
     "or Face Desolation, visions of your heritage\n"
     "give you the strength to carry on. Envision\n"
     "how this manifests, and reroll any dice. On\n"
     "a strong hit with a match, a surprising new\n"
     "aspect of your heritage is revealed; take +2\n"
     "momentum and mark 2 ticks on your bonds\n"
     "legacy track.",
     "When you Secure an Advantage or Compel\n"
     "through a tale, performance, or ceremony,\n"
     "envision what you reveal of your heritage.\n"
     "Then, add +1 and take +1 momentum on a hit.",
     "You carry a physical relic of your heritage.\n"
     "Envision its powers or nature. When you make\n"
     "a move directly aided by the relic and score\n"
     "a miss, you may reroll your action die."
  }
},
{
  "Veteran",
  "Path",
  {
     "When you are in a fight, increase your\n"
     "momentum reset by 1. Then, if you burn\n"
     "momentum to improve your result, add +1 on\n"
     "your next move.",
     "When you Make a Connection, add +1. If you\n"
     "roll a match, you have a history.\n"
     "* On a strong hit with a match, you once\n"
     "fought beside them, and they owe you a\n"
     "favor. Mark 1 tick on your bonds legacy\n"
     "track, and Develop Your Relationship now.\n"
     "* On a miss with a match, you once fought\n"
     "against them, and they hold a grudge.",
     "When you Secure an Advantage or Gain Ground\n"
     "by recounting or recalling a hard-won lesson\n"
     "from your battlefield experiences, envision\n"
     "the memory and add +1. On a hit, take +1\n"
     "momentum."
  }
},
{
  "Voidborn",
  "Path",
  {
     "You are most suited to life in the limitless\n"
     "void. When you are in space (or a spacebound\n"
     "vehicle or station), increase your momentum\n"
     "reset by 1. When you enter a planetside or\n"
     "high gravity environment, Lose Momentum\n"
     "(-1).",
     "When you Sojourn or Make a Connection within\n"
     "a spacebound community, add +1. If you\n"
     "Hearten there and score a strong hit, take\n"
     "+1 spirit or +1 momentum.",
     "When you make a move to perform an agile\n"
     "physical maneuver (such as leaping or\n"
     "evading) in a low gravity environment, add\n"
     "+1 and take +1 momentum on a hit. On a\n"
     "strong hit with a match, you build speed or\n"
     "put yourself in perfect position; take\n"
     "another +1 momentum."
  }
},
{
  "Weapon Master",
  "Path",
  {
     "You are a walking armory, with a weapon for\n"
     "every occasion. When you Enter the Fray in\n"
     "personal combat, add +1 and take +1 momentum\n"
     "on a hit. Once per fight, when you Gain\n"
     "Ground by switching weapons or changing\n"
     "tactics, take an automatic strong hit.",
     "When you Strike using a personal weapon\n"
     "which has limited ammo or a single-use mode,\n"
     "add +1 and mark progress on a hit. Then,\n"
     "Sacrifice Resources (-1). If you score a\n"
     "strong hit on this attack and immediately\n"
     "Take Decisive Action, you may retain the\n"
     "value of one challenge die from your Strike\n"
     "action instead of rolling that die.",
     "When you Secure an Advantage by suiting up\n"
     "and gathering your gear for a perilous\n"
     "encounter or mission, you may roll +supply.\n"
     "If you do, take +2 momentum on a hit."
  }
},
{
  "Crew Commander",
  "Path",
  {
     "You have 2 command; your max is 4. When you\n"
     "or an ally make a move leading or aided by\n"
     "your crew, you may (after rolling) suffer -1\n"
     "command and improve a miss to a weak hit, or\n"
     "a weak hit to a strong hit. When you Pay the\n"
     "Price, you may suffer the cost as -1\n"
     "command. If you Face Danger as a test of\n"
     "your leadership, roll +command. To bolster\n"
     "your crew, provide a significant reward or\n"
     "respite; then, roll +heart. On a strong hit,\n"
     "take +4 command. On a weak hit, take +2. On\n"
     "a miss, take +2 but envision a threat to\n"
     "your crew or leadership.",
     "Take +2 command; your max is now 6.",
     "When your command is 0 and the situation\n"
     "desperate, you may Compel your crew to\n"
     "action; if you do, take +2 command on a hit."
  }
},
{
  "Banshee",
  "Companion",
  {
     "Your banshee companion accompanies you on\n"
     "planetside missions, using its echolocation\n"
     "to help guide the way. When you ride your\n"
     "banshee as you Undertake an Expedition or\n"
     "Set a Course, you may roll +its health.",
     "When you make a move astride the banshee to\n"
     "detect a threat or avoid a fight, add +1 and\n"
     "take +1 momentum on a hit. On a strong hit\n"
     "with a match, you're gone in a flash; take\n"
     "another +1 momentum.",
     "When you make a combat move and roll a 1 on\n"
     "your action die, the banshee senses the\n"
     "danger and emits a powerful scream to alert\n"
     "you or distract your foes. You may reroll\n"
     "that die."
  }
},
{
  "Combat Bot",
  "Companion",
  {
     "Your combat bot companion fights at your\n"
     "side. When you Strike aided by the bot, add\n"
     "+1; if you Clash, take +1 momentum on a hit.",
     "When you use the threat of violence to\n"
     "Compel or Gain Ground while the bot brings\n"
     "its weapons to bear, you may roll +its\n"
     "health. If you do, take +1 momentum on a\n"
     "hit. On a strong hit with a match, the bot's\n"
     "display is especially persuasive; take\n"
     "another +1 momentum.",
     "Once per fight, when you React Under Fire by\n"
     "using the bot to draw fire or create a\n"
     "diversion, roll +its health. On a strong\n"
     "hit, mark progress. On a weak hit, face the\n"
     "cost as normal, but then you are in control."
  }
},
{
  "Glowcat",
  "Companion",
  {
     "Your glowcat companion perceives the inner\n"
     "emotions and intentions of people and\n"
     "creatures in its vicinity, and embodies\n"
     "those impressions through the colors and\n"
     "intensity of its luminescent fur. When you\n"
     "Secure an Advantage by studying the\n"
     "glowcat's reactions in a charged\n"
     "interaction, add +its health.",
     "When you Compel, the glowcat's reactions\n"
     "will help guide your approach; you may\n"
     "reroll your action die if its value is less\n"
     "than the glowcat's health.",
     "When you Endure Stress in the company of the\n"
     "glowcat, add +1. On a strong hit with a\n"
     "match, take +momentum equal to their health."
  }
},
{
  "Protocol Bot",
  "Companion",
  {
     "Your protocol bot companion is programmed\n"
     "with knowledge of cultures, languages, and\n"
     "customs. When you are aided by the bot as\n"
     "you make a move in a formal social\n"
     "interaction, add +1. On a strong hit with a\n"
     "match, you learn something which builds\n"
     "understanding or empathy; also mark 1 tick\n"
     "on your bonds legacy track.",
     "When you first visit or interact with a new\n"
     "community or culture, you may ask for the\n"
     "bot's insight. If you do, envision what you\n"
     "learn and take +1 momentum.",
     "If you make a move in a charged interaction\n"
     "and the value of your action die is less\n"
     "than the bot's health, you may reroll it as\n"
     "the bot interjects with their commentary or\n"
     "advice."
  }
},
{
  "Rockhorn",
  "Companion",
  {
     "Your rockhorn companion uses its resilient,\n"
     "stone-like hide and brute strength to\n"
     "overcome threats. When you make a move by\n"
     "sending the rockhorn to directly attack a\n"
     "foe or smash an obstacle, roll +its health.",
     "When you make the Companion Takes a Hit move\n"
     "for the rockhorn, count a weak hit as a\n"
     "strong hit. On a strong hit with a match,\n"
     "its rapid healing makes it unstoppable; give\n"
     "it another +1 health or take +1 momentum.",
     "The rockhorn will come to your aid in your\n"
     "most vulnerable moments. When you Endure\n"
     "Harm or Endure Stress and score a miss, you\n"
     "may reroll your action die if its value is\n"
     "less than the rockhorn's health."
  }
},
{
  "Sidekick",
  "Companion",
  {
     "Your sidekick has a helpful expertise. When\n"
     "you make a move outside of a fight directly\n"
     "aided by their expertise, you may reroll\n"
     "your action die if its value is less than\n"
     "your sidekick's health. If you then score a\n"
     "strong hit with a match, mark 1 tick on your\n"
     "bonds legacy track.",
     "When you Enter the Fray with the support of\n"
     "your sidekick, take +2 momentum on a hit.\n"
     "When you Clash together, add +1.",
     "When your sidekick acts to get you out of a\n"
     "tough spot, you may Face Danger or React\n"
     "Under Fire and roll +their health (instead\n"
     "of your own stat). On a hit, take +1\n"
     "momentum."
  }
},
{
  "Sprite",
  "Companion",
  {
     "Your sprite companion alters its delicate,\n"
     "crystalline form to fly, swim, or scurry,\n"
     "and can covertly navigate even the harshest\n"
     "of environments. When you make a move by\n"
     "sending it to perform trickery (such as\n"
     "creating a distraction, sneaking into a\n"
     "protected location, or stealing an object)\n"
     "add +its health.",
     "You are attuned to the resonance of the\n"
     "sprite's crystalline structure, and can\n"
     "communicate with it at a distance and\n"
     "perceive through its senses. When you Secure\n"
     "an Advantage by observing a situation from\n"
     "its perspective, or remotely Gather\n"
     "Information, add +its health.",
     "With a moment's rest, the sprite can mend\n"
     "its form and return automatically to max\n"
     "health."
  }
},
{
  "Survey Bot",
  "Companion",
  {
     "Your survey bot companion scans the path\n"
     "ahead. When you Undertake an Expedition\n"
     "(+wits) overland or within a site, add +1.",
     "Once per expedition, when you Secure an\n"
     "Advantage by sending the bot to scout ahead,\n"
     "roll +its health. On a hit, also mark\n"
     "progress on the expedition. On a strong hit\n"
     "with a match, the bot uncovers an unexpected\n"
     "feature or location; envision what it\n"
     "reveals and mark 1 tick on your discoveries\n"
     "legacy track.",
     "When you Explore a Waypoint aided by the\n"
     "bot's sensors, or Face Danger to detect a\n"
     "threat, roll +its health and take +1\n"
     "momentum on a hit."
  }
},
{
  "Symbiote",
  "Companion",
  {
     "You are physically bound to a being with 2\n"
     "health. When you make aggressive moves while\n"
     "giving yourself to the symbiote's power, add\n"
     "+its health. If you face physical harm,\n"
     "choose either the Endure Harm or Companion\n"
     "Takes a Hit move. To restore the symbiote's\n"
     "health, you must Endure Stress and give the\n"
     "symbiote +health equal to the -spirit you\n"
     "face. If you make a move aided by the\n"
     "symbiote and roll a 1 on your action die,\n"
     "your fragile bond is broken for several\n"
     "hours.",
     "When you make a move and heed the symbiote's\n"
     "guidance (decide after rolling), you may\n"
     "reroll any dice. Then, Endure Stress (-2).",
     "The symbiote gains power and has 3 health."
  }
},
{
  "Utility Bot",
  "Companion",
  {
     "Your utility bot companion has helpful tools\n"
     "at-hand. When you make a move by directing\n"
     "it to access a system, cut through an\n"
     "obstacle, analyze a mechanical issue, or\n"
     "assemble or disassemble a device, roll +its\n"
     "health and take +1 momentum on a hit. On a\n"
     "strong hit with a match, it reveals an\n"
     "unexpected advantage or insight; take\n"
     "another +1 momentum.",
     "When you Repair aided by the bot, add +1. On\n"
     "a miss, it reveals an alternative approach\n"
     "which will take extra time; you may reroll\n"
     "any dice, but first Lose Momentum (-2).",
     "When you Check Your Gear to see if the bot\n"
     "has a specific tool or technique available,\n"
     "roll +its health and take +1 momentum on a\n"
     "hit."
  }
},
{
  "Voidglider",
  "Companion",
  {
     "Your voidglider companion cruises in your\n"
     "starship's energy wake and can help guide\n"
     "the way on spaceborne journeys. When you\n"
     "Undertake an Expedition, add +1.",
     "The voidglider is harnessed and trained as a\n"
     "mount, and can be ridden for short-range\n"
     "spacebound transport. When you are riding\n"
     "the voidglider and make a move to detect or\n"
     "evade a threat by relying on its instincts,\n"
     "roll +its health.",
     "When you make a move by signaling the\n"
     "voidglider to distract or attack a\n"
     "spaceborne foe, roll +its health and take +1\n"
     "momentum on a hit."
  }
},
{
  "Bonded",
  "Deed",
  {
     "This person is your bond-mate. When you\n"
     "Sojourn at their home, Hearten in their\n"
     "presence, or Test Your Relationship or\n"
     "Develop Your Relationship with them, reroll\n"
     "any dice. On a strong hit, take +1 momentum.",
     "When you Set a Course back to your\n"
     "bond-mate's location, add +heart. On a\n"
     "strong hit with a match, envision a special\n"
     "reunion and mark two ticks on your bonds\n"
     "legacy track.",
     "When you make a move in a crucial moment and\n"
     "score a miss, you may cling to thoughts of\n"
     "your bond-mate for support. If you do,\n"
     "reroll any dice. On another miss, in\n"
     "addition to the outcome of the move, you\n"
     "must mark shaken or traumatized. If both\n"
     "debilities are already marked, Face\n"
     "Desolation."
  }
},
{
  "Homesteader",
  "Deed",
  {
     "You have chosen or established a community\n"
     "as your home. When you Swear an Iron Vow\n"
     "(formidable or greater) in service to your\n"
     "home, reroll any dice. On a hit, mark 1 tick\n"
     "on your bonds legacy track. When you Fulfill\n"
     "Your Vow and score a hit, also mark 2 ticks\n"
     "on your bonds legacy track.",
     "When you Sojourn in your home, choose one.\n"
     "* Don't linger: Take an automatic weak hit\n"
     "* Stay a bit: Add +1 and take +1 momentum on\n"
     "a hit",
     "When you Set a Course for home, you may\n"
     "reroll your action die if its value is less\n"
     "than your spirit."
  }
},
{
  "Marked",
  "Deed",
  {
     "Envision the title, sigil, uniform, or\n"
     "tattoo you bear in recognition of your\n"
     "achievements. When you Compel or Make a\n"
     "Connection among those who would know your\n"
     "reputation, add +1. On a strong hit with a\n"
     "match, your notoriety grows; mark 2 ticks on\n"
     "your bonds legacy track.",
     "When you risk your reputation to overcome a\n"
     "miss, reroll any dice. If you score a miss\n"
     "again, fill one segment of a six-segment\n"
     "clock to represent the stain on your\n"
     "reputation. When the clock is filled,\n"
     "discard this asset.",
     "Once per fight, when you Gain Ground through\n"
     "intimidation or command, reroll any dice and\n"
     "mark progress on a hit."
  }
},
{
  "Oathbreaker",
  "Deed",
  {
     "This asset counts as an impact. One time\n"
     "only, when you Swear an Iron Vow (extreme or\n"
     "greater) to redeem yourself, give that vow a\n"
     "special mark. When you Reach a Milestone on\n"
     "the marked vow, take +2 momentum. If you\n"
     "Forsake Your Vow on the quest, discard this\n"
     "asset and retain the impact.",
     "When you Secure an Advantage or Compel by\n"
     "reaffirming your commitment to your marked\n"
     "vow, add +1 and take +1 momentum on a hit.",
     "When you Fulfill Your Vow on the marked\n"
     "quest and score a hit, you find redemption\n"
     "and automatically gain this ability at no\n"
     "cost. You may then improve one of your stats\n"
     "by +1 and discard this asset. Once the asset\n"
     "is discarded, you may not take it again."
  }
},
{
  "Revenant",
  "Deed",
  {
     "When you are at 0 health, and Endure Harm or\n"
     "Face Death, add +1. You may then reroll your\n"
     "action die if its value is less than your\n"
     "spirit.",
     "When you Take Decisive Action by bringing\n"
     "death to a foe, you may burn momentum to\n"
     "zero out one (not both) of the challenge\n"
     "dice if your momentum is greater than the\n"
     "value of that die. If you do, Endure Stress\n"
     "(-2).",
     "When you Gather Information by studying a\n"
     "place where death left its mark, you may\n"
     "roll +heart. If you do, take +1 momentum on\n"
     "a hit. On a strong hit with a match, you\n"
     "experience a detailed vision or insightful\n"
     "revelation of what occurred here; take +1\n"
     "momentum more."
  }
},
{
  "Survivor",
  "Deed",
  {
     "When you are haunted by past experiences and\n"
     "must Endure Stress, you may Lose Momentum\n"
     "(-1) before rolling as you attempt to find\n"
     "focus or calm. If you do, reroll any dice.\n"
     "On a strong hit, take +1 momentum.",
     "When you make a move where a lasting effect\n"
     "(traumatized or permanently harmed) has a\n"
     "narrative impact on the scene or your\n"
     "approach, and burn momentum to improve your\n"
     "result, you may envision what sustains or\n"
     "motivates you in this moment. If you do,\n"
     "mark 1 tick on your quests or bonds legacy\n"
     "track. On a strong hit with a match, mark 2\n"
     "ticks.",
     "You are learning to live with this impact.\n"
     "The lasting effect (traumatized or\n"
     "permanently harmed, but not both) remains\n"
     "marked, but no longer reduces your max\n"
     "momentum or reset."
  }
},
{
  "Vanguard",
  "Deed",
  {
     "When you seek a safe location in a remote\n"
     "environment, make a progress roll against\n"
     "your discoveries legacy track. On a strong\n"
     "hit, you establish a haven; add +2 whenever\n"
     "you make a recovery move at that location.\n"
     "On a weak hit, as above, but add +1 when\n"
     "making a recovery move. On a miss, you are\n"
     "drawn into a bad situation and must Pay the\n"
     "Price. If you establish a haven but score a\n"
     "miss on a recovery move, that location is no\n"
     "longer safe.",
     "When you make a move +wits and score a\n"
     "strong hit with a match, your hard-won\n"
     "experience lends insight; take +1 momentum.",
     "When you Endure Stress, you may roll +wits.\n"
     "If you do, take +1 momentum on a hit."
  }
},
{
  "Cohort",
  "Deed",
  {
     "You gain a specialist. The specialist is\n"
     "part of your crew, but is managed as a\n"
     "connection and provides benefits to you and\n"
     "your allies per their role. When you\n"
     "Withstand Damage and score a miss, or if you\n"
     "Pay_the_Price, you may suffer the cost by\n"
     "noting the specialist as out of action. An\n"
     "out of action specialist provides no\n"
     "benefit. To restore a specialist to duty,\n"
     "resolve the situation as appropriate to the\n"
     "nature of the injury, trauma, or dispute.",
     "You may gain additional specialists by\n"
     "spending 1 experience to add a connection to\n"
     "your crew as a specialist. Specialist\n"
     "bonuses may not be stacked for a single\n"
     "action.",
     "When you Secure an Advantage by gathering\n"
     "your specialists to strategize or\n"
     "problem-solve, you may reroll one die for\n"
     "each participating specialist."
  }
},
{
  "Fleet Commander",
  "Deed",
  {
     "Your fleet has a starting and max power of\n"
     "4. When you make a move as a fleetwide\n"
     "action to get in position, avoid a hazard,\n"
     "or fight, roll +power. If you Pay the Price\n"
     "and your fleet bears the cost, suffer -1\n"
     "power. At 0 power, mark the fleet as\n"
     "wrecked. To refit the fleet, Sojourn and\n"
     "forego an automatic strong hit on a recover\n"
     "move to take +2 power; if the fleet is\n"
     "wrecked, first spend 2 experience to clear\n"
     "that status.",
     "Take +2 power and set your max power to 5.",
     "When you Undertake an Expedition, you may\n"
     "reroll your action die if its value is less\n"
     "than your fleet's power."
  }
},
};

inline constexpr int kCardCount = static_cast<int>(sizeof(kCards) / sizeof(kCards[0]));

}  // namespace inkforgedui
