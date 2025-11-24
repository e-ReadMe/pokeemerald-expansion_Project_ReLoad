OldaleTown_Mart_MapScripts::
	.byte 0

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_SMALL_RECOVERY_DISK
	.2byte ITEM_MEDIUM_RECOVERY_DISK
	.2byte ITEM_LARGE_RECOVERY_DISK
	.2byte ITEM_SUPER_RECOVERY_DISK
	.2byte ITEM_SMALL_MP_DISK
	.2byte ITEM_MEDIUM_MP_DISK
	.2byte ITEM_LARGE_MP_DISK
	.2byte ITEM_OMNIPOTENT_DISK
	.2byte ITEM_VARIOUS_DISK
	.2byte ITEM_DOUBLE_FLOPPY_DISK
	.2byte ITEM_RESTORE_DISK
	.2byte ITEM_SUPER_RESTORE_DISK
	.2byte ITEM_BRAIN_CHIP
	.2byte ITEM_DEFENSE_CHIP
	.2byte ITEM_HP_CHIP
	.2byte ITEM_MP_CHIP
	.2byte ITEM_OFFENSE_CHIP
	.2byte ITEM_QUICK_CHIP
	.2byte ITEM_DISINFECTANT
	.2byte ITEM_COFFEE
	.2byte ITEM_VITAMINS
	.2byte ITEM_SEDATIVE
	.2byte ITEM_BANDAGE
	.2byte ITEM_BIG_BANDAGE
	.2byte ITEM_CLEAN_DRESSING
	.2byte ITEM_ALL_PURPOSE_OINTMENT
	.2byte ITEM_MEAT
	.2byte ITEM_CHOICE_MEAT
	.2byte ITEM_SNAKEHEAD
	.2byte ITEM_MUSHROOM
	.2byte ITEM_CARROT
	.2byte ITEM_APPLE
	.2byte ITEM_MELON
	.2byte ITEM_PINEAPPLE
	.2byte ITEM_BANANA
	.2byte ITEM_ODD_MUSHROOM
	.2byte ITEM_CURVY_CARROT
	.2byte ITEM_SOFT_APPLE
	.2byte ITEM_JEALOUSY_MELON
	.2byte ITEM_BARBED_PINEAPPLE
	.2byte ITEM_CONNIVING_BANANA
	.2byte ITEM_CELEBRATION_MUSHROOM
	.2byte ITEM_CLOBBER_CARROT
	.2byte ITEM_CRISPY_APPLE
	.2byte ITEM_SINCERITY_MELON
	.2byte ITEM_SUPERPOWER_PINEAPPLE
	.2byte ITEM_EARNEST_BANANA
	.2byte ITEM_CD_PLAYER
	.2byte ITEM_DUMBELL
	.2byte ITEM_JUMP_ROPE
	.2byte ITEM_PUNCHING_BAG
	.2byte ITEM_TREADMILL
	.2byte ITEM_YOGA_MAT
	.2byte ITEM_BOOMBOX
	.2byte ITEM_HEAVY_DUMBELL
	.2byte ITEM_WEIGHTED_JUMP_ROPE
	.2byte ITEM_SPEED_BAG
	.2byte ITEM_ADVANCED_TREADMILL
	.2byte ITEM_PRO_YOGA_MAT
	pokemartlistend

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_SMALL_RECOVERY_DISK
	.2byte ITEM_MEDIUM_RECOVERY_DISK
	.2byte ITEM_LARGE_RECOVERY_DISK
	.2byte ITEM_SUPER_RECOVERY_DISK
	.2byte ITEM_SMALL_MP_DISK
	.2byte ITEM_MEDIUM_MP_DISK
	.2byte ITEM_LARGE_MP_DISK
	.2byte ITEM_OMNIPOTENT_DISK
	.2byte ITEM_VARIOUS_DISK
	.2byte ITEM_DOUBLE_FLOPPY_DISK
	.2byte ITEM_RESTORE_DISK
	.2byte ITEM_SUPER_RESTORE_DISK
	.2byte ITEM_BRAIN_CHIP
	.2byte ITEM_DEFENSE_CHIP
	.2byte ITEM_HP_CHIP
	.2byte ITEM_MP_CHIP
	.2byte ITEM_OFFENSE_CHIP
	.2byte ITEM_QUICK_CHIP
	.2byte ITEM_DISINFECTANT
	.2byte ITEM_COFFEE
	.2byte ITEM_VITAMINS
	.2byte ITEM_SEDATIVE
	.2byte ITEM_BANDAGE
	.2byte ITEM_BIG_BANDAGE
	.2byte ITEM_CLEAN_DRESSING
	.2byte ITEM_ALL_PURPOSE_OINTMENT
	.2byte ITEM_MEAT
	.2byte ITEM_CHOICE_MEAT
	.2byte ITEM_SNAKEHEAD
	.2byte ITEM_MUSHROOM
	.2byte ITEM_CARROT
	.2byte ITEM_APPLE
	.2byte ITEM_MELON
	.2byte ITEM_PINEAPPLE
	.2byte ITEM_BANANA
	.2byte ITEM_ODD_MUSHROOM
	.2byte ITEM_CURVY_CARROT
	.2byte ITEM_SOFT_APPLE
	.2byte ITEM_JEALOUSY_MELON
	.2byte ITEM_BARBED_PINEAPPLE
	.2byte ITEM_CONNIVING_BANANA
	.2byte ITEM_CELEBRATION_MUSHROOM
	.2byte ITEM_CLOBBER_CARROT
	.2byte ITEM_CRISPY_APPLE
	.2byte ITEM_SINCERITY_MELON
	.2byte ITEM_SUPERPOWER_PINEAPPLE
	.2byte ITEM_EARNEST_BANANA
	.2byte ITEM_CD_PLAYER
	.2byte ITEM_DUMBELL
	.2byte ITEM_JUMP_ROPE
	.2byte ITEM_PUNCHING_BAG
	.2byte ITEM_TREADMILL
	.2byte ITEM_YOGA_MAT
	.2byte ITEM_BOOMBOX
	.2byte ITEM_HEAVY_DUMBELL
	.2byte ITEM_WEIGHTED_JUMP_ROPE
	.2byte ITEM_SPEED_BAG
	.2byte ITEM_ADVANCED_TREADMILL
	.2byte ITEM_PRO_YOGA_MAT
	pokemartlistend

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "The clerk says they're all sold out.\n"
	.string "I can't buy any POKé BALLS.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "I'm going to buy a bunch of POKé BALLS\n"
	.string "and catch a bunch of POKéMON!$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "If a POKéMON gets hurt and loses its HP\n"
	.string "and faints, it won't be able to battle.\p"
	.string "To prevent your POKéMON from fainting,\n"
	.string "restore its HP with a POTION.$"

