OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_OLDALE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end
	

OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "That PC in the corner there is\n"
	.string "for any POKéMON TRAINER to use.\p"
	.string "Naturally, that means you're welcome\n"
	.string "to use it, too.$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "POKéMON CENTERS are great!\p"
	.string "You can use their services as much\n"
	.string "as you like, and it's all for free.\l"
	.string "You never have to worry!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "But they say they're still making\n"
	.string "adjustments.$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "The POKéMON WIRELESS CLUB on\n"
	.string "the second floor was built recently.\p"
	.string "I traded POKéMON right away.$"

	
Illgiveyouallmon_text:
	.string "here's all digimon.$"
	
GifterofallMons::
	msgbox Illgiveyouallmon_text, MSGBOX_DEFAULT
givemon SPECIES_BOTAMON, 10, NATURE_HARDY
givemon SPECIES_BUBBMON, 10, NATURE_HARDY
givemon SPECIES_CHOROMON, 10, NATURE_HARDY
givemon SPECIES_MOKUMON, 10, NATURE_HARDY
givemon SPECIES_NYOKIMON, 10, NATURE_HARDY
givemon SPECIES_PITCHMON, 10, NATURE_HARDY
givemon SPECIES_POYOMON, 10, NATURE_HARDY
givemon SPECIES_PUNIMON, 10, NATURE_HARDY
givemon SPECIES_YUKIMIBOTAMON, 10, NATURE_HARDY
givemon SPECIES_YURAMON, 10, NATURE_HARDY
givemon SPECIES_ZURUMON, 10, NATURE_HARDY
givemon SPECIES_CAPRIMON, 10, NATURE_HARDY
givemon SPECIES_KODOKUGUMON, 10, NATURE_HARDY
givemon SPECIES_KOROMON, 10, NATURE_HARDY
givemon SPECIES_MOCHIMON, 10, NATURE_HARDY
givemon SPECIES_NYAROMON, 10, NATURE_HARDY
givemon SPECIES_PAGUMON, 10, NATURE_HARDY
givemon SPECIES_PETITMERAMON, 10, NATURE_HARDY
givemon SPECIES_PUKAMON, 10, NATURE_HARDY
givemon SPECIES_PYOKOMON, 10, NATURE_HARDY
givemon SPECIES_TANEMON, 10, NATURE_HARDY
givemon SPECIES_TOKOMON, 10, NATURE_HARDY
givemon SPECIES_TSUNOMON, 10, NATURE_HARDY
givemon SPECIES_AGUMON, 10, NATURE_HARDY
givemon SPECIES_YUKIAGUMON, 10, NATURE_HARDY
givemon SPECIES_BAKUMON, 10, NATURE_HARDY
givemon SPECIES_BETAMON, 10, NATURE_HARDY
givemon SPECIES_MODOKIBETAMON, 10, NATURE_HARDY
givemon SPECIES_CANDMON, 10, NATURE_HARDY
givemon SPECIES_CHUUMON, 10, NATURE_HARDY
givemon SPECIES_ELECMON, 10, NATURE_HARDY
givemon SPECIES_FLORAMON, 10, NATURE_HARDY
givemon SPECIES_GABUMON, 10, NATURE_HARDY
givemon SPECIES_PSYCHEMON, 10, NATURE_HARDY
givemon SPECIES_GANIMON, 10, NATURE_HARDY
givemon SPECIES_GAZIMON, 10, NATURE_HARDY
givemon SPECIES_GIZAMON, 10, NATURE_HARDY
givemon SPECIES_GOBLIMON, 10, NATURE_HARDY
givemon SPECIES_SHAMAMON, 10, NATURE_HARDY
givemon SPECIES_SNOWGOBLIMON, 10, NATURE_HARDY
givemon SPECIES_GOMAMON, 10, NATURE_HARDY
givemon SPECIES_GOTSUMON, 10, NATURE_HARDY
givemon SPECIES_HAGURUMON, 10, NATURE_HARDY
givemon SPECIES_KOKUWAMON, 10, NATURE_HARDY
givemon SPECIES_KUNEMON, 10, NATURE_HARDY
givemon SPECIES_DOKUNEMON, 10, NATURE_HARDY
givemon SPECIES_MUSHMON, 10, NATURE_HARDY
givemon SPECIES_OTAMAMON, 10, NATURE_HARDY
givemon SPECIES_PALMON, 10, NATURE_HARDY
givemon SPECIES_ALRAUMON, 10, NATURE_HARDY
givemon SPECIES_PATAMON, 10, NATURE_HARDY
givemon SPECIES_TSUKAIMON, 10, NATURE_HARDY
givemon SPECIES_PENMON, 10, NATURE_HARDY
givemon SPECIES_MUCHOMON, 10, NATURE_HARDY
givemon SPECIES_PICODEVIMON, 10, NATURE_HARDY
givemon SPECIES_PIYOMON, 10, NATURE_HARDY
givemon SPECIES_PLOTMON, 10, NATURE_HARDY
givemon SPECIES_SHAKOMON, 10, NATURE_HARDY
givemon SPECIES_TENTOMON, 10, NATURE_HARDY
givemon SPECIES_TOYAGUMON, 10, NATURE_HARDY
givemon SPECIES_CLEARAGUMON, 10, NATURE_HARDY
givemon SPECIES_BUN, 10, NATURE_HARDY
givemon SPECIES_AIRDRAMON, 10, NATURE_HARDY
givemon SPECIES_ANGEMON, 10, NATURE_HARDY
givemon SPECIES_PIDMON, 10, NATURE_HARDY
givemon SPECIES_BAKEMON, 10, NATURE_HARDY
givemon SPECIES_SOULMON, 10, NATURE_HARDY
givemon SPECIES_BIRDRAMON, 10, NATURE_HARDY
givemon SPECIES_SABERDRAMON, 10, NATURE_HARDY
givemon SPECIES_CENTARUMON, 10, NATURE_HARDY
givemon SPECIES_CLOCKMON, 10, NATURE_HARDY
givemon SPECIES_COELAMON, 10, NATURE_HARDY
givemon SPECIES_CYCLOMON, 10, NATURE_HARDY
givemon SPECIES_DARKTYRANNOMON, 10, NATURE_HARDY
givemon SPECIES_DELTAMON, 10, NATURE_HARDY
givemon SPECIES_DEVIDRAMON, 10, NATURE_HARDY
givemon SPECIES_DEVIMON, 10, NATURE_HARDY
givemon SPECIES_ICEDEVIMON, 10, NATURE_HARDY
givemon SPECIES_DOKUGUMON, 10, NATURE_HARDY
givemon SPECIES_DRIMOGEMON, 10, NATURE_HARDY
givemon SPECIES_NISEDRIMOGEMON, 10, NATURE_HARDY
givemon SPECIES_EBIDRAMON, 10, NATURE_HARDY
givemon SPECIES_EVILMON, 10, NATURE_HARDY
givemon SPECIES_FLARELIZARMON, 10, NATURE_HARDY
givemon SPECIES_DARKLIZARMON, 10, NATURE_HARDY
givemon SPECIES_FLYMON, 10, NATURE_HARDY
givemon SPECIES_GARURUMON, 10, NATURE_HARDY
givemon SPECIES_GURURUMON, 10, NATURE_HARDY
givemon SPECIES_GEKOMON, 10, NATURE_HARDY
givemon SPECIES_GESOMON, 10, NATURE_HARDY
givemon SPECIES_GOKIMON, 10, NATURE_HARDY
givemon SPECIES_GOLEMON, 10, NATURE_HARDY
givemon SPECIES_GORIMON, 10, NATURE_HARDY
givemon SPECIES_GREYMON, 10, NATURE_HARDY
givemon SPECIES_GUARDROMON, 10, NATURE_HARDY
givemon SPECIES_HANUMON, 10, NATURE_HARDY
givemon SPECIES_ICEMON, 10, NATURE_HARDY
givemon SPECIES_IGAMON, 10, NATURE_HARDY
givemon SPECIES_IKKAKUMON, 10, NATURE_HARDY
givemon SPECIES_KABUTERIMON, 10, NATURE_HARDY
givemon SPECIES_KARATUKINUMEMON, 10, NATURE_HARDY
givemon SPECIES_KIWIMON, 10, NATURE_HARDY
givemon SPECIES_KOKATORIMON, 10, NATURE_HARDY
givemon SPECIES_AKATORIMON, 10, NATURE_HARDY
givemon SPECIES_KUWAGAMON, 10, NATURE_HARDY
givemon SPECIES_LEOMON, 10, NATURE_HARDY
givemon SPECIES_MECHANORIMON, 10, NATURE_HARDY
givemon SPECIES_MERAMON, 10, NATURE_HARDY
givemon SPECIES_MINOTAURMON, 10, NATURE_HARDY
givemon SPECIES_MOJYAMON, 10, NATURE_HARDY
givemon SPECIES_JUNGLEMOJYAMON, 10, NATURE_HARDY
givemon SPECIES_MONOCHROMON, 10, NATURE_HARDY
givemon SPECIES_MUSYAMON, 10, NATURE_HARDY
givemon SPECIES_NANIMON, 10, NATURE_HARDY
givemon SPECIES_NUMEMON, 10, NATURE_HARDY
givemon SPECIES_GEREMON, 10, NATURE_HARDY
givemon SPECIES_OCTOMON, 10, NATURE_HARDY
givemon SPECIES_OGREMON, 10, NATURE_HARDY
givemon SPECIES_FUGAMON, 10, NATURE_HARDY
givemon SPECIES_HYOGAMON, 10, NATURE_HARDY
givemon SPECIES_RAREMON, 10, NATURE_HARDY
givemon SPECIES_REVOLMON, 10, NATURE_HARDY
givemon SPECIES_RUKAMON, 10, NATURE_HARDY
givemon SPECIES_SEADRAMON, 10, NATURE_HARDY
givemon SPECIES_SHELLMON, 10, NATURE_HARDY
givemon SPECIES_MORISHELLMON, 10, NATURE_HARDY
givemon SPECIES_SNIMON, 10, NATURE_HARDY
givemon SPECIES_STARMON, 10, NATURE_HARDY
givemon SPECIES_SUKAMON, 10, NATURE_HARDY
givemon SPECIES_PLATINUMSUKAMON, 10, NATURE_HARDY
givemon SPECIES_TAILMON, 10, NATURE_HARDY
givemon SPECIES_TANKMON, 10, NATURE_HARDY
givemon SPECIES_THUNDERBALLMON, 10, NATURE_HARDY
givemon SPECIES_TOGEMON, 10, NATURE_HARDY
givemon SPECIES_TORTOMON, 10, NATURE_HARDY
givemon SPECIES_TUSKMON, 10, NATURE_HARDY
givemon SPECIES_TYRANNOMON, 10, NATURE_HARDY
givemon SPECIES_UNIMON, 10, NATURE_HARDY
givemon SPECIES_SHIMAUNIMON, 10, NATURE_HARDY
givemon SPECIES_VEEDRAMON, 10, NATURE_HARDY
givemon SPECIES_VEGIMON, 10, NATURE_HARDY
givemon SPECIES_ZASSOUMON, 10, NATURE_HARDY
givemon SPECIES_REDVEGIMON, 10, NATURE_HARDY
givemon SPECIES_WHAMON_ADULT, 10, NATURE_HARDY
givemon SPECIES_WIZARMON, 10, NATURE_HARDY
givemon SPECIES_WOODMON, 10, NATURE_HARDY
givemon SPECIES_YANMAMON, 10, NATURE_HARDY
givemon SPECIES_SANDYANMAMON, 10, NATURE_HARDY
givemon SPECIES_YUKIDARUMON, 10, NATURE_HARDY
givemon SPECIES_TSUCHIDARUMON, 10, NATURE_HARDY
givemon SPECIES_AEROVEEDRAMON, 10, NATURE_HARDY
givemon SPECIES_ANDROMON, 10, NATURE_HARDY
givemon SPECIES_ANGEWOMON, 10, NATURE_HARDY
givemon SPECIES_ANOMALOCARIMON, 10, NATURE_HARDY
givemon SPECIES_ASURAMON, 10, NATURE_HARDY
givemon SPECIES_ATLURKABUTERIMONR, 10, NATURE_HARDY
givemon SPECIES_ATLURKABUTERIMONB, 10, NATURE_HARDY
givemon SPECIES_BIGMAMEMON, 10, NATURE_HARDY
givemon SPECIES_BLOSSOMON, 10, NATURE_HARDY
givemon SPECIES_BLUEMERAMON, 10, NATURE_HARDY
givemon SPECIES_BRACHIMON, 10, NATURE_HARDY
givemon SPECIES_CHIMAIRAMON, 10, NATURE_HARDY
givemon SPECIES_CYBERDRAMON, 10, NATURE_HARDY
givemon SPECIES_DAGOMON, 10, NATURE_HARDY
givemon SPECIES_DEATHMERAMON, 10, NATURE_HARDY
givemon SPECIES_DELUMON, 10, NATURE_HARDY
givemon SPECIES_DIGITAMAMON, 10, NATURE_HARDY
givemon SPECIES_ETEMON, 10, NATURE_HARDY
givemon SPECIES_EXTYRANNOMON, 10, NATURE_HARDY
givemon SPECIES_GARUDAMON, 10, NATURE_HARDY
givemon SPECIES_GERBEMON, 10, NATURE_HARDY
givemon SPECIES_GIGADRAMON, 10, NATURE_HARDY
givemon SPECIES_GIROMON, 10, NATURE_HARDY
givemon SPECIES_TEKKAMON, 10, NATURE_HARDY
givemon SPECIES_HANGYOMON, 10, NATURE_HARDY
givemon SPECIES_HOLYANGEMON, 10, NATURE_HARDY
givemon SPECIES_INSEKIMON, 10, NATURE_HARDY
givemon SPECIES_JYAGAMON, 10, NATURE_HARDY
givemon SPECIES_JYUREIMON, 10, NATURE_HARDY
givemon SPECIES_KNIGHTMON, 10, NATURE_HARDY
givemon SPECIES_LADYDEVIMON, 10, NATURE_HARDY
givemon SPECIES_LILIMON, 10, NATURE_HARDY
givemon SPECIES_MAMEMON, 10, NATURE_HARDY
givemon SPECIES_MAMMON, 10, NATURE_HARDY
givemon SPECIES_MARINEDEVIMON, 10, NATURE_HARDY
givemon SPECIES_MASTERTYRANNOMON, 10, NATURE_HARDY
givemon SPECIES_MEGADRAMON, 10, NATURE_HARDY
givemon SPECIES_MEGASEADRAMON, 10, NATURE_HARDY
givemon SPECIES_WARUSEADRAMON, 10, NATURE_HARDY
givemon SPECIES_METALGREYMON, 10, NATURE_HARDY
givemon SPECIES_METALGREYMONV, 10, NATURE_HARDY
givemon SPECIES_METALMAMEMON, 10, NATURE_HARDY
givemon SPECIES_METALTYRANNOMON, 10, NATURE_HARDY
givemon SPECIES_MONZAEMON, 10, NATURE_HARDY
givemon SPECIES_MUMMYMON, 10, NATURE_HARDY
givemon SPECIES_NANOMON, 10, NATURE_HARDY
givemon SPECIES_OKUWAMON, 10, NATURE_HARDY
givemon SPECIES_OROCHIMON, 10, NATURE_HARDY
givemon SPECIES_PANJYAMON, 10, NATURE_HARDY
givemon SPECIES_PARROTMON, 10, NATURE_HARDY
givemon SPECIES_PHANTOMON, 10, NATURE_HARDY
givemon SPECIES_PICCOLOMON, 10, NATURE_HARDY
givemon SPECIES_PUMPMON, 10, NATURE_HARDY
givemon SPECIES_SKULLGREYMON, 10, NATURE_HARDY
givemon SPECIES_SKULLSATAMON, 10, NATURE_HARDY
givemon SPECIES_TONOSAMAGEKOMON, 10, NATURE_HARDY
givemon SPECIES_TRICERAMON, 10, NATURE_HARDY
givemon SPECIES_VADERMON, 10, NATURE_HARDY
givemon SPECIES_VAMDEMON, 10, NATURE_HARDY
givemon SPECIES_VERMILIMON, 10, NATURE_HARDY
givemon SPECIES_WARUMONZAEMON, 10, NATURE_HARDY
givemon SPECIES_WEREGARURUMON, 10, NATURE_HARDY
givemon SPECIES_WHAMON_PERFECT, 10, NATURE_HARDY
givemon SPECIES_ZUDOMON, 10, NATURE_HARDY
givemon SPECIES_APOCALYMON, 10, NATURE_HARDY
givemon SPECIES_BABAMON, 10, NATURE_HARDY
givemon SPECIES_BOLTMON, 10, NATURE_HARDY
givemon SPECIES_DEMON, 10, NATURE_HARDY
givemon SPECIES_DEVITAMAMON, 10, NATURE_HARDY
givemon SPECIES_DIABLOMON, 10, NATURE_HARDY
givemon SPECIES_GODDRAMON, 10, NATURE_HARDY
givemon SPECIES_GRIFFOMON, 10, NATURE_HARDY
givemon SPECIES_HERAKLEKABUTERIMON, 10, NATURE_HARDY
givemon SPECIES_HOLYDRAMON, 10, NATURE_HARDY
givemon SPECIES_HOUOUMON, 10, NATURE_HARDY
givemon SPECIES_JIJIMON, 10, NATURE_HARDY
givemon SPECIES_KINGETEMON, 10, NATURE_HARDY
givemon SPECIES_MARINEANGEMON, 10, NATURE_HARDY
givemon SPECIES_METALETEMON, 10, NATURE_HARDY
givemon SPECIES_METALGARURUMON, 10, NATURE_HARDY
givemon SPECIES_METALSEADRAMON, 10, NATURE_HARDY
givemon SPECIES_MILLENNIUMMON, 10, NATURE_HARDY
givemon SPECIES_MUGENDRAMON, 10, NATURE_HARDY
givemon SPECIES_OMEGAMON, 10, NATURE_HARDY
givemon SPECIES_PIEMON, 10, NATURE_HARDY
givemon SPECIES_PINOCCHIMON, 10, NATURE_HARDY
givemon SPECIES_PLESIOMON, 10, NATURE_HARDY
givemon SPECIES_PUKUMON, 10, NATURE_HARDY
givemon SPECIES_ROSEMON, 10, NATURE_HARDY
givemon SPECIES_SABERLEOMON, 10, NATURE_HARDY
givemon SPECIES_SKULLMAMMON, 10, NATURE_HARDY
givemon SPECIES_VENOMVAMDEMON, 10, NATURE_HARDY
givemon SPECIES_WARGREYMON, 10, NATURE_HARDY
givemon SPECIES_ZANBAMON, 10, NATURE_HARDY
releaseall
end	

