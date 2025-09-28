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
givemon SPECIES_BOTAMON, 1
givemon SPECIES_BUBBMON, 1
givemon SPECIES_CHOROMON, 1
givemon SPECIES_MOKUMON, 1
givemon SPECIES_NYOKIMON, 1
givemon SPECIES_PITCHMON, 1
givemon SPECIES_POYOMON, 1
givemon SPECIES_PUNIMON, 1
givemon SPECIES_YUKIMIBOTAMON, 1
givemon SPECIES_YURAMON, 1
givemon SPECIES_ZURUMON, 1
givemon SPECIES_CAPRIMON, 1
givemon SPECIES_KODOKUGUMON, 1
givemon SPECIES_KOROMON, 1
givemon SPECIES_MOCHIMON, 1
givemon SPECIES_NYAROMON, 1
givemon SPECIES_PAGUMON, 1
givemon SPECIES_PETITMERAMON, 1
givemon SPECIES_PUKAMON, 1
givemon SPECIES_PYOKOMON, 1
givemon SPECIES_TANEMON, 1
givemon SPECIES_TOKOMON, 1
givemon SPECIES_TSUNOMON, 1
givemon SPECIES_AGUMON, 1
givemon SPECIES_YUKIAGUMON, 1
givemon SPECIES_BAKUMON, 1
givemon SPECIES_BETAMON, 1
givemon SPECIES_MODOKIBETAMON, 1
givemon SPECIES_CANDMON, 1
givemon SPECIES_CHUUMON, 1
givemon SPECIES_ELECMON, 1
givemon SPECIES_FLORAMON, 1
givemon SPECIES_GABUMON, 1
givemon SPECIES_PSYCHEMON, 1
givemon SPECIES_GANIMON, 1
givemon SPECIES_GAZIMON, 1
givemon SPECIES_GIZAMON, 1
givemon SPECIES_GOBLIMON, 1
givemon SPECIES_SHAMAMON, 1
givemon SPECIES_SNOWGOBLIMON, 1
givemon SPECIES_GOMAMON, 1
givemon SPECIES_GOTSUMON, 1
givemon SPECIES_HAGURUMON, 1
givemon SPECIES_KOKUWAMON, 1
givemon SPECIES_KUNEMON, 1
givemon SPECIES_DOKUNEMON, 1
givemon SPECIES_MUSHMON, 1
givemon SPECIES_OTAMAMON, 1
givemon SPECIES_PALMON, 1
givemon SPECIES_ALRAUMON, 1
givemon SPECIES_PATAMON, 1
givemon SPECIES_TSUKAIMON, 1
givemon SPECIES_PENMON, 1
givemon SPECIES_MUCHOMON, 1
givemon SPECIES_PICODEVIMON, 1
givemon SPECIES_PIYOMON, 1
givemon SPECIES_PLOTMON, 1
givemon SPECIES_SHAKOMON, 1
givemon SPECIES_TENTOMON, 1
givemon SPECIES_TOYAGUMON, 1
givemon SPECIES_CLEARAGUMON, 1
givemon SPECIES_BUN, 1
givemon SPECIES_AIRDRAMON, 1
givemon SPECIES_ANGEMON, 1
givemon SPECIES_PIDMON, 1
givemon SPECIES_BAKEMON, 1
givemon SPECIES_SOULMON, 1
givemon SPECIES_BIRDRAMON, 1
givemon SPECIES_SABERDRAMON, 1
givemon SPECIES_CENTARUMON, 1
givemon SPECIES_CLOCKMON, 1
givemon SPECIES_COELAMON, 1
givemon SPECIES_CYCLOMON, 1
givemon SPECIES_DARKTYRANNOMON, 1
givemon SPECIES_DELTAMON, 1
givemon SPECIES_DEVIDRAMON, 1
givemon SPECIES_DEVIMON, 1
givemon SPECIES_ICEDEVIMON, 1
givemon SPECIES_DOKUGUMON, 1
givemon SPECIES_DRIMOGEMON, 1
givemon SPECIES_NISEDRIMOGEMON, 1
givemon SPECIES_EBIDRAMON, 1
givemon SPECIES_EVILMON, 1
givemon SPECIES_FLARELIZARMON, 1
givemon SPECIES_DARKLIZARMON, 1
givemon SPECIES_FLYMON, 1
givemon SPECIES_GARURUMON, 1
givemon SPECIES_GURURUMON, 1
givemon SPECIES_GEKOMON, 1
givemon SPECIES_GESOMON, 1
givemon SPECIES_GOKIMON, 1
givemon SPECIES_GOLEMON, 1
givemon SPECIES_GORIMON, 1
givemon SPECIES_GREYMON, 1
givemon SPECIES_GUARDROMON, 1
givemon SPECIES_HANUMON, 1
givemon SPECIES_ICEMON, 1
givemon SPECIES_IGAMON, 1
givemon SPECIES_IKKAKUMON, 1
givemon SPECIES_KABUTERIMON, 1
givemon SPECIES_KARATUKINUMEMON, 1
givemon SPECIES_KIWIMON, 1
givemon SPECIES_KOKATORIMON, 1
givemon SPECIES_AKATORIMON, 1
givemon SPECIES_KUWAGAMON, 1
givemon SPECIES_LEOMON, 1
givemon SPECIES_MECHANORIMON, 1
givemon SPECIES_MERAMON, 1
givemon SPECIES_MINOTAURMON, 1
givemon SPECIES_MOJYAMON, 1
givemon SPECIES_JUNGLEMOJYAMON, 1
givemon SPECIES_MONOCHROMON, 1
givemon SPECIES_MUSYAMON, 1
givemon SPECIES_NANIMON, 1
givemon SPECIES_NUMEMON, 1
givemon SPECIES_GEREMON, 1
givemon SPECIES_OCTOMON, 1
givemon SPECIES_OGREMON, 1
givemon SPECIES_FUGAMON, 1
givemon SPECIES_HYOGAMON, 1
givemon SPECIES_RAREMON, 1
givemon SPECIES_REVOLMON, 1
givemon SPECIES_RUKAMON, 1
givemon SPECIES_SEADRAMON, 1
givemon SPECIES_SHELLMON, 1
givemon SPECIES_MORISHELLMON, 1
givemon SPECIES_SNIMON, 1
givemon SPECIES_STARMON, 1
givemon SPECIES_SUKAMON, 1
givemon SPECIES_PLATINUMSUKAMON, 1
givemon SPECIES_TAILMON, 1
givemon SPECIES_TANKMON, 1
givemon SPECIES_THUNDERBALLMON, 1
givemon SPECIES_TOGEMON, 1
givemon SPECIES_TORTOMON, 1
givemon SPECIES_TUSKMON, 1
givemon SPECIES_TYRANNOMON, 1
givemon SPECIES_UNIMON, 1
givemon SPECIES_SHIMAUNIMON, 1
givemon SPECIES_VEEDRAMON, 1
givemon SPECIES_VEGIMON, 1
givemon SPECIES_ZASSOUMON, 1
givemon SPECIES_REDVEGIMON, 1
givemon SPECIES_WHAMON_ADULT, 1
givemon SPECIES_WIZARMON, 1
givemon SPECIES_WOODMON, 1
givemon SPECIES_YANMAMON, 1
givemon SPECIES_SANDYANMAMON, 1
givemon SPECIES_YUKIDARUMON, 1
givemon SPECIES_TSUCHIDARUMON, 1
givemon SPECIES_AEROVEEDRAMON, 1
givemon SPECIES_ANDROMON, 1
givemon SPECIES_ANGEWOMON, 1
givemon SPECIES_ANOMALOCARIMON, 1
givemon SPECIES_ASURAMON, 1
givemon SPECIES_ATLURKABUTERIMONR, 1
givemon SPECIES_ATLURKABUTERIMONB, 1
givemon SPECIES_BIGMAMEMON, 1
givemon SPECIES_BLOSSOMON, 1
givemon SPECIES_BLUEMERAMON, 1
givemon SPECIES_BRACHIMON, 1
givemon SPECIES_CHIMAIRAMON, 1
givemon SPECIES_CYBERDRAMON, 1
givemon SPECIES_DAGOMON, 1
givemon SPECIES_DEATHMERAMON, 1
givemon SPECIES_DELUMON, 1
givemon SPECIES_DIGITAMAMON, 1
givemon SPECIES_ETEMON, 1
givemon SPECIES_EXTYRANNOMON, 1
givemon SPECIES_GARUDAMON, 1
givemon SPECIES_GERBEMON, 1
givemon SPECIES_GIGADRAMON, 1
givemon SPECIES_GIROMON, 1
givemon SPECIES_TEKKAMON, 1
givemon SPECIES_HANGYOMON, 1
givemon SPECIES_HOLYANGEMON, 1
givemon SPECIES_INSEKIMON, 1
givemon SPECIES_JYAGAMON, 1
givemon SPECIES_JYUREIMON, 1
givemon SPECIES_KNIGHTMON, 1
givemon SPECIES_LADYDEVIMON, 1
givemon SPECIES_LILIMON, 1
givemon SPECIES_MAMEMON, 1
givemon SPECIES_MAMMON, 1
givemon SPECIES_MARINEDEVIMON, 1
givemon SPECIES_MASTERTYRANNOMON, 1
givemon SPECIES_MEGADRAMON, 1
givemon SPECIES_MEGASEADRAMON, 1
givemon SPECIES_WARUSEADRAMON, 1
givemon SPECIES_METALGREYMON, 1
givemon SPECIES_METALGREYMONV, 1
givemon SPECIES_METALMAMEMON, 1
givemon SPECIES_METALTYRANNOMON, 1
givemon SPECIES_MONZAEMON, 1
givemon SPECIES_MUMMYMON, 1
givemon SPECIES_NANOMON, 1
givemon SPECIES_OKUWAMON, 1
givemon SPECIES_OROCHIMON, 1
givemon SPECIES_PANJYAMON, 1
givemon SPECIES_PARROTMON, 1
givemon SPECIES_PHANTOMON, 1
givemon SPECIES_PICCOLOMON, 1
givemon SPECIES_PUMPMON, 1
givemon SPECIES_SKULLGREYMON, 1
givemon SPECIES_SKULLSATAMON, 1
givemon SPECIES_TONOSAMAGEKOMON, 1
givemon SPECIES_TRICERAMON, 1
givemon SPECIES_VADERMON, 1
givemon SPECIES_VAMDEMON, 1
givemon SPECIES_VERMILIMON, 1
givemon SPECIES_WARUMONZAEMON, 1
givemon SPECIES_WEREGARURUMON, 1
givemon SPECIES_WHAMON_PERFECT, 1
givemon SPECIES_ZUDOMON, 1
givemon SPECIES_APOCALYMON, 1
givemon SPECIES_BABAMON, 1
givemon SPECIES_BOLTMON, 1
givemon SPECIES_DEMON, 1
givemon SPECIES_DEVITAMAMON, 1
givemon SPECIES_DIABLOMON, 1
givemon SPECIES_GODDRAMON, 1
givemon SPECIES_GRIFFOMON, 1
givemon SPECIES_HERAKLEKABUTERIMON, 1
givemon SPECIES_HOLYDRAMON, 1
givemon SPECIES_HOUOUMON, 1
givemon SPECIES_JIJIMON, 1
givemon SPECIES_KINGETEMON, 1
givemon SPECIES_MARINEANGEMON, 1
givemon SPECIES_METALETEMON, 1
givemon SPECIES_METALGARURUMON, 1
givemon SPECIES_METALSEADRAMON, 1
givemon SPECIES_MILLENNIUMMON, 1
givemon SPECIES_MUGENDRAMON, 1
givemon SPECIES_OMEGAMON, 1
givemon SPECIES_PIEMON, 1
givemon SPECIES_PINOCCHIMON, 1
givemon SPECIES_PLESIOMON, 1
givemon SPECIES_PUKUMON, 1
givemon SPECIES_ROSEMON, 1
givemon SPECIES_SABERLEOMON, 1
givemon SPECIES_SKULLMAMMON, 1
givemon SPECIES_VENOMVAMDEMON, 1
givemon SPECIES_WARGREYMON, 1
givemon SPECIES_ZANBAMON, 1
releaseall
end	