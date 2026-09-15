// Digivolution data structure
// Fields: HPReq, atkReq, defReq, spatkReq, spdefReq, speedReq, target species
// note that in comments, such as x/y/z, x is the minimum possible level, y is the average level, and z is the maximum level required to reach the stat requirements. 
struct Digivolution
{
    u8 HPReq;
    u8 atkReq;
    u8 defReq;
    u8 spatkReq;
    u8 spdefReq;
    u8 speedReq;
    u16 species;
};

// Sentinel value to mark the end of a digivolution table
#define DIGIVOLUTION_END {0, 0, 0, 0, 0, 0, SPECIES_NONE}
//-----------------------------------------------------------------
//1997-1999 Digimon Digivolution Tables
//-----------------------------------------------------------------
// stage 1 

//SPECIES_BOTAMON
static const struct Digivolution sBotamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {25, 12, 0, 12, 0, 0, SPECIES_KOROMON}, // 6/9/13
    DIGIVOLUTION_END
};

//SPECIES_BUBBMON
static const struct Digivolution sBubbmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 15, 0, 0, 0, SPECIES_MOCHIMON}, // 6/12/18
    {0, 15, 0, 0, 0, 0, SPECIES_NYAROMON}, // 6/14/20. Slightly more difficult to reach.

    DIGIVOLUTION_END
};

//SPECIES_CHOROMON
static const struct Digivolution sChoromonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 12, 0, 0, 0, SPECIES_CAPRIMON}, // 4/10/15
    DIGIVOLUTION_END
};

//SPECIES_MOKUMON
static const struct Digivolution sMokumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 12, 0, 0, SPECIES_PETITMERAMON}, // 4/10/16
    DIGIVOLUTION_END
};

//SPECIES_NYOKIMON
static const struct Digivolution sNyokimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {27, 0, 0, 0, 0, 0, SPECIES_TANEMON}, // 7/10/11
    {0, 0, 0, 0, 0, 13, SPECIES_PYOKOMON}, // 5/11/17
    DIGIVOLUTION_END
};

//SPECIES_PITCHMON
static const struct Digivolution sPitchmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 17, SPECIES_PUKAMON}, // 6/11/14

    DIGIVOLUTION_END
};

//SPECIES_POYOMON
static const struct Digivolution sPoyomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 12, 0, 0, SPECIES_TOKOMON}, // 5/13/23
    DIGIVOLUTION_END
};

//SPECIES_PUNIMON
static const struct Digivolution sPunimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 10, 0, 0, 0, 0, SPECIES_TSUNOMON}, // 4/10/18
    DIGIVOLUTION_END
};

//SPECIES_YUKIMIBOTAMON
static const struct Digivolution sYukimibotamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {30, 0, 0, 0, 0, 0, SPECIES_NYAROMON}, // 8/12/13
    DIGIVOLUTION_END
};

//SPECIES_YURAMON
static const struct Digivolution sYuramonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {30, 0, 0, 0, 0, 0, SPECIES_TANEMON}, // 8/11/11
    DIGIVOLUTION_END
};