//-----------------------------------------------------------------------------------------------------------
//-----start of event. Jijimon arrives and asks if you want to do a quiz or get a random starter. 
StarterDigimonEgg_Start_Event::
	msgbox StarterDigimonEggGift_Text_Intro_Start, MSGBOX_DEFAULT
	msgbox StarterDigimonEggGift_Text_Intro_Quiz_or_Random, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_QUIZ_OR_RAND, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonQuizStart
	case 1, StarterDigimonRandom

//-----if the player picks random. 
StarterDigimonRandom::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Random, MSGBOX_DEFAULT
	random 12
	switch VAR_RESULT
	case 0, [StarterDigimonPick_Dragons_Roar_Botamon]
	case 1, [StarterDigimonPick_Animal_Colosseum_Punimon]
	case 2, [StarterDigimonPick_Jungle_Troopers_Bubbmon]
	case 3, [StarterDigimonPick_Deep_Savers_Pitchmon]
	case 4, [StarterDigimonPick_Wind_Guardians_Nyokimon]
	case 5, [StarterDigimonPick_Nature_Spirits_Yuramon]
	case 6, [StarterDigimonPick_Blizzard_Fang_Yukimibotamon]
	case 7, [StarterDigimonPick_Metal_Empire_Choromon]
	case 8, [StarterDigimonPick_Impulse_City_UNUSED]
	case 9, [StarterDigimonPick_Virus_Busters_Poyomon]
	case 10, [StarterDigimonPick_Nightmare_Soldiers_Mokumon]
	case 11, [StarterDigimonPick_Dynasty_of_Evil_Zurumon]