OldaleTown_Mart_GiveAllItems::
	msgbox GiveAllTiemsText, MSGBOX_DEFAULT
		giveitem ITEM_SMALL_RECOVERY_DISK
	giveitem ITEM_MEDIUM_RECOVERY_DISK
	giveitem ITEM_LARGE_RECOVERY_DISK
	giveitem ITEM_SUPER_RECOVERY_DISK
	giveitem ITEM_SMALL_MP_DISK
	giveitem ITEM_MEDIUM_MP_DISK
	giveitem ITEM_LARGE_MP_DISK
	giveitem ITEM_OMNIPOTENT_DISK
	giveitem ITEM_VARIOUS_DISK
	giveitem ITEM_DOUBLE_FLOPPY_DISK
	giveitem ITEM_RESTORE_DISK
	giveitem ITEM_SUPER_RESTORE_DISK
	giveitem ITEM_BRAIN_CHIP
	giveitem ITEM_DEFENSE_CHIP
	giveitem ITEM_HP_CHIP
	giveitem ITEM_MP_CHIP
	giveitem ITEM_OFFENSE_CHIP
	giveitem ITEM_QUICK_CHIP
	giveitem ITEM_DISINFECTANT
	giveitem ITEM_COFFEE
	giveitem ITEM_VITAMINS
	giveitem ITEM_SEDATIVE
	giveitem ITEM_BANDAGE
	giveitem ITEM_BIG_BANDAGE
	giveitem ITEM_CLEAN_DRESSING
	giveitem ITEM_ALL_PURPOSE_OINTMENT
	giveitem ITEM_MEAT
	giveitem ITEM_CHOICE_MEAT
	giveitem ITEM_SNAKEHEAD
	giveitem ITEM_MUSHROOM
	giveitem ITEM_CARROT
	giveitem ITEM_APPLE
	giveitem ITEM_MELON
	giveitem ITEM_PINEAPPLE
	giveitem ITEM_BANANA
	giveitem ITEM_ODD_MUSHROOM
	giveitem ITEM_CURVY_CARROT
	giveitem ITEM_SOFT_APPLE
	giveitem ITEM_JEALOUSY_MELON
	giveitem ITEM_BARBED_PINEAPPLE
	giveitem ITEM_CONNIVING_BANANA
	giveitem ITEM_CELEBRATION_MUSHROOM
	giveitem ITEM_CLOBBER_CARROT
	giveitem ITEM_CRISPY_APPLE
	giveitem ITEM_SINCERITY_MELON
	giveitem ITEM_SUPERPOWER_PINEAPPLE
	giveitem ITEM_EARNEST_BANANA
	giveitem ITEM_CD_PLAYER
	giveitem ITEM_DUMBELL
	giveitem ITEM_JUMP_ROPE
	giveitem ITEM_PUNCHING_BAG
	giveitem ITEM_TREADMILL
	giveitem ITEM_YOGA_MAT
	giveitem ITEM_BOOMBOX
	giveitem ITEM_HEAVY_DUMBELL
	giveitem ITEM_WEIGHTED_JUMP_ROPE
	giveitem ITEM_SPEED_BAG
	giveitem ITEM_ADVANCED_TREADMILL
	giveitem ITEM_PRO_YOGA_MAT
	release
	end

GiveAllTiemsText:
	.string "Here's all items.$"