//SPECIES_ZURUMON
static const struct Digivolution sZurumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 12, 0, SPECIES_PAGUMON}, // 4/10/15
    {40, 0, 0, 0, 0, 0, SPECIES_KODOKUGUMON}, // 12/17/18
    DIGIVOLUTION_END
};
//-----------------------------------------------------------------
// stage 2
//SPECIES_CAPRIMON
static const struct Digivolution sCaprimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 24, 0, 0, 0, 0, SPECIES_TOYAGUMON}, // 8/14/17
    {0, 0, 26, 0, 0, 0, SPECIES_HAGURUMON}, // 9/15/19
    {0, 0, 30, 0, 20, 0, SPECIES_KOKUWAMON}, // 11/18/26
    {0, 35, 0, 0, 0, 0, SPECIES_CLEARAGUMON}, // 13/21/27 a bit harder to reach than toyagumon
    #if digi_2000
    {0, 0, 37, 0, 0, 0, SPECIES_SOLARMON}, // 13/23/29 a bit harder to reach than hagurumon
    {60, 40, 0, 0, 0, 0, SPECIES_PHASCOMON}, // 18/25/31
    {0, 45, 0, 0, 0, 0, SPECIES_CLEARAGUMONBLACK}, // 17/28/35 bit harder again than clearagumon
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_CHOROMON}, // devolution. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_KODOKUGUMON
static const struct Digivolution sKodokugumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {65, 45, 30, 0, 0, 0, SPECIES_DOKUGUMON}, // 21/30/38
    {0, 0, 0, 0, 0, 0, SPECIES_ZURUMON}, // devolution. Keep as the last spot
    #if digi_2000
    {0, 30, 0, 0, 0, 0, SPECIES_KODOKUGUMONCHILD}, // 11/19/25
    {0, 0, 0, 0, 0, 0, SPECIES_LEAFMON}, // devolution. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_KOROMON
static const struct Digivolution sKoromonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 25, 0, 0, 0, 0, SPECIES_AGUMON}, // 9/15/20
    {0, 0, 0, 26, 0, 0, SPECIES_BETAMON}, // 9/15/19
    {0, 0, 0, 0, 20, 0, SPECIES_MODOKIBETAMON}, // 8/15/20
    #if digi_2000
    {0, 0, 0, 32, 0, 0, SPECIES_AGUMONBLACK}, // 12/19/24
    {0, 30, 25, 0, 0, 0, SPECIES_AGUMON06}, // 11/22/29
    {0, 0, 0, 0, 0, 30, SPECIES_BUSHIAGUMON}, // 15/30/42
    {0, 34, 25, 0, 0, 0, SPECIES_AGUMON06BLACK}, // 13/22/29
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_BOTAMON}, // devolution. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_MOCHIMON
static const struct Digivolution sMochimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 19, 32, 0, SPECIES_TENTOMON}, // 10/16/22
    #if digi_2000
    {0, 14, 0, 19, 0, 0, SPECIES_KOKABUTERIMON}, // 8/17/28
    #endif
    {0, 0, 0, 20, 0, 0, SPECIES_KUNEMON}, // 9/16/23
    {0, 0, 0, 0, 25, 0, SPECIES_DOKUNEMON}, // 8/12/15
    {0, 0, 20, 0, 0, 0, SPECIES_GOTSUMON}, // 10/20/30
    {0, 0, 0, 0, 0, 0, SPECIES_BUBBMON}, // devolution. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_NYAROMON
