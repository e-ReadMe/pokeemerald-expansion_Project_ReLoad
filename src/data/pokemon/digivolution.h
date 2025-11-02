// Digivolution data structure
// Fields: HPReq, atkReq, defReq, spatkReq, spdefReq, speedReq, target species
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

// NOTE: other files expect the symbol name `sBlastoiseDigivolveTable` (no "ution").
static const struct Digivolution sBlastoiseDigivolveTable[] = {
    {1, 2, 3, 4, 5, 6, SPECIES_AGUMON},
    {15, 15, 15, 10, 12, 25, SPECIES_PALMON},
    {15, 15, 15, 10, 12, 25, SPECIES_BIRDRAMON},
    {12, 233, 1, 12, 22, 70, SPECIES_RALTS},
    DIGIVOLUTION_END,
};

static const struct Digivolution sZurumonDigivolveTable[] = {
    {4, 5, 6, 7, 8, 9, SPECIES_PIYOMON},
    {15, 15, 15, 10, 12, 25, SPECIES_PALMON},
    DIGIVOLUTION_END,
};