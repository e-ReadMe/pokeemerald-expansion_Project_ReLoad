

    [SPECIES_BOTAMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_FREE, TYPE_FREE, TYPE_FREE),
        .catchRate = 225,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Botamon"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_BOTAMON,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The shell on its back is made of soil. \n"
            "On a very healthy Turtwig, the shell \n"
            "should feel moist. The leaf on its head\n"
            "wilts if it is thirsty."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Botamon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Botamon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Botamon,
        .shinyPalette = gMonShinyPalette_Botamon,
        .iconSprite = gMonIcon_Botamon,
        .iconPalIndex = 3,
        SHADOW(1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Botamon)
        OVERWORLD(
            sPicTable_Botamon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Botamon,
            gShinyOverworldPalette_Botamon
        )
        .levelUpLearnset = sBotamonLevelUpLearnset,
        .teachableLearnset = sBotamonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_AGUMON, CONDITIONS({IF_STAT_BASED, STAT_ATK, 30, STAT_DEF, 1, STAT_HP, 1, 0, 255, ITEM_NONE})},
                                {EVO_LEVEL, 30, SPECIES_HACKMON, CONDITIONS({STAT_SPATK, 30, STAT_DEF, 1, STAT_HP, 1, 0, 255, ITEM_NONE})}),
    },

    [SPECIES_CHOROMON] =
    {
        .baseHP        = 10,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 10,
        .types = MON_TYPES(TYPE_FREE, TYPE_FREE, TYPE_FREE),
        .catchRate = 225,
        .expYield = 100,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Choromon"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_CHOROMON,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The shell on its back is made of soil. \n"
            "On a very healthy Turtwig, the shell \n"
            "should feel moist. The leaf on its head\n"
            "wilts if it is thirsty."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Choromon,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 1),
            ANIMCMD_FRAME(1, 36),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Choromon,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Choromon,
        .shinyPalette = gMonShinyPalette_Choromon,
        .iconSprite = gMonIcon_Choromon,
        .iconPalIndex = 4,
        SHADOW(1, 2, SHADOW_SIZE_L)
        FOOTPRINT(Choromon)
        OVERWORLD(
            sPicTable_Choromon,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            sAnimTable_Following,
            gOverworldPalette_Choromon,
            gShinyOverworldPalette_Choromon
        )
        .levelUpLearnset = sChoromonLevelUpLearnset,
        .teachableLearnset = sChoromonTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_AGUMON, CONDITIONS({IF_STAT_BASED, STAT_ATK, 30, STAT_DEF, 1, STAT_HP, 1, 0, 255, ITEM_NONE})},
                                {EVO_LEVEL, 30, SPECIES_HACKMON, CONDITIONS({IF_STAT_BASED, STAT_SPATK, 30, STAT_DEF, 1, STAT_HP, 1, 0, 255, ITEM_NONE})}),
    },