//-----if the player picks to do the quiz----------------------------------------------------------------
StarterDigimonQuizStart::
	msgbox StarterDigimonEggGift_Text_Intro_Quiz_Start, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_QUIZ_START, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonQuiz_Light_and_Darkness_Branch
	case 1, StarterDigimonQuiz_Elemental_Branch

//-----the light v darkness branch of the quiz--------------------------------------------------------
StarterDigimonQuiz_Light_and_Darkness_Branch::
	msgbox StarterDigimonEggGift_Text_Intro_Virus_Busers_V_Nightmare_Soldiers, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_VB_OR_NS, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonPick_Virus_Busters_Poyomon
	case 1, StarterDigimonBranch_NS_OR_DOE
	case 2, StarterDigimon_Changed_My_mind

StarterDigimonBranch_NS_OR_DOE::
	msgbox StarterDigimonEggGift_Text_Intro_GoodVEvil_Nightmare_V_Dynasty, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_NS_OR_DOE, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonPick_Dynasty_of_Evil_Zurumon
	case 1, StarterDigimonPick_Nightmare_Soldiers_Mokumon
	case 2, StarterDigimon_Changed_My_mind

//-----The elemental branch of the quiz--------------------------------------------------------
StarterDigimonQuiz_Elemental_Branch::
	msgbox StarterDigimonEggGift_Text_Intro_Elemental_Tree_Start, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_ELEMENTAL_START, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonBranch_DR_OR_AC
	case 1, StarterDigimonBranch_I_P_W
	case 2, StarterDigimonBranch_DS_OR_BF
	case 3, StarterDigimonBranch_ME_OR_IC
	case 4, StarterDigimon_Changed_My_mind