static const struct Digivolution sNyaromonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 30, 0, 0, 0, 25, SPECIES_PLOTMON},
    {0, 35, 0, 0, 0, 0, SPECIES_YUKIAGUMON},
    #if digi_2000
    {0, 0, 0, 30, 0, 0, SPECIES_HACKMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_YUKIMIBOTAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PAGUMON
static const struct Digivolution sPagumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 25, 0, SPECIES_GAZIMON},
    {0, 0, 0, 25, 0, 0, SPECIES_GIZAMON},
    {0, 0, 0, 0, 0, 22, SPECIES_CHUUMON},
    #if digi_2000
    {35, 0, 0, 0, 0, 0, SPECIES_CHUUCHUUMON},
    #endif
    {0, 20, 20, 0, 0, 0, SPECIES_GOBLIMON},
    {45, 0, 0, 0, 25, 0, SPECIES_SHAMAMON},
    {0, 0, 0, 25, 25, 0, SPECIES_SNOWGOBLIMON},
    #if digi_2020
    {0, 40, 0, 0, 0, 0, SPECIES_HYEMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_ZURUMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PETITMERAMON
static const struct Digivolution sPetitmeramonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 30, 0, 0, SPECIES_CANDMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_GHOSTMON},
    #endif
    {0, 0, 0, 0, 0, 20, SPECIES_PICODEVIMON},
    {0, 0, 0, 0, 30, 0, SPECIES_BAKUMON},
    {0, 0, 0, 0, 0, 0, SPECIES_MOKUMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PUKAMON
static const struct Digivolution sPukamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 55, 0, 0, 0, 0, SPECIES_GOMAMON},
    {0, 0, 30, 0, 30, 0, SPECIES_GANIMON},
    {0, 0, 35, 0, 35, 0, SPECIES_SHAKOMON},
    {55, 0, 0, 0, 0, 0, SPECIES_OTAMAMON},
    {0, 0, 0, 30, 0, 0, SPECIES_PENMON},
    {0, 0, 0, 0, 0, 0, SPECIES_PITCHMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PYOKOMON
static const struct Digivolution sPyokomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 20, 25, 0, 0, 0, SPECIES_PIYOMON},
    {0, 0, 0, 18, 18, 0, SPECIES_PALMON},
    {0, 0, 25, 0, 18, 0, SPECIES_FLORAMON},
    {0, 0, 30, 0, 0, 0, SPECIES_ALRAUMON},
    {55, 0, 25, 0, 0, 0, SPECIES_MUCHOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_NYOKIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_TANEMON
static const struct Digivolution sTanemonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 30, 35, 0, SPECIES_PALMON},
    {0, 0, 25, 0, 35, 0, SPECIES_FLORAMON},
    {0, 0, 30, 0, 0, 0, SPECIES_ALRAUMON},
    #if digi_2000
    {60, 0, 0, 0, 0, 0, SPECIES_BAKOMON},
    {0, 0, 0, 0, 0, 25, SPECIES_KOEMON},
    #endif
    {0, 20, 0, 0, 0, 0, SPECIES_MUSHMON},
    {0, 0, 0, 0, 0, 0, SPECIES_YURAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_TOKOMON
static const struct Digivolution sTokomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 20, 0, 0, SPECIES_PATAMON},
    {0, 25, 0, 0, 0, 0, SPECIES_TSUKAIMON},
    {0, 0, 0, 0, 0, 30, SPECIES_KUNEMON},
    #if digi_2000
    {0, 0, 20, 0, 0, 0, SPECIES_PILLOMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_POYOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_TSUNOMON
static const struct Digivolution sTsunomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 26, 0, 0, 0, 0, SPECIES_GABUMON},
    {0, 0, 0, 20, 0, 0, SPECIES_ELECMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_ELECMONV},
    {0, 0, 0, 0, 0, 0, SPECIES_GABUMONB},
    #endif
    {0, 0, 20, 0, 0, 0, SPECIES_PSYCHEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_PUNIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//-----------------------------------------------------------------
// stage 3
//SPECIES_AGUMON
static const struct Digivolution sAgumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_GREYMON},
    {0, 0, 0, 0, 0, 0, SPECIES_TYRANNOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_COELAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_CYCLOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_OGREMON},
    #if digi_2007
    {0, 0, 0, 0, 0, 0, SPECIES_COREDRAMON_GREEN},
    {0, 0, 0, 0, 0, 0, SPECIES_GEOGREYMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_KOROMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_YUKIAGUMON
static const struct Digivolution sYukiagumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_ICEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_MOJYAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_YUKIDARUMON},
    #if digi_2002
    {0, 0, 0, 0, 0, 0, SPECIES_CHACKMON},
    #endif
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_ALLOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_HIYARIMON}, //Devolve. Keep as the last spot
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_NYAROMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_BAKUMON
static const struct Digivolution sBakumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_BAKEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DARKLIZARMON},
    {0, 0, 0, 0, 0, 0, SPECIES_GURURUMON},
    {0, 0, 0, 0, 0, 0, SPECIES_MONOCHROMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SHIMAUNIMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_BOARMON},
    {0, 0, 0, 0, 0, 0, SPECIES_BULLMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SORCERIMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PETITMERAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_BETAMON
static const struct Digivolution sBetamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_SEADRAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_AIRDRAMON},
    #if digi_2024
    {0, 0, 0, 0, 0, 0, SPECIES_LANDRAMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_GEKOMON},
    #if digi_2002
    {0, 0, 0, 0, 0, 0, SPECIES_DINOHUMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_KOROMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_MODOKIBETAMON
static const struct Digivolution sModokibetamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_GEKOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_GESOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_NISEDRIMOGEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SHELLMON},
    {0, 0, 0, 0, 0, 0, SPECIES_KOROMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_CANDMON
static const struct Digivolution sCandmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_BAKEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_MERAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DARKLIZARMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DEVIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_WIZARMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_FLADRAMON},
    #endif
    #if digi_2002
    {0, 0, 0, 0, 0, 0, SPECIES_FLAWIZARMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PETITMERAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_CHUUMON
static const struct Digivolution sChuumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PAGUMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_ELECMON
static const struct Digivolution sElecmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_SUKAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_GEREMON},
    {0, 0, 0, 0, 0, 0, SPECIES_NANIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_TSUNOMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_SALAMANDAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DOGMON},
    {0, 0, 0, 0, 0, 0, SPECIES_PUCCHIEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_NYAROMONB}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_FLORAMON
