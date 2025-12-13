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
givemon SPECIES_BOTAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BUBBMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CHOROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MOKUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_NYOKIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PITCHMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_POYOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PUNIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_YUKIMIBOTAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_YURAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ZURUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CAPRIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KODOKUGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KOROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MOCHIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_NYAROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PAGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PETITMERAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PUKAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PYOKOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TANEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TOKOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TSUNOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_AGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_YUKIAGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BAKUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BETAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MODOKIBETAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CANDMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CHUUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ELECMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_FLORAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GABUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PSYCHEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GANIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GAZIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GIZAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GOBLIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SHAMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SNOWGOBLIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GOMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GOTSUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HAGURUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KOKUWAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KUNEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DOKUNEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MUSHMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_OTAMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PALMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ALRAUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PATAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TSUKAIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PENMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MUCHOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PICODEVIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PIYOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PLOTMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SHAKOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TENTOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TOYAGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CLEARAGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BUN, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_AIRDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ANGEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PIDMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BAKEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SOULMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BIRDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SABERDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CENTARUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CLOCKMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_COELAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CYCLOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DARKTYRANNOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DELTAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DEVIDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DEVIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ICEDEVIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DOKUGUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DRIMOGEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_NISEDRIMOGEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_EBIDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_EVILMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_FLARELIZARMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DARKLIZARMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_FLYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GARURUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GURURUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GEKOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GESOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GOKIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GOLEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GORIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GREYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GUARDROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HANUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ICEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_IGAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_IKKAKUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KABUTERIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KARATUKINUMEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KIWIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KOKATORIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_AKATORIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KUWAGAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_LEOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MECHANORIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MERAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MINOTAURMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MOJYAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_JUNGLEMOJYAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MONOCHROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MUSYAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_NANIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_NUMEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GEREMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_OCTOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_OGREMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_FUGAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HYOGAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_RAREMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_REVOLMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_RUKAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SEADRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SHELLMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MORISHELLMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SNIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_STARMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SUKAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PLATINUMSUKAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TAILMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TANKMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_THUNDERBALLMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TOGEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TORTOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TUSKMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TYRANNOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_UNIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SHIMAUNIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_VEEDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_VEGIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ZASSOUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_REDVEGIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WHAMON_ADULT, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WIZARMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WOODMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_YANMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SANDYANMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_YUKIDARUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TSUCHIDARUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_AEROVEEDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ANDROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ANGEWOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ANOMALOCARIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ASURAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ATLURKABUTERIMONR, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ATLURKABUTERIMONB, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BIGMAMEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BLOSSOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BLUEMERAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BRACHIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CHIMAIRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_CYBERDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DAGOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DEATHMERAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DELUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DIGITAMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ETEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_EXTYRANNOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GARUDAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GERBEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GIGADRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GIROMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TEKKAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HANGYOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HOLYANGEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_INSEKIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_JYAGAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_JYUREIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KNIGHTMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_LADYDEVIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_LILIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MAMEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MAMMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MARINEDEVIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MASTERTYRANNOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MEGADRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MEGASEADRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WARUSEADRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALGREYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALGREYMONV, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALMAMEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALTYRANNOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MONZAEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MUMMYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_NANOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_OKUWAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_OROCHIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PANJYAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PARROTMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PHANTOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PICCOLOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PUMPMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SKULLGREYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SKULLSATAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TONOSAMAGEKOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_TRICERAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_VADERMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_VAMDEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_VERMILIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WARUMONZAEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WEREGARURUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WHAMON_PERFECT, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ZUDOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_APOCALYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BABAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_BOLTMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DEVITAMAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_DIABLOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GODDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_GRIFFOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HERAKLEKABUTERIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HOLYDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_HOUOUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_JIJIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_KINGETEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MARINEANGEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALETEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALGARURUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_METALSEADRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MILLENNIUMMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_MUGENDRAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_OMEGAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PIEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PINOCCHIMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PLESIOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_PUKUMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ROSEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SABERLEOMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_SKULLMAMMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_VENOMVAMDEMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_WARGREYMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
givemon SPECIES_ZANBAMON, 10, 0, 1, NATURE_HARDY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
releaseall
end	