StarterDigimonBranch_DR_OR_AC::
	msgbox StarterDigimonEggGift_Text_Intro_Elemental_Tree_Dragon_V_Animal, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_ELEMENTAL_DR_OR_AC, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonPick_Dragons_Roar_Botamon
	case 1, StarterDigimonPick_Animal_Colosseum_Punimon
	case 2, StarterDigimon_Changed_My_mind

StarterDigimonBranch_I_P_W::
	msgbox StarterDigimonEggGift_Text_Intro_Elemental_Tree_Insect_Plant_Wind, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_ELEMENTAL_I_P_W, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonPick_Nature_Spirits_Yuramon
	case 1, StarterDigimonPick_Jungle_Troopers_Bubbmon
	case 2, StarterDigimonPick_Wind_Guardians_Nyokimon
	case 3, StarterDigimon_Changed_My_mind

StarterDigimonBranch_DS_OR_BF::
	msgbox StarterDigimonEggGift_Text_Intro_Elemental_Tree_Water_ice, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_ELEMENTAL_DS_OR_BF, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonPick_Deep_Savers_Pitchmon
	case 1, StarterDigimonPick_Blizzard_Fang_Yukimibotamon
	case 2, StarterDigimon_Changed_My_mind

StarterDigimonBranch_ME_OR_IC::
	msgbox StarterDigimonEggGift_Text_Intro_Elemental_Tree_metal_electric, MSGBOX_DEFAULT
	multichoice 0, 0, MULTI_DIGIMONEGGCHOICE_ELEMENTAL_ME_OR_IC, TRUE
	switch VAR_RESULT
	case 0, StarterDigimonPick_Impulse_City_UNUSED
	case 1, StarterDigimonPick_Metal_Empire_Choromon
	case 2, StarterDigimon_Changed_My_mind

