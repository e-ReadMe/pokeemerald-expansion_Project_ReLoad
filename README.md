# About `Project ReLoad`

**`Project ReLoad`** is a GBA ROM hack base that builds upon the Pokemerald-Expansion with the goal of becoming a foundation for making Digimon rom hacks. The goals of the project are as follows:
- Compaitibility with the base Pokememerald-Expansion to ensure that merges can still take place and Project ReLoad can take advantage of the continued improvments by that team.
- Digimon species are implemented
- Common mechanics of digimon games are implemented and incorproated into the Pokemon engine
- Custom art and sound is created and/or adapted from official Digimon media

**`Compatibility`**

Compatibility with Pokeemerald-Expansion should be maintained for as long as possible. Additions should be made in a way that prevents code conflicts, while achieving the other goals. Currently that makes use of subfolders for digimon species information, overwriting Pokemon-equivalents, and using #define functions to ensure compatibility
For example, this mod incorporates new types such as Insect, Plant, Filth and Light. Using a #define function we can tell the code to overwrite the Pokemon types of Bug, Grass, Poison and Psychic with these new types, without having to modify other existing code, and preserving compatibility.
This is the primary goal of this project, as all other goals should be implemented with this in mind. 

**`Mechanics`**

**🦖 Digimon Species**

The eventual goal is to incorporate all digimon species into the mod. Digimon have been organized into time eras, and then via evolution stage and then alphabetically. For the purposes of this project, stage VI and above digimon are grouped. 