static const struct Digivolution sFloramonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_KIWIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_VEGIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_IGAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_WOODMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_HARPYMON},
    #endif
    #if digi_2024
    {0, 0, 0, 0, 0, 0, SPECIES_GALEMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PYOKOMON}, //Devolve. Keep as the last spot
    {0, 0, 0, 0, 0, 0, SPECIES_TANEMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_GABUMON
static const struct Digivolution sGabumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_GARURUMON},
    {0, 0, 0, 0, 0, 0, SPECIES_CENTARUMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DRIMOGEMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_BULLMON},
    #endif
    #if digi_2002
    {0, 0, 0, 0, 0, 0, SPECIES_FANGMON},
    #endif
    #if digi_2010
    {0, 0, 0, 0, 0, 0, SPECIES_DORULUMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_TSUNOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PSYCHEMON
static const struct Digivolution sPsychemonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_GURURUMON},
    {0, 0, 0, 0, 0, 0, SPECIES_NISEDRIMOGEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_HANUMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_MOOSEMON},
    #endif
    #if digi_2002
    {0, 0, 0, 0, 0, 0, SPECIES_FANGMON},
    #endif
    #if digi_2004
    {0, 0, 0, 0, 0, 0, SPECIES_ASTAMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_TSUNOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_GANIMON
static const struct Digivolution sGanimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_COELAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_EBIDRAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_GESOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SHELLMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SNIMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_ARCHELOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SUBMARIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_TYLOMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PUKAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_GAZIMON
static const struct Digivolution sGazimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_DELTAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DEVIDRAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SUKAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DARKTYRANNOMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_BLACKTAILMON},
    {0, 0, 0, 0, 0, 0, SPECIES_GARGOMON},
    #endif
    #if digi_2010
    {0, 0, 0, 0, 0, 0, SPECIES_MADLEOMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PAGUMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_GIZAMON
static const struct Digivolution sGizamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_CYCLOMON},
    {0, 0, 0, 0, 0, 0, SPECIES_EBIDRAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_ICEDEVIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SHELLMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_MANTARAYMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PAGUMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_GOBLIMON
static const struct Digivolution sGoblimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_OGREMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DELTAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_GREYMON},
    {0, 0, 0, 0, 0, 0, SPECIES_DEVIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_PAGUMON}, //Devolve. Keep as the last spot
    #if digi_2020
    {0, 0, 0, 0, 0, 0, SPECIES_ONIBIMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_SHAMAMON
static const struct Digivolution sShamamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_FUGAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_SOULMON},
    {0, 0, 0, 0, 0, 0, SPECIES_MINOTAURMON},
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_SEPIKMON},
    #endif
    {0, 0, 0, 0, 0, 0, SPECIES_PAGUMON}, //Devolve. Keep as the last spot
    #if digi_2020
    {0, 0, 0, 0, 0, 0, SPECIES_ONIBIMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_SNOWGOBLIMON
static const struct Digivolution sSnowgoblimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_HYOGAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_ICEDEVIMON},
    {0, 0, 0, 0, 0, 0, SPECIES_ICEMON},
    {0, 0, 0, 0, 0, 0, SPECIES_MOJYAMON},
    {0, 0, 0, 0, 0, 0, SPECIES_YUKIDARUMON},
    {0, 0, 0, 0, 0, 0, SPECIES_PAGUMON}, //Devolve. Keep as the last spot
    #if digi_2020
    {0, 0, 0, 0, 0, 0, SPECIES_ONIBIMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_GOMAMON
static const struct Digivolution sGomamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PUKAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_GOTSUMON
static const struct Digivolution sGotsumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_MOCHIMON}, //Devolve. Keep as the last spot
    #if digi_2020
    {0, 0, 0, 0, 0, 0, SPECIES_GOROMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_HAGURUMON
static const struct Digivolution sHagurumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_CAPRIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_KOKUWAMON
static const struct Digivolution sKokuwamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_CAPRIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_KUNEMON
static const struct Digivolution sKunemonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_MOCHIMON}, //Devolve. Keep as the last spot
    {0, 0, 0, 0, 0, 0, SPECIES_TOKOMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_MINOMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_DOKUNEMON
static const struct Digivolution sDokunemonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_MOCHIMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_MINOMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_MUSHMON
static const struct Digivolution sMushmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_TANEMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_BUDMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_OTAMAMON
static const struct Digivolution sOtamamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PUKAMON}, //Devolve. Keep as the last spot
    #if digi_2020
    {0, 0, 0, 0, 0, 0, SPECIES_PUYOYOMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_PALMON
static const struct Digivolution sPalmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_TANEMON}, //Devolve. Keep as the last spot
    {0, 0, 0, 0, 0, 0, SPECIES_PYOKOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_ALRAUMON
static const struct Digivolution sAlraumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_TANEMON}, //Devolve. Keep as the last spot
    {0, 0, 0, 0, 0, 0, SPECIES_PYOKOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PATAMON
static const struct Digivolution sPatamonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_TOKOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_TSUKAIMON
static const struct Digivolution sTsukaimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_TOKOMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PENMON
static const struct Digivolution sPenmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PUKAMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_HIYARIMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_MUCHOMON
static const struct Digivolution sMuchomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PYOKOMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_POROMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_PICODEVIMON
static const struct Digivolution sPicodevimonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PETITMERAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_PIYOMON
static const struct Digivolution sPiyomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PYOKOMON}, //Devolve. Keep as the last spot
    #if digi_2000
    {0, 0, 0, 0, 0, 0, SPECIES_POROMON}, //Devolve. Keep as the last spot
    {0, 0, 0, 0, 0, 0, SPECIES_PINAMON}, //Devolve. Keep as the last spot
    #endif
    DIGIVOLUTION_END
};