//----------------Generic Responses to quiz ------------------------------------------

StarterDigimon_Changed_My_mind::
	msgbox StarterDigimonEggGift_Text_Intro_Changed_My_mind, MSGBOX_DEFAULT
	goto StarterDigimonQuizStart
//-----------------------------------------------------quiz results - gifting each mon --------------------------


StarterDigimonPick_Virus_Busters_Poyomon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Virus_Busters_Poyomon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_POYOMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_POYOMON
	giveegg SPECIES_POYOMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Dynasty_of_Evil_Zurumon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Dynasty_Evil_Zurumon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_ZURUMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ZURUMON
	giveegg SPECIES_ZURUMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end

StarterDigimonPick_Nightmare_Soldiers_Mokumon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Nightmare_Soldiers_Mokumon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_MOKUMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MOKUMON
	giveegg SPECIES_MOKUMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end

StarterDigimonPick_Dragons_Roar_Botamon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Dragons_Roar_Botamon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_BOTAMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BOTAMON
	giveegg SPECIES_BOTAMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Animal_Colosseum_Punimon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Animal_Colosseum_Punimon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_PUNIMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PUNIMON
	giveegg SPECIES_PUNIMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Nature_Spirits_Yuramon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Nature_Spirits_Yuramon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_YURAMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_YURAMON
	giveegg SPECIES_YURAMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Jungle_Troopers_Bubbmon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Jungle_Troopers_Bubbmon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_BUBBMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BUBBMON
	giveegg SPECIES_BUBBMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Wind_Guardians_Nyokimon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Wind_Guardians_Nyokimon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_NYOKIMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_NYOKIMON
	giveegg SPECIES_NYOKIMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Deep_Savers_Pitchmon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Deep_Savers_Pitchmon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_PITCHMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PITCHMON
	giveegg SPECIES_PITCHMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Blizzard_Fang_Yukimibotamon::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_Blizzard_Fang_Yukimibotamon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_YUKIMIBOTAMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_YUKIMIBOTAMON
	giveegg SPECIES_YUKIMIBOTAMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Impulse_City_UNUSED::
	msgbox StarterDigimonEggGift_Text_Intro_Picked_impulse_city_UNUSED, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_CHOROMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHOROMON
	giveegg SPECIES_CHOROMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	