- Currently the 1997-1999 Era of digimon is implemented as placeholders, and is in the process of being implemented properly.
- Digimon are defined according to their translated names, as determined by one of our leads. This will often, but not always, be consistent with [Wikimon](https://wikimon.net/). Digimon's 'dub names' are also defined, and will be consistent with the current English translation used by the TCG.
- All attacks will be 'digimon attacks' with no pokemon moves remaining, unless they coincidentally share both a name, such as [Splash](https://www.grindosaur.com/en/games/digimon-world-next-order/moves/splash) and [Splash](https://bulbapedia.bulbagarden.net/wiki/Splash_(move))
- a branching evolution tree. Players can use a Digivice menu to evolve their digimon into one of several options, provided they meet stat requirements. Upon evolution they will learn a 'signature attack' which is otherwise treated as a normal move. Digimon can also revert to previous stages via this menu.
- Custom abilities, either adapted from other [media](https://www.grindosaur.com/en/games/digimon-story-cyber-sleuth/support-skills) or invented. 

**Relevant files** 
- [the 97-99 species list](https://github.com/e-ReadMe/pokeemerald-expansion_Project_ReLoad/blob/master/src/data/pokemon/species_info/digi_1997_1999.h) for their basic info
- [the 97-99 graphics folder](https://github.com/e-ReadMe/pokeemerald-expansion_Project_ReLoad/tree/master/graphics/pokemon/digimon/1997_1999)  for their battle and overworld sprites
- [the digivolutions files](https://github.com/e-ReadMe/pokeemerald-expansion_Project_ReLoad/blob/master/src/data/pokemon/digivolution.h)  for their digivolution requirement
- [the regular moves page](https://github.com/e-ReadMe/pokeemerald-expansion_Project_ReLoad/blob/master/src/data/moves_info.h) for custom attack effects, and [the move constants page](https://github.com/e-ReadMe/pokeemerald-expansion_Project_ReLoad/blob/master/include/constants/moves.h) for a list of moves, organized by type and power.
- [The ability list](https://github.com/e-ReadMe/pokeemerald-expansion_Project_ReLoad/blob/master/src/data/abilities.h) for all abilities. 

**Current Goals**
- Game start settings toggle to allow the player to select between Sub and Dub names. 

**Eventual goals**
- Remaining digimon implemented
- death evolution
- failure evolution
- 

**Implemented**
- 97-99 Era digimon
- Digivice menu with stat requirements and branching evolution tree

# About `pokeemerald-expansion`

![Gif that shows debugging functionality that is unique to pokeemerald-expansion such as rerolling Trainer ID, Cheat Start, PC from Debug Menu, Debug PC Fill, Pokémon Sprite Visualizer, Debug Warp to Map, and Battle Debug Menu](https://github.com/user-attachments/assets/cf9dfbee-4c6b-4bca-8e0a-07f116ef891c) ![Gif that shows overworld functionality that is unique to pokeemerald-expansion such as indoor running, BW2 style map popups, overworld followers, DNA Splicers, Gen 1 style fishing, OW Item descriptions, Quick Run from Battle, Use Last Ball, Wild Double Battles, and Catch from EXP](https://github.com/user-attachments/assets/383af243-0904-4d41-bced-721492fbc48e) ![Gif that shows off a number of modern Pokémon battle mechanics happening in the pokeemerald-expansion engine: 2 vs 1 battles, modern Pokémon, items, moves, abilities, fully customizable opponents and partners, Trainer Slides, and generational gimmicks](https://github.com/user-attachments/assets/50c576bc-415e-4d66-a38f-ad712f3316be)

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokeemerald-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. **`pokeemerald-expansion`** is built on top of [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project. **It is not a playable Pokémon game on its own.**

# [Features](FEATURES.md)

**`pokeemerald-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those features can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokeemerald-expansion`**, please credit **RHH (Rom Hacking Hideout)**. Optionally, include the version number for clarity.

```
Based off RHH's pokeemerald-expansion 1.15.2 https://github.com/rh-hideout/pokeemerald-expansion/
```

Please consider [crediting all contributors](CREDITS.md) involved in the project!

# Choosing `pokeemerald` or **`pokeemerald-expansion`**

- **`pokeemerald-expansion`** supports multiplayer functionality with other games built on **`pokeemerald-expansion`**. It is not compatible with official Pokémon games.
- If compatibility with official games is important, use [`pokeemerald`](https://github.com/pret/pokeemerald). Otherwise, we recommend using **`pokeemerald-expansion`**.
- **`pokeemerald-expansion`** incorporates regular updates from `pokeemerald`, including bug fixes and documentation improvements.

# [Getting Started](INSTALL.md)

❗❗ **Important**: Do not use GitHub's "Download Zip" option as it will not include commit history. This is necessary if you want to update or merge other feature branches.

If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide to forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Then you can follow one of the following guides:

## 📥 [Installing **`pokeemerald-expansion`**](INSTALL.md)
## 🏗️ [Building **`pokeemerald-expansion`**](INSTALL.md#Building-pokeemerald-expansion)
## 🚚 [Migrating from **`pokeemerald`**](INSTALL.md#Migrating-from-pokeemerald)
## 🚀 [Updating **`pokeemerald-expansion`**](INSTALL.md#Updating-pokeemerald-expansion)

# [Documentation](https://rh-hideout.github.io/pokeemerald-expansion/)

For detailed documentation, visit the [pokeemerald-expansion documentation page](https://rh-hideout.github.io/pokeemerald-expansion/).

# [Contributions](CONTRIBUTING.md)
If you are looking to [report a bug](CONTRIBUTING.md#Bug-Report), [open a pull request](CONTRIBUTING.md#Pull-Requests), or [request a feature](CONTRIBUTING.md#Feature-Request), our [`CONTRIBUTING.md`](CONTRIBUTING.md) has guides for each.

# [Community](https://discord.gg/6CzjAG6GZk)

[![](https://dcbadge.limes.pink/api/server/6CzjAG6GZk)](https://discord.gg/6CzjAG6GZk)

Our community uses the [ROM Hacking Hideout (RHH) Discord server](https://discord.gg/6CzjAG6GZk) to communicate and organize. Most of our discussions take place there, and we welcome anybody to join us!