//SPECIES_PLOTMON
static const struct Digivolution sPlotmonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_NYAROMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_SHAKOMON
static const struct Digivolution sShakomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_PUKAMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_TENTOMON
static const struct Digivolution sTentomonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_MOCHIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_TOYAGUMON
static const struct Digivolution sToyagumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_CAPRIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_CLEARAGUMON
static const struct Digivolution sClearagumonDigivolveTable[] = {
//  HP Atk Def SA SD Spd
    {0, 0, 0, 0, 0, 0, SPECIES_CAPRIMON}, //Devolve. Keep as the last spot
    DIGIVOLUTION_END
};

//SPECIES_BUN
static const struct Digivolution sBunDigivolveTable[] = {
    DIGIVOLUTION_END
};

//-----------------------------------------------------------------
// stage 4
//SPECIES_AIRDRAMON
static const struct Digivolution sAirdramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ANGEMON
static const struct Digivolution sAngemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PIDMON
static const struct Digivolution sPidmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BAKEMON
static const struct Digivolution sBakemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SOULMON
static const struct Digivolution sSoulmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BIRDRAMON
static const struct Digivolution sBirdramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SABERDRAMON
static const struct Digivolution sSaberdramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_CENTARUMON
static const struct Digivolution sCentarumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_CLOCKMON
static const struct Digivolution sClockmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_COELAMON
static const struct Digivolution sCoelamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_CYCLOMON
static const struct Digivolution sCyclomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DARKTYRANNOMON
static const struct Digivolution sDarktyrannomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DELTAMON
static const struct Digivolution sDeltamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DEVIDRAMON
static const struct Digivolution sDevidramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DEVIMON
static const struct Digivolution sDevimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ICEDEVIMON
static const struct Digivolution sIcedevimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DOKUGUMON
static const struct Digivolution sDokugumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DRIMOGEMON
static const struct Digivolution sDrimogemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_NISEDRIMOGEMON
static const struct Digivolution sNisedrimogemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_EBIDRAMON
static const struct Digivolution sEbidramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_EVILMON
static const struct Digivolution sEvilmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_FLARELIZARMON
static const struct Digivolution sFlarelizarmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DARKLIZARMON
static const struct Digivolution sDarklizarmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_FLYMON
static const struct Digivolution sFlymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GARURUMON
static const struct Digivolution sGarurumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GURURUMON
static const struct Digivolution sGururumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GEKOMON
static const struct Digivolution sGekomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GESOMON
static const struct Digivolution sGesomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GOKIMON
static const struct Digivolution sGokimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GOLEMON
static const struct Digivolution sGolemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GORIMON
static const struct Digivolution sGorimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GREYMON
static const struct Digivolution sGreymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GUARDROMON
static const struct Digivolution sGuardromonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HANUMON
static const struct Digivolution sHanumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ICEMON
static const struct Digivolution sIcemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_IGAMON
static const struct Digivolution sIgamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_IKKAKUMON
static const struct Digivolution sIkkakumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KABUTERIMON
static const struct Digivolution sKabuterimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KARATUKINUMEMON
static const struct Digivolution sKaratukinumemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KIWIMON
static const struct Digivolution sKiwimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KOKATORIMON
static const struct Digivolution sKokatorimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_AKATORIMON
static const struct Digivolution sAkatorimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KUWAGAMON
static const struct Digivolution sKuwagamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_LEOMON
static const struct Digivolution sLeomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MECHANORIMON
static const struct Digivolution sMechanorimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MERAMON
static const struct Digivolution sMeramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MINOTAURMON
static const struct Digivolution sMinotaurmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MOJYAMON
static const struct Digivolution sMojyamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_JUNGLEMOJYAMON
static const struct Digivolution sJunglemojyamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MONOCHROMON
static const struct Digivolution sMonochromonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MUSYAMON
static const struct Digivolution sMusyamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_NANIMON
static const struct Digivolution sNanimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_NUMEMON
static const struct Digivolution sNumemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GEREMON
static const struct Digivolution sGeremonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_OCTOMON
static const struct Digivolution sOctomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_OGREMON
static const struct Digivolution sOgremonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_FUGAMON
static const struct Digivolution sFugamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HYOGAMON
static const struct Digivolution sHyogamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_RAREMON
static const struct Digivolution sRaremonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_REVOLMON
static const struct Digivolution sRevolmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_RUKAMON
static const struct Digivolution sRukamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SEADRAMON
static const struct Digivolution sSeadramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SHELLMON
static const struct Digivolution sShellmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MORISHELLMON
static const struct Digivolution sMorishellmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SNIMON
static const struct Digivolution sSnimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_STARMON
static const struct Digivolution sStarmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SUKAMON
static const struct Digivolution sSukamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PLATINUMSUKAMON
static const struct Digivolution sPlatinumsukamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TAILMON
static const struct Digivolution sTailmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TANKMON
static const struct Digivolution sTankmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_THUNDERBALLMON
static const struct Digivolution sThunderballmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TOGEMON
static const struct Digivolution sTogemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TORTOMON
static const struct Digivolution sTortomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TUSKMON
static const struct Digivolution sTuskmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TYRANNOMON
static const struct Digivolution sTyrannomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_UNIMON
static const struct Digivolution sUnimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SHIMAUNIMON
static const struct Digivolution sShimaunimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_VEEDRAMON
static const struct Digivolution sVeedramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_VEGIMON
static const struct Digivolution sVegimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ZASSOUMON
static const struct Digivolution sZassoumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_REDVEGIMON
static const struct Digivolution sRedvegimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WHAMON_ADULT
static const struct Digivolution sWhamon_adultDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WIZARMON
static const struct Digivolution sWizarmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WOODMON
static const struct Digivolution sWoodmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_YANMAMON
static const struct Digivolution sYanmamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SANDYANMAMON
static const struct Digivolution sSandyanmamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_YUKIDARUMON
static const struct Digivolution sYukidarumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TSUCHIDARUMON
static const struct Digivolution sTsuchidarumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//-----------------------------------------------------------------
// stage 5
//SPECIES_AEROVEEDRAMON
static const struct Digivolution sAeroveedramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ANDROMON
static const struct Digivolution sAndromonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ANGEWOMON
static const struct Digivolution sAngewomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ANOMALOCARIMON
static const struct Digivolution sAnomalocarimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ASURAMON
static const struct Digivolution sAsuramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ATLURKABUTERIMONR
static const struct Digivolution sAtlurkabuterimonrDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ATLURKABUTERIMONB
static const struct Digivolution sAtlurkabuterimonbDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BIGMAMEMON
static const struct Digivolution sBigmamemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BLOSSOMON
static const struct Digivolution sBlossomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BLUEMERAMON
static const struct Digivolution sBluemeramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BRACHIMON
static const struct Digivolution sBrachimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_CHIMAIRAMON
static const struct Digivolution sChimairamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_CYBERDRAMON
static const struct Digivolution sCyberdramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DAGOMON
static const struct Digivolution sDagomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DEATHMERAMON
static const struct Digivolution sDeathmeramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DELUMON
static const struct Digivolution sDelumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DIGITAMAMON
static const struct Digivolution sDigitamamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ETEMON
static const struct Digivolution sEtemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_EXTYRANNOMON
static const struct Digivolution sExtyrannomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GARUDAMON
static const struct Digivolution sGarudamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GERBEMON
static const struct Digivolution sGerbemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GIGADRAMON
static const struct Digivolution sGigadramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GIROMON
static const struct Digivolution sGiromonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TEKKAMON
static const struct Digivolution sTekkamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HANGYOMON
static const struct Digivolution sHangyomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HOLYANGEMON
static const struct Digivolution sHolyangemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_INSEKIMON
static const struct Digivolution sInsekimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_JYAGAMON
static const struct Digivolution sJyagamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_JYUREIMON
static const struct Digivolution sJyureimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KNIGHTMON
static const struct Digivolution sKnightmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_LADYDEVIMON
static const struct Digivolution sLadydevimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_LILIMON
static const struct Digivolution sLilimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MAMEMON
static const struct Digivolution sMamemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MAMMON
static const struct Digivolution sMammonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MARINEDEVIMON
static const struct Digivolution sMarinedevimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MASTERTYRANNOMON
static const struct Digivolution sMastertyrannomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MEGADRAMON
static const struct Digivolution sMegadramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MEGASEADRAMON
static const struct Digivolution sMegaseadramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WARUSEADRAMON
static const struct Digivolution sWaruseadramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALGREYMON
static const struct Digivolution sMetalgreymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALGREYMONV
static const struct Digivolution sMetalgreymonvDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALMAMEMON
static const struct Digivolution sMetalmamemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALTYRANNOMON
static const struct Digivolution sMetaltyrannomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MONZAEMON
static const struct Digivolution sMonzaemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MUMMYMON
static const struct Digivolution sMummymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_NANOMON
static const struct Digivolution sNanomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_OKUWAMON
static const struct Digivolution sOkuwamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_OROCHIMON
static const struct Digivolution sOrochimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PANJYAMON
static const struct Digivolution sPanjyamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PARROTMON
static const struct Digivolution sParrotmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PHANTOMON
static const struct Digivolution sPhantomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PICCOLOMON
static const struct Digivolution sPiccolomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PUMPMON
static const struct Digivolution sPumpmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SKULLGREYMON
static const struct Digivolution sSkullgreymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SKULLSATAMON
static const struct Digivolution sSkullsatamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TONOSAMAGEKOMON
static const struct Digivolution sTonosamagekomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_TRICERAMON
static const struct Digivolution sTriceramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_VADERMON
static const struct Digivolution sVadermonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_VAMDEMON
static const struct Digivolution sVamdemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_VERMILIMON
static const struct Digivolution sVermilimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WARUMONZAEMON
static const struct Digivolution sWarumonzaemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WEREGARURUMON
static const struct Digivolution sWeregarurumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WHAMON_PERFECT
static const struct Digivolution sWhamon_perfectDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ZUDOMON
static const struct Digivolution sZudomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//-----------------------------------------------------------------
// stage 6 and up
//SPECIES_APOCALYMON
static const struct Digivolution sApocalymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BABAMON
static const struct Digivolution sBabamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_BOLTMON
static const struct Digivolution sBoltmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DEMON
static const struct Digivolution sDemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DEVITAMAMON
static const struct Digivolution sDevitamamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_DIABLOMON
static const struct Digivolution sDiablomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GODDRAMON
static const struct Digivolution sGoddramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_GRIFFOMON
static const struct Digivolution sGriffomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HERAKLEKABUTERIMON
static const struct Digivolution sHeraklekabuterimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HOLYDRAMON
static const struct Digivolution sHolydramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_HOUOUMON
static const struct Digivolution sHououmonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_JIJIMON
static const struct Digivolution sJijimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_KINGETEMON
static const struct Digivolution sKingetemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MARINEANGEMON
static const struct Digivolution sMarineangemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALETEMON
static const struct Digivolution sMetaletemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALGARURUMON
static const struct Digivolution sMetalgarurumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_METALSEADRAMON
static const struct Digivolution sMetalseadramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MILLENNIUMMON
static const struct Digivolution sMillenniummonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_MUGENDRAMON
static const struct Digivolution sMugendramonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_OMEGAMON
static const struct Digivolution sOmegamonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PIEMON
static const struct Digivolution sPiemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PINOCCHIMON
static const struct Digivolution sPinocchimonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PLESIOMON
static const struct Digivolution sPlesiomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_PUKUMON
static const struct Digivolution sPukumonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ROSEMON
static const struct Digivolution sRosemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SABERLEOMON
static const struct Digivolution sSaberleomonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_SKULLMAMMON
static const struct Digivolution sSkullmammonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_VENOMVAMDEMON
static const struct Digivolution sVenomvamdemonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_WARGREYMON
static const struct Digivolution sWargreymonDigivolveTable[] = {
    DIGIVOLUTION_END
};

//SPECIES_ZANBAMON
static const struct Digivolution sZanbamonDigivolveTable[] = {
    DIGIVOLUTION_END
};