StarterDigimonPick_Metal_Empire_Choromon::
	msgbox StarterDigimonEggGift_Text_Intro_Elemental_Tree_metal_electric, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, StarterDigimon_Changed_My_mind
	bufferspeciesname STR_VAR_1, SPECIES_CHOROMON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHOROMON
	giveegg SPECIES_CHOROMON
	msgbox StarterDigimonEggGift_Text_Heresyouregg
	releaseall
	end
	


//----------------text------------------------------------------------------------------------------------------
StarterDigimonEggGift_Text_Intro_Start:	
	.string "I'm Jijimon. I'm in charge of allocating\n"
	.string "DIGIMON partners to new players.\p"
	.string "I'd like to ask you some questions, so I\n"
	.string "can make the best choice.\p"
	.string "Or I could allocate you a partner\n"
	.string "at random.$"

StarterDigimonEggGift_Text_Intro_Quiz_or_Random:
	.string "Which would you prefer?$"

StarterDigimonEggGift_Text_Intro_Quiz_Start:	
	.string "How engaged are you in the battle\n"
	.string "between good and evil?$"

StarterDigimonEggGift_Text_Intro_Virus_Busers_V_Nightmare_Soldiers:	
	.string "And on which side do you align yourself?$"

StarterDigimonEggGift_Text_Intro_Picked_Virus_Busters_Poyomon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "VIRUS BUSTERS group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_GoodVEvil_Nightmare_V_Dynasty:	
	.string "I see.\p"
	.string "In that case, by what axis would you\n"
	.string "place yourself?$"

