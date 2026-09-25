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
     "Your armed, multipurpose starship is suited for\n"
     "interstellar and atmospheric flight. It can\n"
     "comfortably transport several people, has space\n"
     "for cargo, and can carry and launch support\n"
     "vehicles. When you Advance, you may spend\n"
     "experience to equip this vehicle with module\n"
     "assets.",
     "When you Finish an Expedition (dangerous or\n"
     "greater) in your starship and score a hit, this\n"
     "journey strengthened your ties to your ship and\n"
     "any fellow travelers. You and your allies may\n"
     "mark 1 tick on your bonds legacy track.",
     "When you Withstand Damage, you may roll +heart.\n"
     "If you do, Endure Stress (-1) on a weak hit or\n"
     "miss."
  }
},
{
  "Engine Upgrade",
  "Module",
  {
     "Your vehicle's finely-tuned engines speed your\n"
     "travels. When you Undertake an Expedition (+edge)\n"
     "and score a strong hit, take +1 momentum; on a\n"
     "strong hit with a 6 on your action die, take +2\n"
     "momentum instead of +1.",
     "When you Enter the Fray, choose one (before\n"
     "rolling).\n"
     "* Maneuver: Add +1 and take +1 momentum on a\n"
     "strong hit.\n"
     "* Boost: Take +2 momentum on a hit.",
     "When you make a desperate move to pursue a foe,\n"
     "escape a threat, or get in range, you may push\n"
     "your engines to their limit. If you do (decide\n"
     "after rolling), reroll any dice and count a weak\n"
     "hit as a strong hit. Then, Withstand Damage (-2)."
  }
},
{
  "Expanded Hold",
  "Module",
  {
     "Your vehicle carries up to 3 cargo. When you gain\n"
     "+supply, you may convert it to +cargo. When you\n"
     "make a move +supply, you may add +cargo. When you\n"
     "Sacrifice Resources, you may instead suffer\n"
     "-cargo for any portion of the cost.",
     "When you score a miss or weak hit as you make a\n"
     "move to barter or negotiate, and you have at\n"
     "least 1 cargo, you may sweeten the pot. If you\n"
     "do, reroll all dice and add +cargo. Then, suffer\n"
     "-1 cargo.",
     "When you make a move to outrun a threat and have\n"
     "at least 1 cargo, you may first lighten your load\n"
     "by dropping cargo. If you do, suffer -cargo by\n"
     "the amount dropped, add +that amount, and take +2\n"
     "momentum on a hit."
  }
},
{
  "Grappler",
  "Module",
  {
     "Your grappler can disrupt systems and snare\n"
     "machines and vehicles with a magnetic tether.\n"
     "When you take a minute or so to ready the\n"
     "grappler, roll +integrity or +wits. On a strong\n"
     "hit, the grappler is charged and may be fired. On\n"
     "a weak hit, charging requires extra time or\n"
     "focus; Lose Momentum (-1). On a miss, charging\n"
     "fails and you must Withstand Damage (-2). If you\n"
     "make a move to attack a foe or overcome an\n"
     "obstacle by firing the grappler, take an\n"
     "automatic strong hit.",
     "If you score a strong hit when readying the\n"
     "grappler, you may Sacrifice Resources (-1) to\n"
     "overcharge the module. When you fire an\n"
     "overcharged grappler, take +2 momentum; if in a\n"
     "fight, also mark progress.",
     "When you Take Decisive Action by firing the\n"
     "grappler, you may reroll one challenge die."
  }
},
{
  "Heavy Cannons",
  "Module",
  {
     "When you aim your cannons and use them to Strike,\n"
     "choose one.\n"
     "* Strafing run: Add +1 and take +1 momentum on a\n"
     "hit.\n"
     "* Focus fire: Mark progress on a hit, but Lose\n"
     "Momentum (-1).",
     "Once per fight, when you Clash by committing to\n"
     "an all-or-nothing exchange of fire, add +1, count\n"
     "a weak hit as a strong hit, and mark progress on\n"
     "a hit. On a miss, you must suffer a dire outcome.",
     "When you Compel, Enter the Fray, or Gain Ground\n"
     "by bringing your cannons to bear and sending a\n"
     "promise of violence to your foe over\n"
     "communication channels, add +1 and take +1\n"
     "momentum on a hit. On a strong hit with a match,\n"
     "take another +1 momentum."
  }
},
{
  "Internal Refit",
  "Module",
  {
     "You have customized the cabins, common spaces,\n"
     "and environment of the ship to your needs. When\n"
     "you Undertake an Expedition (dangerous or\n"
     "greater), reroll any dice for the first leg of\n"
     "your journey. On a hit, you and your allies may\n"
     "envision how you make yourself at home; if you\n"
     "do, take +2 momentum or +1 spirit.",
     "Your vessel is stocked with reserves. When you\n"
     "Sacrifice Resources and your supply is reduced to\n"
     "0, first roll +integrity instead of marking\n"
     "unprepared. On a strong hit, take +1 supply.\n"
     "Otherwise, mark unprepared.",
     "When you Enter the Fray to oppose an invader\n"
     "within your vessel, reroll any dice. On a strong\n"
     "hit, take +momentum equal to integrity. On a\n"
     "strong hit with a match, also mark progress."
  }
},
{
  "Medbay",
  "Module",
  {
     "When you use your medbay to Heal yourself or\n"
     "another patient, you may reroll your action die\n"
     "if its value is less than your vehicle's\n"
     "integrity.",
     "When you or an ally mark the permanently harmed\n"
     "impact and are brought to the medbay without\n"
     "delay (less than an hour or so), you have a shot\n"
     "at making things right. If you Heal and score a\n"
     "strong hit, clear the impact (in addition to the\n"
     "other benefits of the move). Then, envision the\n"
     "scar that now serves as a reminder of the\n"
     "incident.",
     "When you Face Danger by performing a risky\n"
     "medical procedure, or if you Gather Information\n"
     "through an autopsy or medical examination, reroll\n"
     "any dice and take +1 momentum on a hit."
  }
},
{
  "Missile Array",
  "Module",
  {
     "Your missile array is armed with 5 ammo. When you\n"
     "Strike or Clash with a missile attack, suffer -1\n"
     "ammo and mark progress on a hit. If you Resupply\n"
     "in a place where your missiles can be\n"
     "replenished, you may exchange any earned +supply\n"
     "for +ammo.",
     "When you have at least 1 ammo and Gain Ground by\n"
     "locking a missile on target, add +1 and take +1\n"
     "momentum on a hit.",
     "When you have at least 3 ammo and Take Decisive\n"
     "Action by unleashing all of your missiles, roll\n"
     "an action die before making the progress roll. If\n"
     "your action die is equal to or less than ammo,\n"
     "you may reroll any challenge dice. Then, set ammo\n"
     "to 0."
  }
},
{
  "Overseer",
  "Module",
  {
     "Your AI module keeps watch over the vehicle's\n"
     "systems and sensor data. When you Secure an\n"
     "Advantage or Gain Ground by talking through a\n"
     "situation with the overseer, you may roll\n"
     "+integrity. If you do, take +1 momentum on a hit.",
     "When you Withstand Damage and roll on the miss\n"
     "table, the overseer will do what it can to help.\n"
     "Roll twice on the table and choose either result.",
     "The overseer can pilot the vehicle independently.\n"
     "When you Face Danger by handing over control to\n"
     "the AI in an emergency, or to summon the vehicle\n"
     "remotely within a hazardous situation, you may\n"
     "roll +integrity. If you do, take +1 momentum on a\n"
     "hit."
  }
},
{
  "Reinforced Hull",
  "Module",
  {
     "Your vehicle is clad in iron. When you Withstand\n"
     "Damage, add +1. On a strong hit, take +1\n"
     "momentum.",
     "Your reinforced hull is given a fierce and\n"
     "distinctive color or design. When you arrive at a\n"
     "place where your reputation is a factor, take +1\n"
     "momentum. When you Enter the Fray against a foe\n"
     "who knows your reputation, take +momentum equal\n"
     "to your vehicle's integrity on a strong hit.",
     "When you React Under Fire by letting your\n"
     "reinforced hull take the hit, add +1 and take +1\n"
     "momentum on a hit. On a strong hit with a match,\n"
     "take another +1 momentum as you surge through the\n"
     "chaos and put yourself in perfect position. On a\n"
     "miss, Pay the Price by marking this module as\n"
     "broken."
  }
},
{
  "Research Lab",
  "Module",
  {
     "When you use your lab to Secure an Advantage or\n"
     "Gather Information through careful analysis or\n"
     "experimentation, add +1 and take +1 momentum on a\n"
     "hit.",
     "When you Face Danger to isolate or secure a\n"
     "hazardous specimen, reroll any dice.",
     "When you Swear an Iron Vow to undertake a\n"
     "long-term research project (extreme or greater),\n"
     "reroll any dice. When you obtain crucial samples,\n"
     "equipment, or data, mark progress on the quest\n"
     "and take +2 momentum. When you devote extended\n"
     "time to the project in your lab, Face Danger and\n"
     "add +1. On a hit, mark progress. On a strong hit\n"
     "with a match, mark progress twice. When you\n"
     "Fulfill Your Vow and score a hit, also mark one\n"
     "box on your discoveries legacy track."
  }
},
{
  "Sensor Array",
  "Module",
  {
     "Your advanced sensors scan the paths ahead to\n"
     "help spot dangers. When you Undertake an\n"
     "Expedition (+wits), you may reroll one challenge\n"
     "die.",
     "When you Secure an Advantage or Gather\n"
     "Information by scanning your vehicle's\n"
     "surroundings or analyzing a nearby object, choose\n"
     "one and take +1 momentum on a hit.\n"
     "* Manual scan: Add +1\n"
     "* Automated scan: Instead of rolling the action\n"
     "die, make it the value of your vehicle's\n"
     "integrity",
     "When you Enter the Fray against an ambush, or\n"
     "Face Danger to detect a hidden threat, you may\n"
     "roll +integrity. If you do, reroll any dice and\n"
     "take +1 momentum on a hit."
  }
},
{
  "Shields",
  "Module",
  {
     "When you raise your shields, roll +your vehicle's\n"
     "integrity or +wits. On a strong hit, set your\n"
     "shields to 4. On a weak hit, make them 3. On a\n"
     "miss, make them 2 but Lose Momentum (-1). Then,\n"
     "if you Withstand Damage, ignore damage up to the\n"
     "value of your shields and suffer -1 shields.\n"
     "Raised shields last for a few minutes. If reduced\n"
     "to 0, they cannot be raised again for an hour or\n"
     "so.",
     "You may React Under Fire by letting your shields\n"
     "take the blow. If you do, roll +shields and take\n"
     "+2 momentum on a hit.",
     "When you Enter the Fray and score a strong hit,\n"
     "you may raise your shields to 3 without rolling.\n"
     "If you do, take +1 momentum."
  }
},
{
  "Stealth Tech",
  "Module",
  {
     "Your vehicle is rigged for silent running. When\n"
     "you make a move against a specific foe or threat\n"
     "to avoid detection, add +1. If you Enter the Fray\n"
     "by ambushing an unaware foe, add +1 and mark\n"
     "progress on a strong hit.",
     "When you travel stealthily as you Undertake an\n"
     "Expedition (+shadow), you may reroll your action\n"
     "die.",
     "When you are poised to Strike from hiding, you\n"
     "may roll +shadow. If you do, choose one (before\n"
     "rolling).\n"
     "* Strike true: Reroll any dice.\n"
     "* Strike hard: Mark progress on a hit.\n"
     "On a strong hit with a match, you also remain\n"
     "totally undetected; take +2 momentum and add +1\n"
     "on your next Strike."
  }
},
{
  "Vehicle Bay",
  "Module",
  {
     "You may purchase or upgrade a support vehicle for\n"
     "1 less experience. When you Repair a battered\n"
     "support vehicle, spend 1 repair point (instead of\n"
     "2).",
     "When a support vehicle is destroyed, and you are\n"
     "able to retrieve its wreckage, you may Ask the\n"
     "Oracle using the yes/no table if something can be\n"
     "salvaged from the mess. Make it 50/50. On a yes,\n"
     "spend 1 experience to restore the support vehicle\n"
     "asset with all previously marked abilities. Until\n"
     "you Repair and bring it back to full working\n"
     "order, the vehicle is battered with 0 integrity.",
     "When you make a move to launch from or land on\n"
     "your command vehicle in a perilous situation or\n"
     "environment, reroll any dice and take +1 momentum\n"
     "on a hit."
  }
},
{
  "Workshop",
  "Module",
  {
     "When you Repair in the field, add +1.",
     "When you make a move in your workshop to craft,\n"
     "modify, deactivate, or disassemble a device or\n"
     "machine, you may reroll your action die if its\n"
     "value is less than your vehicle's integrity.",
     "When you Swear an Iron Vow to undertake a\n"
     "long-term engineering project (extreme or\n"
     "greater), reroll any dice. When you obtain a\n"
     "crucial part or resource, mark progress on the\n"
     "quest and take +2 momentum. When you devote\n"
     "extended time to the project in your workshop,\n"
     "Face Danger and add +1. On a hit, mark progress.\n"
     "On a strong hit with a match, mark progress\n"
     "twice. When you Fulfill Your Vow and score a hit,\n"
     "mark one extra box on your quests legacy track."
  }
},
{
  "Exosuit",
  "Support Vehicle",
  {
     "Your lumbering rig houses one pilot, is sealed\n"
     "against hostile environments, and is armed with\n"
     "fixed or held weapons. When you make a forceful,\n"
     "damaging, or resistant move, you may (after\n"
     "rolling) replace the value of your action die\n"
     "with the rig's integrity; if you do, Lose\n"
     "Momentum (-1).",
     "Your exosuit is equipped with thrusters. You can\n"
     "maneuver in zero-g, make thrust-assisted leaps,\n"
     "and drop to a surface from altitude. When you\n"
     "burn fuel to overcome a critical obstacle (decide\n"
     "after rolling), you may reroll any dice. If you\n"
     "do, Sacrifice Resources (-1).",
     "When you Withstand Damage, you may reroll one\n"
     "challenge die."
  }
},
{
  "Hoverbike",
  "Support Vehicle",
  {
     "Your unarmed hoverbike provides speedy planetside\n"
     "ground transport, and is equipped to carry up to\n"
     "two people and their gear. When you Undertake an\n"
     "Expedition (+edge), take +1 momentum on a hit. On\n"
     "a strong hit with a match, you also surge ahead\n"
     "or find a new path; mark progress.",
     "When you fire the bike's afterburner and make a\n"
     "move to perform a risky maneuver, you may add\n"
     "+integrity and take +2 momentum on a strong hit.\n"
     "If you do, count a weak hit as a miss.",
     "When you make a move while maneuvering your bike\n"
     "and burn momentum to improve your result, roll\n"
     "your action die. On a 5 or 6, do not reset\n"
     "momentum."
  }
},
{
  "Rover",
  "Support Vehicle",
  {
     "Your unarmed rover provides protected planetside\n"
     "transport. When you Undertake an Expedition or\n"
     "Set a Course, add +1. When you Finish an\n"
     "Expedition in your rover, you may reroll one\n"
     "challenge die.",
     "You may equip your rover with one module asset at\n"
     "no extra cost. When you Withstand Damage, the\n"
     "module can be broken or destroyed as with a\n"
     "command vehicle. If you reconfigure your rover,\n"
     "spend 1 experience, discard the module, and equip\n"
     "another with the same number of marked abilities.",
     "When you Face Danger or React Under Fire by\n"
     "taking a hit or crashing through an obstacle, you\n"
     "may roll +integrity. If you do, take +1 momentum\n"
     "on a hit."
  }
},
{
  "Service Pod",
  "Support Vehicle",
  {
     "Your unarmed utility vehicle houses one pilot for\n"
     "short-range, low gravity operations. When you\n"
     "make a move using the pod's manipulator arms to\n"
     "perform a delicate or forceful task, add +1 and\n"
     "take +1 momentum on a hit.",
     "When you Face Danger, Gain Ground, or React Under\n"
     "Fire by maneuvering your pod through a hazardous\n"
     "or obstructed area, choose an approach and roll\n"
     "+integrity.\n"
     "* Careful: Add +2 and Lose Momentum (-1)\n"
     "* Reckless: Take +1 momentum on a hit",
     "When you make a move while controlling the pod\n"
     "and push its capabilities to the limit, you may\n"
     "take an automatic strong hit. If you do,\n"
     "Withstand Damage (-2)."
  }
},
{
  "Shuttle",
  "Support Vehicle",
  {
     "Your unarmed shuttle provides short-range\n"
     "transport for several people and equipment\n"
     "through space or atmosphere. When you travel to a\n"
     "location (not your command vehicle), you and your\n"
     "allies may take +1 momentum when you arrive",
     "When you Face Danger or React Under Fire to\n"
     "navigate through hazardous skies, avoid\n"
     "obstacles, or evade an attack, add +1 and take +1\n"
     "momentum on a hit.",
     "Your shuttle is sealed against high pressure\n"
     "environments, can travel underwater, and is more\n"
     "resistant to damage; when you Withstand Damage,\n"
     "add +1."
  }
},
{
  "Skiff",
  "Support Vehicle",
  {
     "Your unarmed flatbed hover-vehicle carries\n"
     "several people, gear, and cargo over land or\n"
     "water. When you Undertake an Expedition or Set a\n"
     "Course, you may rely on the skiff's simple\n"
     "durability and roll +integrity. If you do, take\n"
     "+1 momentum on a hit.",
     "Your skiff is armed with a turreted cannon. When\n"
     "you Strike or Clash by firing the cannon, roll\n"
     "+integrity and take +1 momentum on a hit. On a\n"
     "strong hit with a match, your shots cause extra\n"
     "destruction or create havoc; mark progress.",
     "Your skiff is fully stocked. When you Check Your\n"
     "Gear, add +1 and take +1 momentum on a hit."
  }
},
{
  "Snub Fighter",
  "Support Vehicle",
  {
     "Your armed snub fighter carries a single pilot\n"
     "for space or atmospheric flight and combat. When\n"
     "you Enter the Fray, you may roll +integrity; if\n"
     "you do, take +2 momentum on a hit.",
     "When you Strike or Clash, add +1. On a strong hit\n"
     "with a match, mark progress.",
     "When you personally defeat a notable foe in your\n"
     "snub fighter, envision the victory mark you make\n"
     "on the fuselage. Tally your victories in this\n"
     "box. For every five, mark 2 ticks on your quests\n"
     "legacy track."
  }
},
{
  "Ace",
  "Path",
  {
     "When you Face Danger or React Under Fire by\n"
     "guiding your vehicle through a hazard or out of\n"
     "harm's way, add +1 and take +1 momentum on a hit.",
     "When you Gain Ground by maneuvering your vehicle\n"
     "against a foe, add +1. If you score a strong hit\n"
     "with a 4, 5, or 6 on the action die, you may put\n"
     "yourself in firing position. If you do, set aside\n"
     "the action die or note its value. If you or an\n"
     "ally Strike using the vehicle's weapons, preset\n"
     "your action die with that value. This persists\n"
     "until you fail to score a strong hit on that\n"
     "move, or until you make another move which\n"
     "changes your vehicle's position.",
     "When you must Endure Stress while piloting a\n"
     "vehicle, you may roll +integrity. If you do, take\n"
     "+1 momentum on a strong hit."
  }
},
{
  "Archer",
  "Path",
  {
     "You carry 6 ammo. When you Strike or Clash, you\n"
     "may add +1 or +2 and suffer that amount as -ammo.\n"
     "To replenish your ammo by crafting projectiles,\n"
     "roll +wits. On a strong hit, take up to +6 ammo.\n"
     "On a weak hit, take up to +4 ammo and Sacrifice\n"
     "Resources (-1). On a miss, Sacrifice Resources\n"
     "(-1).",
     "You may Enter the Fray by unleashing a volley of\n"
     "bow shots. If you do, roll +ammo and suffer -1\n"
     "ammo. On a hit, mark progress.",
     "When you load a specialized projectile such as a\n"
     "zip line, explosive, or electromagnetic\n"
     "disrupter, suffer -1 ammo. If you then take your\n"
     "shot by making a move, you may preset your action\n"
     "die to 5. On a hit, envision the effects and take\n"
     "+1 momentum."
  }
},
{
  "Armored",
  "Path",
  {
     "When you Face Danger, React Under Fire, or Clash\n"
     "against physical attacks or impact, you may put\n"
     "trust in your armor's strength. If you do, preset\n"
     "your action die to 4. On a strong hit with a\n"
     "match, take +2 momentum as you build confidence,\n"
     "make an impression on your foes, or improve your\n"
     "position.",
     "You add an important new piece to your set of\n"
     "armor, or upgrade its materials. As above, but\n"
     "preset your action die to 5 instead of 4.",
     "When you must Endure Harm, you may instead let\n"
     "your armor take the hit. If you do, roll your\n"
     "action die. On a 4 or greater, ignore the harm.\n"
     "On a 1-3, ignore the harm but your armor is now\n"
     "broken; you must Repair and spend 5 repair points\n"
     "to bring it back to working condition."
  }
},
{
  "Artist",
  "Path",
  {
     "When you make a move to craft an artistic work,\n"
     "present an artistic gift or performance, or leave\n"
     "your artistic mark on an item or location, you\n"
     "may reroll your action die if its value is less\n"
     "than your spirit. On a strong hit, take +1\n"
     "momentum or +1 spirit.",
     "When you Gather Information or Secure an\n"
     "Advantage by studying the aesthetics of a being\n"
     "or culture, add +2.",
     "When you create or perform a significant artistic\n"
     "work as a public memorial or tribute, roll +the\n"
     "stat which best represents the work's nature. On\n"
     "a strong hit, the work will stand the test of\n"
     "time; mark 2 ticks on your bonds legacy track. On\n"
     "a weak hit, its impact is short-lived; mark 1\n"
     "tick instead of 2. On a miss, the work is\n"
     "ignored, misunderstood, or co-opted, and you must\n"
     "Pay the Price."
  }
},
{
  "Augmented",
  "Path",
  {
     "You are equipped with an advanced prosthetic,\n"
     "implant, or mechanical enhancement. When you make\n"
     "a move directly aided by the augment, envision\n"
     "how it gives you exceptional capabilities and add\n"
     "+1. On a strong hit with a match, your augment\n"
     "exceeds expectations; take +2 momentum. On a miss\n"
     "with a match, the augment is broken; you must\n"
     "Repair and spend 3 repair points to bring it back\n"
     "to working condition.",
     "You are equipped with a second augment. It\n"
     "functions as above, but the benefits of the two\n"
     "augments do not stack.",
     "When you must Endure Harm or Face Death, you may\n"
     "instead mark an augment as broken. Repair it as\n"
     "detailed above."
  }
},
{
  "Bannersworn",
  "Path",
  {
     "You are bound to a clan, faction, or creed. When\n"
     "you Swear an Iron Vow in service to this\n"
     "ideology, reroll any dice. On a hit, mark 1 tick\n"
     "on your bonds legacy track.",
     "When you or an ally Sojourn and score a strong\n"
     "hit with a match, you may envision meeting\n"
     "someone of the same ideology. If you Make a\n"
     "Connection with them and score a hit, mark 1 tick\n"
     "on your bonds legacy track. When you Forge a Bond\n"
     "with anyone of your ideology, make the legacy\n"
     "reward one rank higher (1 extra box if already\n"
     "epic).",
     "When you make a progress move in direct service\n"
     "to your ideology, you may reroll one challenge\n"
     "die. If you score a strong hit with a match, your\n"
     "reputation grows among those who share your\n"
     "ideology; mark 1 tick on your bonds legacy track."
  }
},
{
  "Blademaster",
  "Path",
  {
     "When you Clash or Strike in close quarters, add\n"
     "+1. On a strong hit with a match, you are\n"
     "unstoppable; mark progress.",
     "If you Gain Ground by moving into close quarters\n"
     "against your foe, choose your approach.\n"
     "* Charge: Roll +heart, and mark progress on a\n"
     "hit.\n"
     "* Evade: Roll +edge, and take +1 momentum on a\n"
     "hit.",
     "You wield an iconic blade. Give it a name. When\n"
     "you Swear an Iron Vow by binding your promise to\n"
     "the blade, add +1. On a hit, fill the box below.\n"
     "If you make a move (including a progress move)\n"
     "using this oathbound blade and score a miss, you\n"
     "may clear the box to reroll any dice."
  }
},
{
  "Bounty Hunter",
  "Path",
  {
     "When you take a bounty contract and Swear an Iron\n"
     "Vow to see it done, add +1. On a strong hit,\n"
     "you've got a solid lead and may mark progress on\n"
     "the quest. When you Fulfill Your Vow on a hunt,\n"
     "make the legacy reward one rank higher (1 extra\n"
     "box if already epic).",
     "When you Gather Information related to a bounty,\n"
     "add +1. On a match, you reveal a surprising or\n"
     "sinister aspect of the contract; envision what\n"
     "you discover, and choose one.\n"
     "* Forge ahead: Mark progress on the quest. If you\n"
     "scored a strong hit with a match, also take +2\n"
     "momentum.\n"
     "* Change loyalties: Forsake Your Vow and mark 2\n"
     "ticks on your bonds legacy track.",
     "When you Take Decisive Action in a fight against\n"
     "a bounty target or their agents, you may reroll\n"
     "one challenge die."
  }
},
{
  "Brawler",
  "Path",
  {
     "When you Gain Ground by attempting to disarm,\n"
     "trip, shove, grapple, or stun your foe, add +1\n"
     "and take +1 momentum on a hit.",
     "When you Clash in close quarters, you may draw on\n"
     "your momentum to gain advantage. If you do, Lose\n"
     "Momentum (-2) and choose one (before rolling).\n"
     "* Aggressive: Count a weak hit as a strong hit.\n"
     "* Defensive: Count a miss as a weak hit.",
     "When you Enter the Fray already positioned in\n"
     "close quarters against your foe, mark progress on\n"
     "a hit. On a strong hit with a match, your initial\n"
     "assault leaves them stunned; also take +2\n"
     "momentum."
  }
},
{
  "Courier",
  "Path",
  {
     "When you Swear an Iron Vow to transport and\n"
     "protect something precious, set its safety to 5.\n"
     "When you Undertake an Expedition or Set a Course\n"
     "and score a weak hit or miss, you may suffer -1\n"
     "safety as the cost. On a miss with a match, you\n"
     "must suffer -2 safety as the cost. When safety\n"
     "falls to 0, envision a major complication related\n"
     "to this mission. If you overcome the threat, mark\n"
     "progress twice on this quest. Then, set safety to\n"
     "3.",
     "When you Fulfill Your Vow to an unbonded\n"
     "connection by completing a courier mission, mark\n"
     "progress twice on the relationship.",
     "When you Sojourn during a courier mission, you\n"
     "may roll +safety. On a strong hit, take +1 safety\n"
     "or +1 momentum."
  }
},
{
  "Demolitionist",
  "Path",
  {
     "When you make a move to attack, destroy, or\n"
     "sabotage by deploying or triggering an explosive\n"
     "device, choose the value of your charge before\n"
     "rolling: normal=1, high=2, or overcharged=3. If\n"
     "either challenge die is equal to or less than the\n"
     "charge, count a weak hit as a strong hit. If not,\n"
     "and your action die is equal to or less than the\n"
     "charge, you are caught up in the destruction or\n"
     "set off an unintended effect; count a weak hit as\n"
     "a miss.",
     "When you make a move to craft, modify, or disarm\n"
     "an explosive device, or if you threaten or\n"
     "provoke by arming an explosive device, add +1 and\n"
     "take +1 momentum on a hit.",
     "When your momentum is at its max, you may reset\n"
     "momentum (before rolling) to trigger an explosive\n"
     "device as you Take Decisive Action. If you do,\n"
     "reroll any challenge dice."
  }
},
{
  "Devotant",
  "Path",
  {
     "You worship a god, power, or entity. Give it a\n"
     "name and choose one of your stats to represent\n"
     "its nature. When you Secure an Advantage or Gain\n"
     "Ground by calling on it for guidance or aid, roll\n"
     "+linked stat. On a hit, take +1 momentum or +1\n"
     "spirit. On a strong hit with a match, a miracle\n"
     "or sign manifests; take another +1 momentum or +1\n"
     "spirit.",
     "When you Swear an Iron Vow in service to your\n"
     "faith, roll +linked stat and take +2 momentum or\n"
     "+2 spirit on a hit. When you Fulfill Your Vow on\n"
     "a divine quest (formidable or greater) and score\n"
     "a hit, also mark 2 ticks on your bonds legacy\n"
     "track.",
     "When you Hearten through contemplation or sharing\n"
     "of your faith, you may roll +linked stat. If you\n"
     "do, take +1 spirit or +1 momentum on a strong\n"
     "hit."
  }
},
{
  "Diplomat",
  "Path",
  {
     "When you Swear an Iron Vow to resolve a dispute,\n"
     "negotiate an agreement, or gather support, add\n"
     "+1. On a strong hit, mark progress on the quest.\n"
     "When you Fulfill Your Vow on a diplomatic mission\n"
     "(formidable or greater) and score a hit, also\n"
     "mark 2 ticks on your bonds legacy track.",
     "When you make a move to defuse, reason, or\n"
     "negotiate, add +1. On a miss, you may take a\n"
     "different tack. Envision this new approach,\n"
     "reroll all dice, and add +2. If you score a miss\n"
     "yet again, face a dire complication or blow to\n"
     "your reputation as you Pay the Price.",
     "When you Make a Connection or Sojourn, add +1. If\n"
     "you Sojourn and score a strong hit with a match,\n"
     "you are shown great kindness or respect; take +2\n"
     "momentum or make an extra recover move with an\n"
     "automatic strong hit."
  }
},
{
  "Empath",
  "Path",
  {
     "When you read the intent, emotions, or memories\n"
     "of a nearby being, roll +heart. On a strong hit,\n"
     "you glimpse a helpful aspect of their inner self.\n"
     "Envision what you learn, take +2 momentum, and\n"
     "add +1 when you make moves to interact with them\n"
     "in this scene. On a weak hit, the visions are\n"
     "murky; take +1 momentum. On a miss, you reveal a\n"
     "troubling motive or secret; Pay the Price.",
     "As above, and if you score a hit as you read\n"
     "them, you may subtly influence their attitude or\n"
     "actions, such as making a hostile being hesitate.\n"
     "Take another +1 momentum. If in a fight, mark\n"
     "progress.",
     "When you Face Danger to soothe a being's distress\n"
     "by creating an empathic bond, roll +spirit and\n"
     "take +1 momentum on a hit. If they are an ally,\n"
     "also give them +2 spirit on a hit."
  }
},
{
  "Explorer",
  "Path",
  {
     "When you Explore a Waypoint, take +1 momentum on\n"
     "a hit. When you Finish an Expedition and score a\n"
     "hit, mark 1 extra tick on your discoveries legacy\n"
     "track.",
     "When you come across a wondrous sight or\n"
     "phenomenon, such as an extraordinary planet,\n"
     "majestic creature, or dazzling stellar object,\n"
     "choose one:\n"
     "* Find inspiration: Take +1 momentum\n"
     "* Soak it all in: Hearten; add +1, and take +1\n"
     "momentum on a hit.",
     "When you Secure an Advantage by studying a\n"
     "newfound place from a safe position, add +1 and\n"
     "take +1 momentum on a hit. On a strong hit with a\n"
     "match, take another +1 momentum and envision an\n"
     "unusual aspect of the site."
  }
},
{
  "Fated",
  "Path",
  {
     "When you fill a box on your background vow\n"
     "progress track, also mark 1 tick on your quests\n"
     "legacy track. When you Fulfill Your Vow on the\n"
     "background vow, your fate is at hand; take an\n"
     "automatic strong hit and envision the final\n"
     "sacrifice that brings your story to an end.",
     "When you Face Death or Face Desolation while your\n"
     "background vow is unfulfilled, it is not yet your\n"
     "time. Instead of rolling, you may take an\n"
     "automatic strong hit. If you do, this asset\n"
     "counts as an impact (and you no longer have this\n"
     "protection) until you next Reach a Milestone on\n"
     "the background vow.",
     "When you make any progress move directly related\n"
     "to your background vow, and roll a 10 on either\n"
     "challenge die, you may reroll that die. On a\n"
     "strong hit, take +2 momentum."
  }
},
{
  "Firebrand",
  "Path",
  {
     "You wield fiery energy. When you rest and\n"
     "meditate to gather this energy, roll +spirit. On\n"
     "a strong hit, take up to +3 fire. On a weak hit,\n"
     "take +2. On a miss, take +2 fire but Endure Harm\n"
     "(-2). Your max fire is +5. When you make moves\n"
     "aided by this energy to attack or overcome\n"
     "obstacles, add +2 and suffer -1 fire.",
     "When you Endure Harm and score a strong hit with\n"
     "a match, you may instead ignore the harm and take\n"
     "+fire equal to the amount of harm faced (+1, +2,\n"
     "or +3).",
     "When you have at least +3 fire, you may Gain\n"
     "Ground or Strike by unleashing hell. If you do,\n"
     "take an automatic strong hit and mark progress.\n"
     "Then, set your fire to 0."
  }
},
{
  "Fugitive",
  "Path",
  {
     "You are hunted by a power or authority. When you\n"
     "make a move, you may improve the result to a\n"
     "strong hit. If you do, fill one segment of a\n"
     "four-segment clock to represent hunters closing\n"
     "in. When the clock is filled, a notable foe or\n"
     "force has tracked you down. If you overcome them\n"
     "or escape, reset the clock and mark 1 tick on\n"
     "your quests legacy track.",
     "When you make a move by hiding, concealing your\n"
     "identity, or fleeing from a pursuer, add +1 and\n"
     "take +1 momentum on a hit.",
     "When you Fulfill Your Vow (extreme or greater) by\n"
     "clearing your name or defeating the power or\n"
     "authority who marked you as a fugitive, gain this\n"
     "ability at no cost. You may then exchange this\n"
     "asset for another with the same number of marked\n"
     "abilities."
  }
},
{
  "Gearhead",
  "Path",
  {
     "When you make a move to craft, repair, repurpose,\n"
     "or modify equipment or technology, add +1 and\n"
     "take +1 momentum on a hit.",
     "When you Gather Information by studying or\n"
     "disassembling a machine or device, reroll any\n"
     "dice. On a match, you reveal an unexpected\n"
     "function, capability, or danger; mark 1 tick on\n"
     "your discoveries legacy track.",
     "With sufficient time (a couple of hours or more),\n"
     "you may Secure an Advantage to assemble or\n"
     "enhance a device for a powerful but limited role.\n"
     "On a hit, the device is ready for use. One time\n"
     "only, when you or an ally make a move aided by\n"
     "the device, take an automatic strong hit. If you\n"
     "are in a fight, also mark progress."
  }
},
{
  "Gunner",
  "Path",
  {
     "When you Strike, choose one (before rolling).\n"
     "* Pin them down: Add +1 and take +1 momentum on a\n"
     "hit.\n"
     "* Make them hurt: Mark progress on a hit.",
     "When you Take Decisive Action by emptying your\n"
     "gun (decide before rolling), you may Sacrifice\n"
     "Resources (-1) and reroll one challenge die. If\n"
     "the fight continues or you are caught up another\n"
     "fight, Check Your Gear to see if you have more\n"
     "ammo on-hand.",
     "Give your favorite gun a name. When you Clash\n"
     "with it, add +1. When you Enter the Fray or\n"
     "Endure Stress while wielding it, add +1 and take\n"
     "+1 momentum on a hit."
  }
},
{
  "Gunslinger",
  "Path",
  {
     "When you Enter the Fray by facing off against\n"
     "your foe (+heart), or by preparing to act without\n"
     "tipping them off (+shadow), add +1 and take +1\n"
     "momentum on a hit. On a strong hit with a match,\n"
     "you may immediately take a shot (without making a\n"
     "move) and mark progress twice.",
     "When you Gain Ground or React Under Fire by\n"
     "moving into cover, add +1. On a strong hit, this\n"
     "cover gives you leverage; add +1 when you make a\n"
     "move to attack or defend at range. If you then\n"
     "score a miss, the cover is lost or compromised.",
     "When you Compel or Gain Ground with the threat of\n"
     "violence by holding someone at gunpoint, add +1\n"
     "and take +1 momentum on a hit."
  }
},
{
  "Haunted",
  "Path",
  {
     "You are haunted by the spirit of someone whose\n"
     "death you caused or mourn (or both). When you\n"
     "make a move to call upon their insight, add +1.\n"
     "On a weak hit, also Endure Stress (-1). On a\n"
     "strong hit with a match, mark 1 tick on your\n"
     "bonds legacy track.",
     "When you Face Death guided by the spirit, add +1.\n"
     "On a strong hit, envision what you learn from\n"
     "them or about them, and mark 2 ticks on your\n"
     "bonds legacy track.",
     "One time only, when you Fulfill Your Vow (extreme\n"
     "or greater) in service to the spirit, take this\n"
     "ability at no cost and choose one.\n"
     "* Let them go: Mark 2 ticks on your bonds legacy\n"
     "track for each marked ability, and discard this\n"
     "asset.\n"
     "* Bolster your link: When you use a HAUNTED asset\n"
     "ability, take +1 momentum on a hit."
  }
},
{
  "Healer",
  "Path",
  {
     "When you give medical care to Heal yourself or\n"
     "another character, add +1. If you are treating\n"
     "someone other than yourself, take +1 spirit or +1\n"
     "momentum on a hit.",
     "When you Gather Information by studying medical\n"
     "evidence or biological remains, add +1 and take\n"
     "+1 momentum on a hit. On a strong hit with a\n"
     "match, you also reveal an unexpected medical\n"
     "anomaly; mark 1 tick on your discoveries legacy\n"
     "track.",
     "Once every day or so, when you are in a safe\n"
     "place with plenty of time on your hands, you may\n"
     "Sacrifice Resources (-1) and provide basic\n"
     "medical care for yourself, companions, or allies\n"
     "without risk. If you do, roll only your action\n"
     "die. On a 1-4, automatically give +1 health to\n"
     "everyone whose health is greater than 0. On a\n"
     "5-6, make it +2."
  }
},
{
  "Infiltrator",
  "Path",
  {
     "When you make a move to break into a secure site,\n"
     "infiltrate a protected area, or hack or\n"
     "manipulate a secure system, add +1 and take +1\n"
     "momentum on a hit. On a strong hit with a match,\n"
     "access is easier than expected; take another +1\n"
     "momentum.",
     "When you Face Danger or Secure an Advantage to\n"
     "establish a false identity, add +1. On a hit, you\n"
     "may add +1 when using that identity to deceive or\n"
     "influence others. If you score a miss with a\n"
     "match when using that identity, your deception is\n"
     "completely and dramatically undone.",
     "When you Check Your Gear for a device with a\n"
     "specific function to aid in infiltration,\n"
     "espionage, or sabotage, add +1. On a hit, reroll\n"
     "any dice the first time you make a move aided by\n"
     "the device."
  }
},
{
  "Kinetic",
  "Path",
  {
     "You wield kinetic powers. By focusing, you may\n"
     "remotely push, pull, lift, or constrict objects\n"
     "and beings that are about your size or smaller.\n"
     "When you are in a risky situation and draw on\n"
     "your powers to make a move, add +2 and Lose\n"
     "Momentum (-2).",
     "As above, but you may instead draw on your powers\n"
     "in a desperate effort to change the outcome of an\n"
     "action. If you do, add +2 (after you roll) and\n"
     "Lose Momentum (-3).",
     "When your momentum is at its max, you may attempt\n"
     "great kinetic feats, such as manipulating large\n"
     "objects and creating destructive bursts of\n"
     "concussive force. To do so, reset momentum. Then,\n"
     "as you make a single move fueled by your powers,\n"
     "take an automatic strong hit. If you are in a\n"
     "fight, mark progress."
  }
},
{
  "Leader",
  "Path",
  {
     "When you Aid Your Ally through leadership,\n"
     "coordination, or planning, add +1. On a strong\n"
     "hit, any allies who are present take +1 momentum.",
     "When you Enter the Fray (+heart) by coordinating\n"
     "with your team as they wade into the fight, make\n"
     "your move before your allies act. On a strong\n"
     "hit, all allies may take an automatic strong hit.\n"
     "On a strong hit with a match, also mark progress\n"
     "on any objectives in this fight.",
     "When you make a move to influence someone (not an\n"
     "ally) through leadership, add +1 and take +1\n"
     "momentum on a hit. On a strong hit with a match,\n"
     "your command galvanizes them into unexpected\n"
     "action. Take another +1 momentum, and mark 1 tick\n"
     "on your bonds legacy track."
  }
},
{
  "Looper",
  "Path",
  {
     "When you score a miss on a suffer move (not\n"
     "Endure Stress), you may loop back a second or\n"
     "two. If you do, Lose Momentum (-2), reroll any\n"
     "dice, and take +1 momentum on a strong hit.",
     "When you create a link to the current point in\n"
     "time, note the value of condition meters for you\n"
     "and your allies. You can retain only one active\n"
     "link. If you later loop back to this moment, roll\n"
     "+the gap in time: +4 if minutes, +3 if hours, or\n"
     "+2 if days. You may not burn momentum on this\n"
     "roll. On a strong hit, return to the linked\n"
     "point, retain any progress, and set condition\n"
     "meters (except for spirit) to their original\n"
     "values. On a weak hit, as above, but Endure\n"
     "Stress (-2). On a miss, as with a strong hit, but\n"
     "you find the timeline corrupted; Pay the Price.",
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
     "extraordinary relic, reroll any dice. When you\n"
     "Reach a Milestone in the pursuit of that quest,\n"
     "take +2 momentum. When you Fulfill Your Vow and\n"
     "score a hit, also mark 2 ticks on your\n"
     "discoveries legacy track.",
     "When you make a move to conduct extended research\n"
     "or study, reroll any challenge dice. On a match,\n"
     "you piece together an extraordinary or harrowing\n"
     "new theory; envision the nature of this\n"
     "revelation and mark 1 tick on your discoveries\n"
     "legacy track.",
     "When you recall esoteric knowledge to Secure an\n"
     "Advantage or Gain Ground, add +1. On a hit,\n"
     "envision the obscure but helpful fact, theory, or\n"
     "technique you put to use, and take +1 momentum."
  }
},
{
  "Loyalist",
  "Path",
  {
     "When you Aid Your Ally, add +1 and take +1\n"
     "momentum on a hit. This is in addition to the\n"
     "benefits taken by your ally. On a strong hit with\n"
     "a match, envision how this moment marks a\n"
     "breakthrough or milestone in your relationship;\n"
     "both of you may mark 1 tick on your bonds legacy\n"
     "track.",
     "You may burn momentum on behalf of an ally to\n"
     "improve their result on a move. If you do, your\n"
     "ally takes +1 momentum.",
     "When you stand with your ally as they make a\n"
     "progress move, envision how you support them.\n"
     "Then, roll one challenge die. On a 1-9, your ally\n"
     "may replace one of their challenge dice with\n"
     "yours. On a 10, envision how you inadvertently\n"
     "undermine their action; your ally must replace\n"
     "their lowest challenge die with yours."
  }
},
{
  "Mercenary",
  "Path",
  {
     "When you agree to wage war or defend others from\n"
     "war in exchange for payment or promises, you may\n"
     "Swear an Iron Vow to see the mission done. If you\n"
     "do, reroll any dice. When you Fulfill Your Vow,\n"
     "make the legacy reward one rank higher (1 extra\n"
     "box if already epic).",
     "When you Make a Connection by searching out or\n"
     "making contact with someone in need of your\n"
     "services, add +1 and take +1 momentum on a hit.\n"
     "On a strong hit with a match, this mission pits\n"
     "you against an unresolved aspect of your past or\n"
     "a hated foe; mark 2 ticks on your quests legacy\n"
     "track.",
     "When you Check Your Gear in the midst of a fight,\n"
     "or Resupply by looting the field of battle in the\n"
     "aftermath of a fight, add +2."
  }
},
{
  "Naturalist",
  "Path",
  {
     "When you Secure an Advantage or Gather\n"
     "Information using your knowledge of lifeforms or\n"
     "planetside ecosystems, add +1 and take +1\n"
     "momentum on a hit. On a strong hit with a match,\n"
     "you also confirm an obscure theory or reveal a\n"
     "surprising aspect of the encounter; mark 1 tick\n"
     "on your discoveries legacy track.",
     "When you make a move by taking a risky action to\n"
     "pacify, avoid, or outwit a creature (decide\n"
     "before rolling), you may reroll any dice, but\n"
     "must Lose Momentum (-2).",
     "You are skilled at planetside survival. When you\n"
     "Resupply to scavenge resources in a life-bearing\n"
     "natural environment, take +1 supply on a hit.\n"
     "When you Face Danger against an environmental\n"
     "threat, add +1 and take +1 momentum on a hit."
  }
},
{
  "Navigator",
  "Path",
  {
     "When you Set a Course, choose one.\n"
     "* Follow the fastest path: Take +2 momentum on a\n"
     "strong hit.\n"
     "* Follow the safest path: Add +1\n"
     "On a strong hit with a match, you charted a new\n"
     "path during the journey; mark 1 tick on your\n"
     "discoveries legacy track.",
     "When you Secure an Advantage by charting the way\n"
     "forward, Face Danger to find a path around a\n"
     "hazard, or Gather Information about a location by\n"
     "studying your charts, add +1 and take +1 momentum\n"
     "on a hit.",
     "Once per expedition, when you or an ally\n"
     "Undertake an Expedition and score a weak hit or\n"
     "miss, you may ignore that result, plot an\n"
     "alternate path, and make it an automatic strong\n"
     "hit."
  }
},
{
  "Outcast",
  "Path",
  {
     "When you Hearten in isolation, you may attempt to\n"
     "find solace in fond memories or a hopeful wish.\n"
     "If you do (decide before rolling), reroll any\n"
     "dice but count a strong hit as a weak hit.",
     "When you Sacrifice Resources and your supply is\n"
     "reduced to 0, roll +wits. On a strong hit, you\n"
     "manage to scrape by and take +1 supply. On a weak\n"
     "hit, you may Lose Momentum (-1) in exchange for\n"
     "+1 supply. On a miss, your supply remains at 0\n"
     "and you Lose Momentum (-1).",
     "When you or an ally Sojourn and score a strong\n"
     "hit with a match, you may envision encountering\n"
     "someone who knows or understands you. If you Make\n"
     "a Connection with them, take an automatic strong\n"
     "hit and mark 2 ticks on your bonds legacy track."
  }
},
{
  "Scavenger",
  "Path",
  {
     "When you Gather Information or Resupply by\n"
     "scavenging a wreck, ruin, or abandoned site, add\n"
     "+1 and take +1 momentum on a hit. On a strong hit\n"
     "with a match, you also find something of unique\n"
     "value, significance, or function; envision the\n"
     "nature of this discovery, take +2 momentum, and\n"
     "mark 2 ticks on your discoveries legacy track.",
     "When you Secure an Advantage to cobble together\n"
     "an ad hoc tool, device, or weapon, envision what\n"
     "you intend to create. On a hit, you may add +1\n"
     "when making a move aided by the item. If you roll\n"
     "a 1 on your action die while using the item, it\n"
     "is permanently broken, lost, or depleted.",
     "When you Check Your Gear, roll +wits or +supply\n"
     "(whichever is highest) and take +1 momentum on a\n"
     "hit."
  }
},
{
  "Scoundrel",
  "Path",
  {
     "When you make a move by lying, bluffing,\n"
     "stealing, or cheating, add +2. On a strong hit\n"
     "with a match, your deception creates an\n"
     "unexpected opportunity; take the value of your\n"
     "shadow as +momentum.",
     "When you Make a Connection to search out a new\n"
     "contact, you may roll +shadow. If you do, reroll\n"
     "any dice on a miss and envision how your\n"
     "reputation or underworld contacts lead you to a\n"
     "disreputable connection.",
     "When you make a quick escape or con your way out\n"
     "of a situation and burn momentum to gain a strong\n"
     "hit, take +1 momentum after you reset. If you\n"
     "envision how this momentary success leaves you\n"
     "fated for future trouble, mark 2 ticks on your\n"
     "quests legacy track."
  }
},
{
  "Seer",
  "Path",
  {
     "When you envision experiencing a prophetic dream,\n"
     "you may Ask the Oracle for details using an\n"
     "interpretive oracle such as Action/Theme or\n"
     "Descriptor/Focus. If you record the answer, and\n"
     "later face a situation which gives truth to the\n"
     "vision, take an automatic strong hit (one time\n"
     "only) when making a move to act on your\n"
     "foresight. Then, clear the prophecy. Only one\n"
     "prophecy can be active at a time.",
     "When you focus or meditate to Gather Information\n"
     "about a place, being, or situation (in person or\n"
     "remotely), roll +spirit and take +1 momentum on a\n"
     "hit.",
     "When you or an ally roll a match as you Sojourn\n"
     "in a community or Undertake an Expedition within\n"
     "a site, you may envision gaining sudden and\n"
     "unbidden insight about the location. If you do,\n"
     "take +2 momentum."
  }
},
{
  "Shade",
  "Path",
  {
     "Drawing on esoteric energies, you may instantly\n"
     "cloak your form in the shadowy veil of the void.\n"
     "When you are veiled and make a move to ambush,\n"
     "hide, or sneak, you may preset your action die to\n"
     "5. In darkness, make it 6. On a miss, in addition\n"
     "to any other cost, you are revealed and can't\n"
     "veil yourself again until the current situation\n"
     "is resolved.",
     "When you expand your veil to immerse your\n"
     "surroundings in darkness, roll +shadow. On a\n"
     "strong hit, the darkness extends to all adjacent\n"
     "spaces. On a weak hit, only your immediate\n"
     "surroundings are made dark. On a miss, you fail\n"
     "and draw unwanted attention.",
     "When you intentionally drop your veil to reveal\n"
     "yourself for dramatic or surprising effect,\n"
     "foregoing its further use in this situation, take\n"
     "+2 momentum."
  }
},
{
  "Slayer",
  "Path",
  {
     "When you make a move to investigate, track, or\n"
     "stalk an inhuman foe, add +1 and take +1 momentum\n"
     "on a hit.",
     "When you Swear an Iron Vow (formidable or\n"
     "greater) to slay an inhuman foe in service to a\n"
     "community, reroll any dice. When you Fulfill Your\n"
     "Vow and score a hit, also mark 2 ticks on your\n"
     "bonds legacy track.",
     "When you Enter the Fray with an objective to slay\n"
     "an inhuman foe, take +2 momentum. If you choose\n"
     "to face the creature on its own terms as you\n"
     "begin the fight, envision the crucial weapon,\n"
     "protection, or aid you set aside, and set the\n"
     "objective one rank higher. If you Take Decisive\n"
     "Action after making this sacrifice and score a\n"
     "strong hit, take a trophy of your victory and\n"
     "mark 2 ticks on your quests legacy track."
  }
},
{
  "Sleuth",
  "Path",
  {
     "When you Swear an Iron Vow to solve a murder,\n"
     "disappearance, theft, or other mystery, make the\n"
     "rank of the quest no greater than formidable.\n"
     "Then, when you Gather Information in the course\n"
     "of the investigation, roll three challenge dice\n"
     "and choose two. If any challenge dice match, you\n"
     "must use those values. On a miss with a match,\n"
     "envision what you learn of a deepening conspiracy\n"
     "or betrayal, make the rank of your quest one\n"
     "higher (no greater than epic), and use the new\n"
     "rank when marking future progress.",
     "When you make a move to avoid detection as you\n"
     "put a person or place under surveillance, add +1\n"
     "and take +1 momentum on a hit.",
     "When you Make a Connection with a potential\n"
     "informant, you may (instead of rolling) take an\n"
     "automatic weak hit."
  }
},
{
  "Sniper",
  "Path",
  {
     "When you target a minor foe from a distance\n"
     "(outside of a fight), roll +wits. On a strong\n"
     "hit, they are out of action. If other foes remain\n"
     "and you Enter the Fray against them, mark\n"
     "progress. On a weak hit, as above, but you\n"
     "sacrifice time or position; Lose Momentum (-1).\n"
     "On a miss, you draw attention or face a reprisal;\n"
     "Pay the Price.",
     "When you Strike from a distance with time enough\n"
     "to line up your shot, you may roll +wits. If you\n"
     "do, mark progress on a strong hit.",
     "When you Secure an Advantage by studying a\n"
     "distant situation through your rifle scope, or\n"
     "Gain Ground by taking careful aim, you may\n"
     "sacrifice time for greater certainty. If you do\n"
     "(decide before rolling), Lose Momentum (-1, -2,\n"
     "or -3) and add that amount. Then, take +1\n"
     "momentum on a strong hit."
  }
},
{
  "Tech",
  "Path",
  {
     "When you make a move to configure, optimize,\n"
     "hack, or disrupt an electronic system, add +1. On\n"
     "a weak hit, you can choose to press your luck. If\n"
     "you do, reroll all dice and add +2 (instead of\n"
     "+1).",
     "When you Withstand Damage and score a miss, you\n"
     "may attempt to reroute power or reboot critical\n"
     "systems. If you do, first Lose Momentum (-2).\n"
     "Then, reroll all dice, add +wits instead of\n"
     "+integrity, and count a weak hit as a miss.",
     "When you Face Danger or Secure an Advantage by\n"
     "creating a computer program to perform a\n"
     "specific, complex function, add +2 and take +1\n"
     "momentum on a hit. One time only, when you\n"
     "trigger the program to fulfill its purpose,\n"
     "reroll any dice."
  }
},
{
  "Trader",
  "Path",
  {
     "When you Sojourn or Compel, you may roll +supply.\n"
     "If you do, Sacrifice Resources (-1).",
     "When you Make a Connection with a merchant or\n"
     "supplier, add +1. When you Resupply by bartering\n"
     "with them, reroll your action die if its value is\n"
     "less than your supply. On a strong hit, take +1\n"
     "momentum or +1 supply.",
     "When you or an ally Sojourn and score a strong\n"
     "hit with a match, you have a chance to secure a\n"
     "unique item or valuable payload. Envision the\n"
     "nature of the opportunity and the obstacle you\n"
     "must overcome to acquire it. If you are\n"
     "successful, mark 2 ticks on your quests legacy\n"
     "track. One time only, you may use this\n"
     "acquisition to gain an automatic strong hit on\n"
     "any move where your resources are a factor."
  }
},
{
  "Vestige",
  "Path",
  {
     "You are all that remains of a people, culture, or\n"
     "tradition. When you Face Death or Face\n"
     "Desolation, visions of your heritage give you the\n"
     "strength to carry on. Envision how this\n"
     "manifests, and reroll any dice. On a strong hit\n"
     "with a match, a surprising new aspect of your\n"
     "heritage is revealed; take +2 momentum and mark 2\n"
     "ticks on your bonds legacy track.",
     "When you Secure an Advantage or Compel through a\n"
     "tale, performance, or ceremony, envision what you\n"
     "reveal of your heritage. Then, add +1 and take +1\n"
     "momentum on a hit.",
     "You carry a physical relic of your heritage.\n"
     "Envision its powers or nature. When you make a\n"
     "move directly aided by the relic and score a\n"
     "miss, you may reroll your action die."
  }
},
{
  "Veteran",
  "Path",
  {
     "When you are in a fight, increase your momentum\n"
     "reset by 1. Then, if you burn momentum to improve\n"
     "your result, add +1 on your next move.",
     "When you Make a Connection, add +1. If you roll a\n"
     "match, you have a history.\n"
     "* On a strong hit with a match, you once fought\n"
     "beside them, and they owe you a favor. Mark 1\n"
     "tick on your bonds legacy track, and Develop Your\n"
     "Relationship now.\n"
     "* On a miss with a match, you once fought against\n"
     "them, and they hold a grudge.",
     "When you Secure an Advantage or Gain Ground by\n"
     "recounting or recalling a hard-won lesson from\n"
     "your battlefield experiences, envision the memory\n"
     "and add +1. On a hit, take +1 momentum."
  }
},
{
  "Voidborn",
  "Path",
  {
     "You are most suited to life in the limitless\n"
     "void. When you are in space (or a spacebound\n"
     "vehicle or station), increase your momentum reset\n"
     "by 1. When you enter a planetside or high gravity\n"
     "environment, Lose Momentum (-1).",
     "When you Sojourn or Make a Connection within a\n"
     "spacebound community, add +1. If you Hearten\n"
     "there and score a strong hit, take +1 spirit or\n"
     "+1 momentum.",
     "When you make a move to perform an agile physical\n"
     "maneuver (such as leaping or evading) in a low\n"
     "gravity environment, add +1 and take +1 momentum\n"
     "on a hit. On a strong hit with a match, you build\n"
     "speed or put yourself in perfect position; take\n"
     "another +1 momentum."
  }
},
{
  "Weapon Master",
  "Path",
  {
     "You are a walking armory, with a weapon for every\n"
     "occasion. When you Enter the Fray in personal\n"
     "combat, add +1 and take +1 momentum on a hit.\n"
     "Once per fight, when you Gain Ground by switching\n"
     "weapons or changing tactics, take an automatic\n"
     "strong hit.",
     "When you Strike using a personal weapon which has\n"
     "limited ammo or a single-use mode, add +1 and\n"
     "mark progress on a hit. Then, Sacrifice Resources\n"
     "(-1). If you score a strong hit on this attack\n"
     "and immediately Take Decisive Action, you may\n"
     "retain the value of one challenge die from your\n"
     "Strike action instead of rolling that die.",
     "When you Secure an Advantage by suiting up and\n"
     "gathering your gear for a perilous encounter or\n"
     "mission, you may roll +supply. If you do, take +2\n"
     "momentum on a hit."
  }
},
{
  "Crew Commander",
  "Path",
  {
     "You have 2 command; your max is 4. When you or an\n"
     "ally make a move leading or aided by your crew,\n"
     "you may (after rolling) suffer -1 command and\n"
     "improve a miss to a weak hit, or a weak hit to a\n"
     "strong hit. When you Pay the Price, you may\n"
     "suffer the cost as -1 command. If you Face Danger\n"
     "as a test of your leadership, roll +command. To\n"
     "bolster your crew, provide a significant reward\n"
     "or respite; then, roll +heart. On a strong hit,\n"
     "take +4 command. On a weak hit, take +2. On a\n"
     "miss, take +2 but envision a threat to your crew\n"
     "or leadership.",
     "Take +2 command; your max is now 6.",
     "When your command is 0 and the situation\n"
     "desperate, you may Compel your crew to action; if\n"
     "you do, take +2 command on a hit."
  }
},
{
  "Banshee",
  "Companion",
  {
     "Your banshee companion accompanies you on\n"
     "planetside missions, using its echolocation to\n"
     "help guide the way. When you ride your banshee as\n"
     "you Undertake an Expedition or Set a Course, you\n"
     "may roll +its health.",
     "When you make a move astride the banshee to\n"
     "detect a threat or avoid a fight, add +1 and take\n"
     "+1 momentum on a hit. On a strong hit with a\n"
     "match, you're gone in a flash; take another +1\n"
     "momentum.",
     "When you make a combat move and roll a 1 on your\n"
     "action die, the banshee senses the danger and\n"
     "emits a powerful scream to alert you or distract\n"
     "your foes. You may reroll that die."
  }
},
{
  "Combat Bot",
  "Companion",
  {
     "Your combat bot companion fights at your side.\n"
     "When you Strike aided by the bot, add +1; if you\n"
     "Clash, take +1 momentum on a hit.",
     "When you use the threat of violence to Compel or\n"
     "Gain Ground while the bot brings its weapons to\n"
     "bear, you may roll +its health. If you do, take\n"
     "+1 momentum on a hit. On a strong hit with a\n"
     "match, the bot's display is especially\n"
     "persuasive; take another +1 momentum.",
     "Once per fight, when you React Under Fire by\n"
     "using the bot to draw fire or create a diversion,\n"
     "roll +its health. On a strong hit, mark progress.\n"
     "On a weak hit, face the cost as normal, but then\n"
     "you are in control."
  }
},
{
  "Glowcat",
  "Companion",
  {
     "Your glowcat companion perceives the inner\n"
     "emotions and intentions of people and creatures\n"
     "in its vicinity, and embodies those impressions\n"
     "through the colors and intensity of its\n"
     "luminescent fur. When you Secure an Advantage by\n"
     "studying the glowcat's reactions in a charged\n"
     "interaction, add +its health.",
     "When you Compel, the glowcat's reactions will\n"
     "help guide your approach; you may reroll your\n"
     "action die if its value is less than the\n"
     "glowcat's health.",
     "When you Endure Stress in the company of the\n"
     "glowcat, add +1. On a strong hit with a match,\n"
     "take +momentum equal to their health."
  }
},
{
  "Protocol Bot",
  "Companion",
  {
     "Your protocol bot companion is programmed with\n"
     "knowledge of cultures, languages, and customs.\n"
     "When you are aided by the bot as you make a move\n"
     "in a formal social interaction, add +1. On a\n"
     "strong hit with a match, you learn something\n"
     "which builds understanding or empathy; also mark\n"
     "1 tick on your bonds legacy track.",
     "When you first visit or interact with a new\n"
     "community or culture, you may ask for the bot's\n"
     "insight. If you do, envision what you learn and\n"
     "take +1 momentum.",
     "If you make a move in a charged interaction and\n"
     "the value of your action die is less than the\n"
     "bot's health, you may reroll it as the bot\n"
     "interjects with their commentary or advice."
  }
},
{
  "Rockhorn",
  "Companion",
  {
     "Your rockhorn companion uses its resilient,\n"
     "stone-like hide and brute strength to overcome\n"
     "threats. When you make a move by sending the\n"
     "rockhorn to directly attack a foe or smash an\n"
     "obstacle, roll +its health.",
     "When you make the Companion Takes a Hit move for\n"
     "the rockhorn, count a weak hit as a strong hit.\n"
     "On a strong hit with a match, its rapid healing\n"
     "makes it unstoppable; give it another +1 health\n"
     "or take +1 momentum.",
     "The rockhorn will come to your aid in your most\n"
     "vulnerable moments. When you Endure Harm or\n"
     "Endure Stress and score a miss, you may reroll\n"
     "your action die if its value is less than the\n"
     "rockhorn's health."
  }
},
{
  "Sidekick",
  "Companion",
  {
     "Your sidekick has a helpful expertise. When you\n"
     "make a move outside of a fight directly aided by\n"
     "their expertise, you may reroll your action die\n"
     "if its value is less than your sidekick's health.\n"
     "If you then score a strong hit with a match, mark\n"
     "1 tick on your bonds legacy track.",
     "When you Enter the Fray with the support of your\n"
     "sidekick, take +2 momentum on a hit. When you\n"
     "Clash together, add +1.",
     "When your sidekick acts to get you out of a tough\n"
     "spot, you may Face Danger or React Under Fire and\n"
     "roll +their health (instead of your own stat). On\n"
     "a hit, take +1 momentum."
  }
},
{
  "Sprite",
  "Companion",
  {
     "Your sprite companion alters its delicate,\n"
     "crystalline form to fly, swim, or scurry, and can\n"
     "covertly navigate even the harshest of\n"
     "environments. When you make a move by sending it\n"
     "to perform trickery (such as creating a\n"
     "distraction, sneaking into a protected location,\n"
     "or stealing an object) add +its health.",
     "You are attuned to the resonance of the sprite's\n"
     "crystalline structure, and can communicate with\n"
     "it at a distance and perceive through its senses.\n"
     "When you Secure an Advantage by observing a\n"
     "situation from its perspective, or remotely\n"
     "Gather Information, add +its health.",
     "With a moment's rest, the sprite can mend its\n"
     "form and return automatically to max health."
  }
},
{
  "Survey Bot",
  "Companion",
  {
     "Your survey bot companion scans the path ahead.\n"
     "When you Undertake an Expedition (+wits) overland\n"
     "or within a site, add +1.",
     "Once per expedition, when you Secure an Advantage\n"
     "by sending the bot to scout ahead, roll +its\n"
     "health. On a hit, also mark progress on the\n"
     "expedition. On a strong hit with a match, the bot\n"
     "uncovers an unexpected feature or location;\n"
     "envision what it reveals and mark 1 tick on your\n"
     "discoveries legacy track.",
     "When you Explore a Waypoint aided by the bot's\n"
     "sensors, or Face Danger to detect a threat, roll\n"
     "+its health and take +1 momentum on a hit."
  }
},
{
  "Symbiote",
  "Companion",
  {
     "You are physically bound to a being with 2\n"
     "health. When you make aggressive moves while\n"
     "giving yourself to the symbiote's power, add +its\n"
     "health. If you face physical harm, choose either\n"
     "the Endure Harm or Companion Takes a Hit move. To\n"
     "restore the symbiote's health, you must Endure\n"
     "Stress and give the symbiote +health equal to the\n"
     "-spirit you face. If you make a move aided by the\n"
     "symbiote and roll a 1 on your action die, your\n"
     "fragile bond is broken for several hours.",
     "When you make a move and heed the symbiote's\n"
     "guidance (decide after rolling), you may reroll\n"
     "any dice. Then, Endure Stress (-2).",
     "The symbiote gains power and has 3 health."
  }
},
{
  "Utility Bot",
  "Companion",
  {
     "Your utility bot companion has helpful tools\n"
     "at-hand. When you make a move by directing it to\n"
     "access a system, cut through an obstacle, analyze\n"
     "a mechanical issue, or assemble or disassemble a\n"
     "device, roll +its health and take +1 momentum on\n"
     "a hit. On a strong hit with a match, it reveals\n"
     "an unexpected advantage or insight; take another\n"
     "+1 momentum.",
     "When you Repair aided by the bot, add +1. On a\n"
     "miss, it reveals an alternative approach which\n"
     "will take extra time; you may reroll any dice,\n"
     "but first Lose Momentum (-2).",
     "When you Check Your Gear to see if the bot has a\n"
     "specific tool or technique available, roll +its\n"
     "health and take +1 momentum on a hit."
  }
},
{
  "Voidglider",
  "Companion",
  {
     "Your voidglider companion cruises in your\n"
     "starship's energy wake and can help guide the way\n"
     "on spaceborne journeys. When you Undertake an\n"
     "Expedition, add +1.",
     "The voidglider is harnessed and trained as a\n"
     "mount, and can be ridden for short-range\n"
     "spacebound transport. When you are riding the\n"
     "voidglider and make a move to detect or evade a\n"
     "threat by relying on its instincts, roll +its\n"
     "health.",
     "When you make a move by signaling the voidglider\n"
     "to distract or attack a spaceborne foe, roll +its\n"
     "health and take +1 momentum on a hit."
  }
},
{
  "Bonded",
  "Deed",
  {
     "This person is your bond-mate. When you Sojourn\n"
     "at their home, Hearten in their presence, or Test\n"
     "Your Relationship or Develop Your Relationship\n"
     "with them, reroll any dice. On a strong hit, take\n"
     "+1 momentum.",
     "When you Set a Course back to your bond-mate's\n"
     "location, add +heart. On a strong hit with a\n"
     "match, envision a special reunion and mark two\n"
     "ticks on your bonds legacy track.",
     "When you make a move in a crucial moment and\n"
     "score a miss, you may cling to thoughts of your\n"
     "bond-mate for support. If you do, reroll any\n"
     "dice. On another miss, in addition to the outcome\n"
     "of the move, you must mark shaken or traumatized.\n"
     "If both debilities are already marked, Face\n"
     "Desolation."
  }
},
{
  "Homesteader",
  "Deed",
  {
     "You have chosen or established a community as\n"
     "your home. When you Swear an Iron Vow (formidable\n"
     "or greater) in service to your home, reroll any\n"
     "dice. On a hit, mark 1 tick on your bonds legacy\n"
     "track. When you Fulfill Your Vow and score a hit,\n"
     "also mark 2 ticks on your bonds legacy track.",
     "When you Sojourn in your home, choose one.\n"
     "* Don't linger: Take an automatic weak hit\n"
     "* Stay a bit: Add +1 and take +1 momentum on a\n"
     "hit",
     "When you Set a Course for home, you may reroll\n"
     "your action die if its value is less than your\n"
     "spirit."
  }
},
{
  "Marked",
  "Deed",
  {
     "Envision the title, sigil, uniform, or tattoo you\n"
     "bear in recognition of your achievements. When\n"
     "you Compel or Make a Connection among those who\n"
     "would know your reputation, add +1. On a strong\n"
     "hit with a match, your notoriety grows; mark 2\n"
     "ticks on your bonds legacy track.",
     "When you risk your reputation to overcome a miss,\n"
     "reroll any dice. If you score a miss again, fill\n"
     "one segment of a six-segment clock to represent\n"
     "the stain on your reputation. When the clock is\n"
     "filled, discard this asset.",
     "Once per fight, when you Gain Ground through\n"
     "intimidation or command, reroll any dice and mark\n"
     "progress on a hit."
  }
},
{
  "Oathbreaker",
  "Deed",
  {
     "This asset counts as an impact. One time only,\n"
     "when you Swear an Iron Vow (extreme or greater)\n"
     "to redeem yourself, give that vow a special mark.\n"
     "When you Reach a Milestone on the marked vow,\n"
     "take +2 momentum. If you Forsake Your Vow on the\n"
     "quest, discard this asset and retain the impact.",
     "When you Secure an Advantage or Compel by\n"
     "reaffirming your commitment to your marked vow,\n"
     "add +1 and take +1 momentum on a hit.",
     "When you Fulfill Your Vow on the marked quest and\n"
     "score a hit, you find redemption and\n"
     "automatically gain this ability at no cost. You\n"
     "may then improve one of your stats by +1 and\n"
     "discard this asset. Once the asset is discarded,\n"
     "you may not take it again."
  }
},
{
  "Revenant",
  "Deed",
  {
     "When you are at 0 health, and Endure Harm or Face\n"
     "Death, add +1. You may then reroll your action\n"
     "die if its value is less than your spirit.",
     "When you Take Decisive Action by bringing death\n"
     "to a foe, you may burn momentum to zero out one\n"
     "(not both) of the challenge dice if your momentum\n"
     "is greater than the value of that die. If you do,\n"
     "Endure Stress (-2).",
     "When you Gather Information by studying a place\n"
     "where death left its mark, you may roll +heart.\n"
     "If you do, take +1 momentum on a hit. On a strong\n"
     "hit with a match, you experience a detailed\n"
     "vision or insightful revelation of what occurred\n"
     "here; take +1 momentum more."
  }
},
{
  "Survivor",
  "Deed",
  {
     "When you are haunted by past experiences and must\n"
     "Endure Stress, you may Lose Momentum (-1) before\n"
     "rolling as you attempt to find focus or calm. If\n"
     "you do, reroll any dice. On a strong hit, take +1\n"
     "momentum.",
     "When you make a move where a lasting effect\n"
     "(traumatized or permanently harmed) has a\n"
     "narrative impact on the scene or your approach,\n"
     "and burn momentum to improve your result, you may\n"
     "envision what sustains or motivates you in this\n"
     "moment. If you do, mark 1 tick on your quests or\n"
     "bonds legacy track. On a strong hit with a match,\n"
     "mark 2 ticks.",
     "You are learning to live with this impact. The\n"
     "lasting effect (traumatized or permanently\n"
     "harmed, but not both) remains marked, but no\n"
     "longer reduces your max momentum or reset."
  }
},
{
  "Vanguard",
  "Deed",
  {
     "When you seek a safe location in a remote\n"
     "environment, make a progress roll against your\n"
     "discoveries legacy track. On a strong hit, you\n"
     "establish a haven; add +2 whenever you make a\n"
     "recovery move at that location. On a weak hit, as\n"
     "above, but add +1 when making a recovery move. On\n"
     "a miss, you are drawn into a bad situation and\n"
     "must Pay the Price. If you establish a haven but\n"
     "score a miss on a recovery move, that location is\n"
     "no longer safe.",
     "When you make a move +wits and score a strong hit\n"
     "with a match, your hard-won experience lends\n"
     "insight; take +1 momentum.",
     "When you Endure Stress, you may roll +wits. If\n"
     "you do, take +1 momentum on a hit."
  }
},
{
  "Cohort",
  "Deed",
  {
     "You gain a specialist. The specialist is part of\n"
     "your crew, but is managed as a connection and\n"
     "provides benefits to you and your allies per\n"
     "their role. When you Withstand Damage and score a\n"
     "miss, or if you Pay_the_Price, you may suffer the\n"
     "cost by noting the specialist as out of action.\n"
     "An out of action specialist provides no benefit.\n"
     "To restore a specialist to duty, resolve the\n"
     "situation as appropriate to the nature of the\n"
     "injury, trauma, or dispute.",
     "You may gain additional specialists by spending 1\n"
     "experience to add a connection to your crew as a\n"
     "specialist. Specialist bonuses may not be stacked\n"
     "for a single action.",
     "When you Secure an Advantage by gathering your\n"
     "specialists to strategize or problem-solve, you\n"
     "may reroll one die for each participating\n"
     "specialist."
  }
},
{
  "Fleet Commander",
  "Deed",
  {
     "Your fleet has a starting and max power of 4.\n"
     "When you make a move as a fleetwide action to get\n"
     "in position, avoid a hazard, or fight, roll\n"
     "+power. If you Pay the Price and your fleet bears\n"
     "the cost, suffer -1 power. At 0 power, mark the\n"
     "fleet as wrecked. To refit the fleet, Sojourn and\n"
     "forego an automatic strong hit on a recover move\n"
     "to take +2 power; if the fleet is wrecked, first\n"
     "spend 2 experience to clear that status.",
     "Take +2 power and set your max power to 5.",
     "When you Undertake an Expedition, you may reroll\n"
     "your action die if its value is less than your\n"
     "fleet's power."
  }
},
};

inline constexpr int kCardCount = static_cast<int>(sizeof(kCards) / sizeof(kCards[0]));

}  // namespace inkforgedui