StarterDigimonEggGift_Text_Intro_Picked_Dynasty_Evil_Zurumon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "DYNASTY OF EVIL group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_Nightmare_Soldiers_Mokumon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "NIGHTMARE SOLDIERS group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Elemental_Tree_Start:
	.string "In that case, where would you choose to\n"
	.string "live your life, if you could?$"

StarterDigimonEggGift_Text_Intro_Elemental_Tree_Dragon_V_Animal:
	.string "You seem like someone ready to defend\n"
	.string "themselves, if they must.\p"	
	.string "If you had to, which would suit you\n"
	.string "better?$"

StarterDigimonEggGift_Text_Intro_Picked_Dragons_Roar_Botamon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "DRAGON'S ROAR group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_Animal_Colosseum_Punimon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "ANIMAL COLOSSEUM group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Elemental_Tree_Insect_Plant_Wind:	
	.string "You seem to enjoy spending time with\n"
	.string "nature.\p"	
	.string "If you had plenty of time, which would\n"
	.string "you most enjoy?$"

StarterDigimonEggGift_Text_Intro_Picked_Nature_Spirits_Yuramon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "NATURE SPIRITS group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_Jungle_Troopers_Bubbmon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "JUNGLE TROOPERS group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_Wind_Guardians_Nyokimon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "WIND GUARDIANS group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Elemental_Tree_Water_ice:	
	.string "You seem like someone who'd enjoy a\n"
	.string "cosy room and a good book.\p"	
	.string "What would be your preferred soundtrack\n"
	.string "for a restful afternoon?$"

StarterDigimonEggGift_Text_Intro_Picked_Deep_Savers_Pitchmon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "DEEP SAVERS group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_Blizzard_Fang_Yukimibotamon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "BLIZZARD FANG group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Elemental_Tree_metal_electric:	
	.string "You seem like someone who enjoys living\n"
	.string "in a diverse community.\p"	
	.string "But what kind of community would you\n"
	.string "envision for yourself?$"

StarterDigimonEggGift_Text_Intro_Picked_impulse_city_UNUSED:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "IMPULSE CITY group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_metal_empire_choromon:
	.string "I see.\p"
	.string "I think you would belong best among the\n"
	.string "METAL EMPIRE group.\p"
	.string "Do you agree?$"

StarterDigimonEggGift_Text_Intro_Picked_Random:
	.string "Hmm...\p"
	.string "You seem like the sort of person who\n"
	.string "understands they don't have control\l"
	.string "over the cards they are dealt.\p"
	.string "The sort of person who will go after what\n"
	.string "they want, and carve their own path.$"

StarterDigimonEggGift_Text_Intro_Changed_My_mind:
	.string "Take your time. This is important, but\n"
	.string "you wont be locked into anything either.$"

StarterDigimonEggGift_Text_Heresyouregg:
	.string "Okay, here you are:\n"
	.string "Your Digimon partner.\p"
	.string "They'll hatch when they're ready.\p"
	.string "How they'll grow is up for you to\n"
	.string "determine.\p"
	.string "Welcome to the DIGITAL WORLD.$"