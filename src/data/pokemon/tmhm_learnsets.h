//#define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
//#define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_WORK_UP))

#define TMHM(tmhm) ((u8) ((ITEM_##tmhm) - ITEM_TM01_WORK_UP))


// This table determines which TMs and HMs aspecies is capable of learning.
// Each entry is a 64-bit bit arrayspread across two 32-bit values, with
// each bit corresponding to a .
/*const u32 gTMHMLearnsets[][4] =
{
    [SPECIES_NONE]        = TMHM_LEARNSET(0),

    [SPECIES_BULBASAUR]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_IVYSAUR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VENUSAUR]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHARMANDER]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHARMELEON]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHARIZARD]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SQUIRTLE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WARTORTLE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_BLASTOISE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SNIVY]    = TMHM_LEARNSET(0),

    [SPECIES_SERVINE]     = TMHM_LEARNSET(0),

    [SPECIES_SERPERIOR]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WEEDLE]      = TMHM_LEARNSET(0),

    [SPECIES_KAKUNA]      = TMHM_LEARNSET(0),

    [SPECIES_BEEDRILL]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PIDGEY]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_PIDGEOTTO]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_PIDGEOT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_VULPIX_A]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NINETALES_A]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NOIBAT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_NOIVERN]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_EKANS]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_ARBOK]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_PIKACHU]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAICHU]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSHREW]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSLASH]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORAN_F]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORINA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDOQUEEN]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORAN_M]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDORINO]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_NIDOKING]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CLEFAIRY]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CLEFABLE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VULPIX]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)),

    [SPECIES_NINETALES]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)),

    [SPECIES_FROAKIE]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FROGADIER]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GRENINJA]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_BONDED_GRENINJA]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_ROWLET]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DARTRIX]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DECIDUEYE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BIDOOF]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BIBAREL]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VENONAT]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VENOMOTH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KARRABLAST]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ESCAVALIER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYRUNT]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TYRANTRUM]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_COMBEE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_VESPIQUEEN]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_PURRLOIN]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LIEPARD]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GROWLITHE]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARCANINE]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PIDOVE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_TRANQUILL]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_UNFEZANT]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ABRA]        = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KADABRA]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ALAKAZAM]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SCATTERBUG]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SPEWPA]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VIVILLON]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VENIPEDE]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WHIRLIPEDE]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SCOLIPEDE]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TENTACOOL]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_TENTACRUEL]  = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ESPURR]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEOWSTIC_M]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEOWSTIC_F]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PONYTA]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_RAPIDASH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_VULLABY]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MANDIBUZZ]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MAGNEMITE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAGNETON]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAGNEZONE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)),

    [SPECIES_ROTOM]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_LILLIPUP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_HERDIER]        = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_STOUTLAND]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MUDBRAY]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)),

    [SPECIES_MUDSDALE]         = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DUCKLETT]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SWANNA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GASTLY]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_HAUNTER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)),

    [SPECIES_GENGAR]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ONIX]        = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RUFFLET]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BRAVIARY]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KRABBY]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_KINGLER]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SCRAGGY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SCRAFTY]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CUBCHOO]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BEARTIC]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CUBONE]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAROWAK]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HITMONLEE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HITMONCHAN]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BUNNELBY]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DIGGERSBY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BONDED_BEARTIC]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_RHYHORN]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RHYDON]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CHANSEY]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TANGELA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TANGROWTH]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BUIZEL]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_FLOATZEL]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_DRILLBUR]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_EXCADRILL]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_STARYU]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_STARMIE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_BONDED_FLYGON]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SCYTHER]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LARVESTA]        = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_VOLCARONA]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FOONGUS]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PINSIR]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AMOONGUSS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAGIKARP]    = TMHM_LEARNSET(0),

    [SPECIES_GYARADOS]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LAPRAS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_DITTO]       = TMHM_LEARNSET(0),

    [SPECIES_EEVEE]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)),

    [SPECIES_VAPOREON]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_JOLTEON]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FLAREON]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)),

    [SPECIES_PORYGON]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SKORUPI]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_DRAPION]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SKRELP]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_DRAGALGE]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_AERODACTYL]  = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNORLAX]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)),

    [SPECIES_BONDED_GROUDON]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BONDED_KYOGRE]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BONDED_RAYQUAZA]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GOOMY]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_SLIGGOO]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_GOODRA]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MEWTWO]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEW]         = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SNOVER]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ABOMASNOW]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ABOMACIER]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CYNDAQUIL]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)),

    [SPECIES_QUILAVA]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYPHLOSION]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BASCULIN]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WIMPOD]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GOLISOPOD]  = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SENTRET]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)),

    [SPECIES_FURRET]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FERROSEED]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FERROTHORN]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CLAUNCHER]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CLAWITZER]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SPINARAK]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_ARIADOS]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MIMIKYU]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM02_FLY)),

    [SPECIES_CHINCHOU]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LANTURN]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SEWADDLE]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SWADLOON]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LEAVANNY]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TOGEPI]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOGETIC]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TOGEKISS]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_PHANTUMP]        = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAREEP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FLAAFFY]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AMPHAROS]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TREVENANT]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MARILL]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_AZUMARILL]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GIBLE]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GABITE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GARCHOMP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_HONEDGE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DOUBLADE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_AEGISLASH]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SCIMITEYE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_JAWGUILE]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BONDED_RAICHU]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WOOPER]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_QUAGSIRE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ESPEON]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_UMBREON]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LEAFEON]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM02_FLY)),

    [SPECIES_GLACEON]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SYLVEON]  = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FLABEBE]       = TMHM_LEARNSET(0),

    [SPECIES_FLOETTE]   = TMHM_LEARNSET(0),

    [SPECIES_FLORGES]   = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_JOLTIK]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GALVANTULA]  = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AUDINO]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WEAVILE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_STEELIX]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_POPPLIO]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BRIONNE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PRIMARINA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SCIZOR]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDIREIGN]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HERACROSS]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SNEASEL]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TEDDIURSA]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_URSARING]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BRONZOR]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BRONZONG]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWINUB]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PILOSWINE]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MAMOSWINE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZEKROM]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SHINX]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LUXIO]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM02_FLY)),

    [SPECIES_LUXRAY]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SKARMORY]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDOUR]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDOOM]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HOUNDREAD]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LITLEO]      = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PYROAR]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PORYGON2]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_RESHIRAM]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SMEARGLE]    = TMHM_LEARNSET(0),

    [SPECIES_TYROGUE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_HITMONTOP]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GOTHITA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GOTHORITA]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GOTHITELLE]       = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BONDED_MEWTWO_Y]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BLISSEY]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROTOM_FAN]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROTOM_MOW]       = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROTOM_HEAT]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LARVITAR]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PUPITAR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYRANITAR]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROTOM_WASH]       = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ROTOM_FREEZE]       = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CELEBI]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TREECKO]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GROVYLE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SCEPTILE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TORCHIC]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_COMBUSKEN]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BLAZIKEN]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MUDKIP]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MARSHTOMP]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SWAMPERT]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_POOCHYENA]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MIGHTYENA]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ZIGZAGOON]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LINOONE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PETILIL]     = TMHM_LEARNSET(0),

    [SPECIES_LILLIGANT]     = TMHM_LEARNSET(0),

    [SPECIES_COTTONEE]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WHIMSICOTT]     = TMHM_LEARNSET(0),

    [SPECIES_SOLOSIS]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DUOSION]       = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_REUNICLUS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_PANCHAM]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_PANGORO]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MIENFOO]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MIENSHAO]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AMAURA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_AURORUS]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DIALGA]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SHELMET]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_ACCELGOR]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_SHROOMISH]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BRELOOM]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PALKIA]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_WINGULL]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_PELIPPER]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)),

    [SPECIES_RIOLU]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LUCARIO]  = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_WAILMER]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_WAILORD]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SKITTY]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_DELCATTY]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROGGENROLA]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BOLDORE]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GIGALITH]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSHREW_A]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SANDSLASH_A]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SABLEYE]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LITWICK]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_LAMPENT]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CHANDELURE]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CORPHISH]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_CRAWDAUNT]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_FEEBAS]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MILOTIC]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CARVANHA]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_SHARPEDO]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_TRAPINCH]    = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_VIBRAVA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FLYGON]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_DWEBBLE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_CRUSTLE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ELECTRIKE]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MANECTRIC]   = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MANETHUNDR]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_PORYGONZ]    = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TYNAMO]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_EELEKTRIK]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_EELEKTROSS]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_CACNEA]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CACTURNE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SNORUNT]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GLALIE]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FROSLASS]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_TIRTOUGA]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CARRACOSTA]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)),

    [SPECIES_SPOINK]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GRUMPIG]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SALANDIT]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_SALAZZLE]       = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_MAWILE]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDITITE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MEDICHAM]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SWABLU]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)),

    [SPECIES_ALTARIA]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TIMBURR]      = TMHM_LEARNSET(0),

    [SPECIES_GURDURR]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_CONKELDURR]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GIRATINA]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_FLETCHLING]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_FLETCHINDR]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_TALONFLAME]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_GIRATINA_ORIGIN]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BONDED_SERPERIOR]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KYUREM]     = TMHM_LEARNSET(TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_MELOETTA]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)),

    [SPECIES_BUNEARY]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LOPUNNY]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AZELF]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_MESPRIT]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_UXIE]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ABSOL]       = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHUPPET]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BANETTE]     = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BANSHEETTE]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ABSOLOM]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RELICANTH]   = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_ARON]        = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LAIRON]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_AGGRON]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ALOLAN_MAROWAK]    = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_RHYPERIOR]     = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GALLADE]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_LILEEP]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)),

    [SPECIES_CRADILY]     = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM09_BULLET_SEED)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM19_GIGA_DRAIN)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ANORITH]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARMALDO]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RALTS]       = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_KIRLIA]      = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_GARDEVOIR]   = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM46_THIEF)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BAGON]       = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SHELGON]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_SALAMENCE]   = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BELDUM]      = TMHM_LEARNSET(0),

    [SPECIES_METANG]      = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_METAGROSS]   = TMHM_LEARNSET(TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM36_SLUDGE_BOMB)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ROCKRUFF]    = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_LYCANROC]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_BONDED_AERODACTYL]   = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_KYOGRE]      = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM07_HAIL)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_GROUDON]     = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM28_DIG)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_RAYQUAZA]    = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM08_BULK_UP)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM14_BLIZZARD)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM23_IRON_TAIL)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM35_FLAMETHROWER)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM38_FIRE_BLAST)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM50_OVERHEAT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_KYUREM_WHITE]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_KYUREM_BLACK]      = TMHM_LEARNSET(TMHM(TM02_DRAGON_CLAW)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM05_ROAR)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM26_EARTHQUAKE)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM47_STEEL_WING)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_BONDED_AGGRON]     = TMHM_LEARNSET(TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM37_SANDSTORM)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(HM05_FLASH)),

    [SPECIES_BONDED_ALAKAZAM]      = TMHM_LEARNSET(TMHM(TM01_FOCUS_PUNCH)
                                        | TMHM(TM03_WATER_PULSE)
                                        | TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM13_ICE_BEAM)
                                        | TMHM(TM15_HYPER_BEAM)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM22_SOLARBEAM)
                                        | TMHM(TM24_THUNDERBOLT)
                                        | TMHM(TM25_THUNDER)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM31_BRICK_BREAK)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM39_ROCK_TOMB)
                                        | TMHM(TM40_AERIAL_ACE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)),

    [SPECIES_ARCEUS]    = TMHM_LEARNSET(TMHM(TM04_CALM_MIND)
                                        | TMHM(TM06_TOXIC)
                                        | TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(TM11_SUNNY_DAY)
                                        | TMHM(TM12_TAUNT)
                                        | TMHM(TM16_LIGHT_SCREEN)
                                        | TMHM(TM17_PROTECT)
                                        | TMHM(TM18_RAIN_DANCE)
                                        | TMHM(TM20_SAFEGUARD)
                                        | TMHM(TM21_FRUSTRATION)
                                        | TMHM(TM27_RETURN)
                                        | TMHM(TM29_PSYCHIC)
                                        | TMHM(TM30_SHADOW_BALL)
                                        | TMHM(TM32_DOUBLE_TEAM)
                                        | TMHM(TM33_REFLECT)
                                        | TMHM(TM34_SHOCK_WAVE)
                                        | TMHM(TM41_TORMENT)
                                        | TMHM(TM42_FACADE)
                                        | TMHM(TM43_SECRET_POWER)
                                        | TMHM(TM44_REST)
                                        | TMHM(TM45_ATTRACT)
                                        | TMHM(TM48_SKILL_SWAP)
                                        | TMHM(TM49_SNATCH)
                                        | TMHM(HM05_FLASH)),

};*/

static const u8 sNoneTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBulbasaurTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sIvysaurTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVenusaurTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sCharmanderTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sCharmeleonTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sCharizardTMHMLearnset[] = 
{ 
    0xFF,
};

static const u8 sSquirtleTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sWartortleTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sBlastoiseTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sSnivyTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sServineTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sSerperiorTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sWeedleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKakunaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBeedrillTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPidgeyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPidgeottoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPidgeotTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAlolan_VulpixTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAlolan_NinetalesTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNoibatTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNoivernTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEkansTMHMLearnset[] =
{
    0xFF,
};

static const u8 sArbokTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPikachuTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRaichuTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSandshrewTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSandslashTMHMLearnset[] =
{
    0xFF,
};
static const u8 sNidoranMTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNidorinaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNidoqueenTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNidoranFTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNidorinoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNidokingTMHMLearnset[] =
{
    0xFF,
};

static const u8 sClefairyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sClefableTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVulpixTMHMLearnset[] =
{
    0xFF,
};

static const u8 sNinetalesTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFroakieTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFrogadierTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGreninjaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRowletTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDartrixTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDecidueyeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBidoofTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBibarelTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVenonatTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVenomothTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKarrablastTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEscavalierTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyruntTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyrantrumTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCombeeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVespiqueenTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPurrloinTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLiepardTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGrowlitheTMHMLearnset[] =
{
    0xFF,
};

static const u8 sArcanineTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPidoveTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTranquillTMHMLearnset[] =
{
    0xFF,
};

static const u8 sUnfezantTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAbraTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKadabraTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAlakazamTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScatterbugTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSpewpaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVivillonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVenipedeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWhirlipedeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScolipedeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTentacoolTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTentacruelTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEspurrTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMeowsticMTMHMLearnset[] =
{
    0xFF,
};
static const u8 sMeowsticFTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPonytaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRapidashTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVullabyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMandibuzzTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMagnemiteTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMagnetonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMagnezoneTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRotomTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLillipupTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHerdierTMHMLearnset[] =
{
    0xFF,
};

static const u8 sStoutlandTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMudbrayTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMudsdaleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDucklettTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSwannaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGastlyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHaunterTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGengarTMHMLearnset[] =
{
    0xFF,
};
static const u8 sOnixTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRuffletTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBraviaryTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKrabbyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKinglerTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScraggyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScraftyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCubchooTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBearticTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCuboneTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMarowakTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHitmonleeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHitmonchanTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBunnelbyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDiggersbyTMHMLearnset[] =
{
    0xFF,
};


static const u8 sRhyhornTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRhydonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sChanseyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTangelaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTangrowthTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBuizelTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFloatzelTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDrillburTMHMLearnset[] =
{
    0xFF,
};

static const u8 sExcadrillTMHMLearnset[] =
{
    0xFF,
};

static const u8 sStaryuTMHMLearnset[] =
{
    0xFF,
};

static const u8 sStarmieTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScytherTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLarvestaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVolcaronaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFoongusTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPinsirTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAmoongussTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMagikarpTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGyaradosTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLaprasTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDittoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEeveeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVaporeonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sJolteonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFlareonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPorygonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSkorupiTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDrapionTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSkrelpTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDragalgeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAerodactylTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSnorlaxTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGoomyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSliggooTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGoodraTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMewtwoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMewTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSnoverTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAbomasnowTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAbomacierTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCyndaquilTMHMLearnset[] =
{
    0xFF,
};

static const u8 sQuilavaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyphlosionTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBasculinTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWimpodTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGolisopodTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSentretTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFurretTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFerroseedTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFerrothornTMHMLearnset[] =
{
    0xFF,
};

static const u8 sClauncherTMHMLearnset[] =
{
    0xFF,
};

static const u8 sClawitzerTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSpinarakTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAriadosTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMimikyuTMHMLearnset[] =
{
    0xFF,
};

static const u8 sChinchouTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLanturnTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSewaddleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSwadloonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLeavannyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTogepiTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTogeticTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTogekissTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPhantumpTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMareepTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFlaaffyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAmpharosTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTrevenantTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMarillTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAzumarillTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGibleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGabiteTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGarchompTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHonedgeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDoubladeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAegislashTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScimiteyeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sJawguileTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBonded_RaichuTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWooperTMHMLearnset[] =
{
    0xFF,
};

static const u8 sQuagsireTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEspeonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sUmbreonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLeafeonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGlaceonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSylveonTMHMLearnset[] =
{
    0xFF,
};
static const u8 sFlabebeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFloetteTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFlorgesTMHMLearnset[] =
{
    0xFF,
};

static const u8 sJoltikTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGalvantulaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAudinoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWeavileTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSteelixTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPopplioTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBrionneTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPrimarinaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sScizorTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMedireignTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHeracrossTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSneaselTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTeddiursaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sUrsaringTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBronzorTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBronzongTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSwinubTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPiloswineTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMamoswineTMHMLearnset[] =
{
    0xFF,
};
static const u8 sZekromTMHMLearnset[] =
{
    0xFF,
};

static const u8 sShinxTMHMLearnset[] =
{
    0xFF,
};
static const u8 sLuxioTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLuxrayTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSkarmoryTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHoundourTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHoundoomTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHoundreadTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLitleoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPyroarTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPorygon2TMHMLearnset[] =
{
    0xFF,
};

static const u8 sReshiramTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSmeargleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyrogueTMHMLearnset[] =
{
    0xFF,
};

static const u8 sHitmontopTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGothitaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGothoritaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGothitelleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMewtwo_YTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBlisseyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRotom_FanTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRotom_MowTMHMLearnset[] =
{
    0xFF,
};
static const u8 sRotom_HeatTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLarvitarTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPupitarTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyranitarTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRotom_WashTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRotom_FreezeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCelebiTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTreeckoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGrovyleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSceptileTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTorchicTMHMLearnset[] =
{
    TMHM(TM17_PROTECT),
    TMHM(TM35_FLAMETHROWER),
    0xFF,
};

static const u8 sCombuskenTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBlazikenTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMudkipTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMarshtompTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSwampertTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPoochyenaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMightyenaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sZigzagoonTMHMLearnset[] = 
{
    0xFF,
};

static const u8 sLinooneTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPetililTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLilligantTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCottoneeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWhimsicottTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSolosisTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDuosionTMHMLearnset[] =
{
    0xFF,
};

static const u8 sReuniclusTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPanchamTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPangoroTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMienfooTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMienshaoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAmauraTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAurorusTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDialgaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sShelmetTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAccelgorTMHMLearnset[] =
{
    0xFF,
};

static const u8 sShroomishTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBreloomTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPalkiaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWingullTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPelipperTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRioluTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLucarioTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWailmerTMHMLearnset[] =
{
    0xFF,
};

static const u8 sWailordTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSkittyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDelcattyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRoggenrolaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBoldoreTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGigalithTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSandshrewATMHMLearnset[] =
{
    0xFF,
};

static const u8 sSandslashATMHMLearnset[] =
{
    0xFF,
};

static const u8 sSableyeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLitwickTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLampentTMHMLearnset[] =
{
    0xFF,
};

static const u8 sChandelureTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCorphishTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCrawdauntTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFeebasTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMiloticTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCarvanhaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSharpedoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTrapinchTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVibravaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFlygonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sDwebbleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCrustleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sElectrikeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sManectricTMHMLearnset[] =
{
    0xFF,
};

static const u8 sManethundrTMHMLearnset[] =
{
    0xFF,
};

static const u8 sPorygonZTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTynamoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEelektrikTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEelektrossTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCacneaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCacturneTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSnoruntTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGlalieTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFroslassTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTirtougaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCarracostaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSpoinkTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGrumpigTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSalanditTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSalazzleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMawileTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMedititeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMedichamTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSwabluTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAltariaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTimburrTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGurdurrTMHMLearnset[] =
{
    0xFF,
};

static const u8 sConkeldurrTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGiratinaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFletchlingTMHMLearnset[] =
{
    0xFF,
};

static const u8 sFletchindrTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTalonflameTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGiratina_OriginTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBonded_SerperiorTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKyuremTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMeloettaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBunearyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLopunnyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAzelfTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMespritTMHMLearnset[] =
{
    0xFF,
};

static const u8 sUxieTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAbsolTMHMLearnset[] =
{
    0xFF,
};

static const u8 sShuppetTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBanetteTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBansheetteTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAbsolomTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRelicanthTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAronTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLaironTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAggronTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAlolan_MarowakTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRhyperiorTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGalladeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLileepTMHMLearnset[] =
{
    0xFF,
};

static const u8 sCradilyTMHMLearnset[] =
{
    0xFF,
};

static const u8 sAnorithTMHMLearnset[] =
{
    0xFF,
};

static const u8 sArmaldoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRaltsTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKirliaTMHMLearnset[] =
{
    0xFF,
};
static const u8 sGardevoirTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBagonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sShelgonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSalamenceTMHMLearnset[] =
{
    0xFF,
};

static const u8 sBeldumTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMetangTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMetagrossTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRockruffTMHMLearnset[] =
{
    0xFF,
};

static const u8 sLycanrocTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKyogreTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGroudonTMHMLearnset[] =
{
    0xFF,
};

static const u8 sRayquazaTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKyurem_WhiteTMHMLearnset[] =
{
    0xFF,
};

static const u8 sKyurem_BlackTMHMLearnset[] =
{
    0xFF,
};

static const u8 sArceusTMHMLearnset[] =
{
    0xFF,
};

const u8 *const gTMHMLearnsets[] =
{
    [SPECIES_NONE] = sNoneTMHMLearnset,
    [SPECIES_BULBASAUR] = sBulbasaurTMHMLearnset,
    [SPECIES_IVYSAUR] = sIvysaurTMHMLearnset,
    [SPECIES_VENUSAUR] = sVenusaurTMHMLearnset,
    [SPECIES_CHARMANDER] = sCharmanderTMHMLearnset,
    [SPECIES_CHARMELEON] = sCharmeleonTMHMLearnset,
    [SPECIES_CHARIZARD] = sCharizardTMHMLearnset,
    [SPECIES_SQUIRTLE] = sSquirtleTMHMLearnset,
    [SPECIES_WARTORTLE] = sWartortleTMHMLearnset,
    [SPECIES_BLASTOISE] = sBlastoiseTMHMLearnset,
    [SPECIES_SNIVY] = sSnivyTMHMLearnset,
    [SPECIES_SERVINE] = sServineTMHMLearnset,
    [SPECIES_SERPERIOR] = sSerperiorTMHMLearnset,
    [SPECIES_WEEDLE] = sWeedleTMHMLearnset,
    [SPECIES_KAKUNA] = sKakunaTMHMLearnset,
    [SPECIES_BEEDRILL] = sBeedrillTMHMLearnset,
    [SPECIES_PIDGEY] = sPidgeyTMHMLearnset,
    [SPECIES_PIDGEOTTO] = sPidgeottoTMHMLearnset,
    [SPECIES_PIDGEOT] = sPidgeotTMHMLearnset,
    [SPECIES_VULPIX_A] = sAlolan_VulpixTMHMLearnset,
    [SPECIES_NINETALES_A] = sAlolan_NinetalesTMHMLearnset,
    [SPECIES_NOIBAT] = sNoibatTMHMLearnset,
    [SPECIES_NOIVERN] = sNoivernTMHMLearnset,
    [SPECIES_EKANS] = sEkansTMHMLearnset,
    [SPECIES_ARBOK] = sArbokTMHMLearnset,
    [SPECIES_PIKACHU] = sPikachuTMHMLearnset,
    [SPECIES_RAICHU] = sRaichuTMHMLearnset,
    [SPECIES_SANDSHREW] = sSandshrewTMHMLearnset,
    [SPECIES_SANDSLASH] = sSandslashTMHMLearnset,
    [SPECIES_NIDORAN_F] = sNidoranFTMHMLearnset,
    [SPECIES_NIDORINA] = sNidorinaTMHMLearnset,
    [SPECIES_NIDOQUEEN] = sNidoqueenTMHMLearnset,
    [SPECIES_NIDORAN_M] = sNidoranMTMHMLearnset,
    [SPECIES_NIDORINO] = sNidorinoTMHMLearnset,
    [SPECIES_NIDOKING] = sNidokingTMHMLearnset,
    [SPECIES_CLEFAIRY] = sClefairyTMHMLearnset,
    [SPECIES_CLEFABLE] = sClefableTMHMLearnset,
    [SPECIES_VULPIX] = sVulpixTMHMLearnset,
    [SPECIES_NINETALES] = sNinetalesTMHMLearnset,
    [SPECIES_FROAKIE] = sFroakieTMHMLearnset,
    [SPECIES_FROGADIER] = sFrogadierTMHMLearnset,
    [SPECIES_GRENINJA] = sGreninjaTMHMLearnset,
    [SPECIES_ROWLET] = sRowletTMHMLearnset,
    [SPECIES_DARTRIX] = sDartrixTMHMLearnset,
    [SPECIES_DECIDUEYE] = sDecidueyeTMHMLearnset,
    [SPECIES_BIDOOF] = sBidoofTMHMLearnset,
    [SPECIES_BIBAREL] = sBibarelTMHMLearnset,
    [SPECIES_VENONAT] = sVenonatTMHMLearnset,
    [SPECIES_VENOMOTH] = sVenomothTMHMLearnset,
    [SPECIES_KARRABLAST] = sKarrablastTMHMLearnset,
    [SPECIES_ESCAVALIER] = sEscavalierTMHMLearnset,
    [SPECIES_TYRUNT] = sTyruntTMHMLearnset,
    [SPECIES_TYRANTRUM] = sTyrantrumTMHMLearnset,
    [SPECIES_COMBEE] = sCombeeTMHMLearnset,
    [SPECIES_VESPIQUEEN] = sVespiqueenTMHMLearnset,
    [SPECIES_PURRLOIN] = sPurrloinTMHMLearnset,
    [SPECIES_LIEPARD] = sLiepardTMHMLearnset,
    [SPECIES_GROWLITHE] = sGrowlitheTMHMLearnset,
    [SPECIES_ARCANINE] = sArcanineTMHMLearnset,
    [SPECIES_PIDOVE] = sPidoveTMHMLearnset,
    [SPECIES_TRANQUILL] = sTranquillTMHMLearnset,
    [SPECIES_UNFEZANT] = sUnfezantTMHMLearnset,
    [SPECIES_ABRA] = sAbraTMHMLearnset,
    [SPECIES_KADABRA] = sKadabraTMHMLearnset,
    [SPECIES_ALAKAZAM] = sAlakazamTMHMLearnset,
    [SPECIES_SCATTERBUG] = sScatterbugTMHMLearnset,
    [SPECIES_SPEWPA] = sSpewpaTMHMLearnset,
    [SPECIES_VIVILLON] = sVivillonTMHMLearnset,
    [SPECIES_VENIPEDE] = sVenipedeTMHMLearnset,
    [SPECIES_WHIRLIPEDE] = sWhirlipedeTMHMLearnset,
    [SPECIES_SCOLIPEDE] = sScolipedeTMHMLearnset,
    [SPECIES_TENTACOOL] = sTentacoolTMHMLearnset,
    [SPECIES_TENTACRUEL] = sTentacruelTMHMLearnset,
    [SPECIES_ESPURR] = sEspurrTMHMLearnset,
    [SPECIES_MEOWSTIC_M] = sMeowsticMTMHMLearnset,
    [SPECIES_MEOWSTIC_F] = sMeowsticFTMHMLearnset,
    [SPECIES_PONYTA] = sPonytaTMHMLearnset,
    [SPECIES_RAPIDASH] = sRapidashTMHMLearnset,
    [SPECIES_VULLABY] = sVullabyTMHMLearnset,
    [SPECIES_MANDIBUZZ] = sMandibuzzTMHMLearnset,
    [SPECIES_MAGNEMITE] = sMagnemiteTMHMLearnset,
    [SPECIES_MAGNETON] = sMagnetonTMHMLearnset,
    [SPECIES_MAGNEZONE] = sMagnezoneTMHMLearnset,
    [SPECIES_ROTOM] = sRotomTMHMLearnset,
    [SPECIES_LILLIPUP] = sLillipupTMHMLearnset,
    [SPECIES_HERDIER] = sHerdierTMHMLearnset,
    [SPECIES_STOUTLAND] = sStoutlandTMHMLearnset,
    [SPECIES_MUDBRAY] = sMudbrayTMHMLearnset,
    [SPECIES_MUDSDALE] = sMudsdaleTMHMLearnset,
    [SPECIES_DUCKLETT] = sDucklettTMHMLearnset,
    [SPECIES_SWANNA] = sSwannaTMHMLearnset,
    [SPECIES_GASTLY] = sGastlyTMHMLearnset,
    [SPECIES_HAUNTER] = sHaunterTMHMLearnset,
    [SPECIES_GENGAR] = sGengarTMHMLearnset,
    [SPECIES_ONIX] = sOnixTMHMLearnset,
    [SPECIES_RUFFLET] = sRuffletTMHMLearnset,
    [SPECIES_BRAVIARY] = sBraviaryTMHMLearnset,
    [SPECIES_KRABBY] = sKrabbyTMHMLearnset,
    [SPECIES_KINGLER] = sKinglerTMHMLearnset,
    [SPECIES_SCRAGGY] = sScraggyTMHMLearnset,
    [SPECIES_SCRAFTY] = sScraftyTMHMLearnset,
    [SPECIES_CUBCHOO] = sCubchooTMHMLearnset,
    [SPECIES_BEARTIC] = sBearticTMHMLearnset,
    [SPECIES_CUBONE] = sCuboneTMHMLearnset,
    [SPECIES_MAROWAK] = sMarowakTMHMLearnset,
    [SPECIES_HITMONLEE] = sHitmonleeTMHMLearnset,
    [SPECIES_HITMONCHAN] = sHitmonchanTMHMLearnset,
    [SPECIES_BUNNELBY] = sBunnelbyTMHMLearnset,
    [SPECIES_DIGGERSBY] = sDiggersbyTMHMLearnset,
    [SPECIES_RHYHORN] = sRhyhornTMHMLearnset,
    [SPECIES_RHYDON] = sRhydonTMHMLearnset,
    [SPECIES_CHANSEY] = sChanseyTMHMLearnset,
    [SPECIES_TANGELA] = sTangelaTMHMLearnset,
    [SPECIES_TANGROWTH] = sTangrowthTMHMLearnset,
    [SPECIES_BUIZEL] = sBuizelTMHMLearnset,
    [SPECIES_FLOATZEL] = sFloatzelTMHMLearnset,
    [SPECIES_DRILLBUR] = sDrillburTMHMLearnset,
    [SPECIES_EXCADRILL] = sExcadrillTMHMLearnset,
    [SPECIES_STARYU] = sStaryuTMHMLearnset,
    [SPECIES_STARMIE] = sStarmieTMHMLearnset,
    [SPECIES_SCYTHER] = sScytherTMHMLearnset,
    [SPECIES_LARVESTA] = sLarvestaTMHMLearnset,
    [SPECIES_VOLCARONA] = sVolcaronaTMHMLearnset,
    [SPECIES_FOONGUS] = sFoongusTMHMLearnset,
    [SPECIES_PINSIR] = sPinsirTMHMLearnset,
    [SPECIES_AMOONGUSS] = sAmoongussTMHMLearnset,
    [SPECIES_MAGIKARP] = sMagikarpTMHMLearnset,
    [SPECIES_GYARADOS] = sGyaradosTMHMLearnset,
    [SPECIES_LAPRAS] = sLaprasTMHMLearnset,
    [SPECIES_DITTO] = sDittoTMHMLearnset,
    [SPECIES_EEVEE] = sEeveeTMHMLearnset,
    [SPECIES_VAPOREON] = sVaporeonTMHMLearnset,
    [SPECIES_JOLTEON] = sJolteonTMHMLearnset,
    [SPECIES_FLAREON] = sFlareonTMHMLearnset,
    [SPECIES_PORYGON] = sPorygonTMHMLearnset,
    [SPECIES_SKORUPI] = sSkorupiTMHMLearnset,
    [SPECIES_DRAPION] = sDrapionTMHMLearnset,
    [SPECIES_SKRELP] = sSkrelpTMHMLearnset,
    [SPECIES_DRAGALGE] = sDragalgeTMHMLearnset,
    [SPECIES_AERODACTYL] = sAerodactylTMHMLearnset,
    [SPECIES_SNORLAX] = sSnorlaxTMHMLearnset,
    [SPECIES_GOOMY] = sGoomyTMHMLearnset,
    [SPECIES_SLIGGOO] = sSliggooTMHMLearnset,
    [SPECIES_GOODRA] = sGoodraTMHMLearnset,
    [SPECIES_MEWTWO] = sMewtwoTMHMLearnset,
    [SPECIES_MEW] = sMewTMHMLearnset,
    [SPECIES_SNOVER] = sSnoverTMHMLearnset,
    [SPECIES_ABOMASNOW] = sAbomasnowTMHMLearnset,
    [SPECIES_ABOMACIER] = sAbomacierTMHMLearnset,
    [SPECIES_CYNDAQUIL] = sCyndaquilTMHMLearnset,
    [SPECIES_QUILAVA] = sQuilavaTMHMLearnset,
    [SPECIES_TYPHLOSION] = sTyphlosionTMHMLearnset,
    [SPECIES_BASCULIN] = sBasculinTMHMLearnset,
    [SPECIES_WIMPOD] = sWimpodTMHMLearnset,
    [SPECIES_GOLISOPOD] = sGolisopodTMHMLearnset,
    [SPECIES_SENTRET] = sSentretTMHMLearnset,
    [SPECIES_FURRET] = sFurretTMHMLearnset,
    [SPECIES_FERROSEED] = sFerroseedTMHMLearnset,
    [SPECIES_FERROTHORN] = sFerrothornTMHMLearnset,
    [SPECIES_CLAUNCHER] = sClauncherTMHMLearnset,
    [SPECIES_CLAWITZER] = sClawitzerTMHMLearnset,
    [SPECIES_SPINARAK] = sSpinarakTMHMLearnset,
    [SPECIES_ARIADOS] = sAriadosTMHMLearnset,
    [SPECIES_MIMIKYU] = sMimikyuTMHMLearnset,
    [SPECIES_CHINCHOU] = sChinchouTMHMLearnset,
    [SPECIES_LANTURN] = sLanturnTMHMLearnset,
    [SPECIES_SEWADDLE] = sSewaddleTMHMLearnset,
    [SPECIES_SWADLOON] = sSwadloonTMHMLearnset,
    [SPECIES_LEAVANNY] = sLeavannyTMHMLearnset,
    [SPECIES_TOGEPI] = sTogepiTMHMLearnset,
    [SPECIES_TOGETIC] = sTogeticTMHMLearnset,
    [SPECIES_TOGEKISS] = sTogekissTMHMLearnset,
    [SPECIES_PHANTUMP] = sPhantumpTMHMLearnset,
    [SPECIES_MAREEP] = sMareepTMHMLearnset,
    [SPECIES_FLAAFFY] = sFlaaffyTMHMLearnset,
    [SPECIES_AMPHAROS] = sAmpharosTMHMLearnset,
    [SPECIES_TREVENANT] = sTrevenantTMHMLearnset,
    [SPECIES_MARILL] = sMarillTMHMLearnset,
    [SPECIES_AZUMARILL] = sAzumarillTMHMLearnset,
    [SPECIES_GIBLE] = sGibleTMHMLearnset,
    [SPECIES_GABITE] = sGabiteTMHMLearnset,
    [SPECIES_GARCHOMP] = sGarchompTMHMLearnset,
    [SPECIES_HONEDGE] = sHonedgeTMHMLearnset,
    [SPECIES_DOUBLADE] = sDoubladeTMHMLearnset,
    [SPECIES_AEGISLASH] = sAegislashTMHMLearnset,
    [SPECIES_SCIMITEYE] = sScimiteyeTMHMLearnset,
    [SPECIES_JAWGUILE] = sJawguileTMHMLearnset,
    [SPECIES_BONDED_RAICHU] = sBonded_RaichuTMHMLearnset,
    [SPECIES_WOOPER] = sWooperTMHMLearnset,
    [SPECIES_QUAGSIRE] = sQuagsireTMHMLearnset,
    [SPECIES_ESPEON] = sEspeonTMHMLearnset,
    [SPECIES_UMBREON] = sUmbreonTMHMLearnset,
    [SPECIES_LEAFEON] = sLeafeonTMHMLearnset,
    [SPECIES_GLACEON] = sGlaceonTMHMLearnset,
    [SPECIES_SYLVEON] = sSylveonTMHMLearnset,
    [SPECIES_FLABEBE] = sFlabebeTMHMLearnset,
    [SPECIES_FLOETTE] = sFloetteTMHMLearnset,
    [SPECIES_FLORGES] = sFlorgesTMHMLearnset,
    [SPECIES_JOLTIK] = sJoltikTMHMLearnset,
    [SPECIES_GALVANTULA] = sGalvantulaTMHMLearnset,
    [SPECIES_AUDINO] = sAudinoTMHMLearnset,
    [SPECIES_WEAVILE] = sWeavileTMHMLearnset,
    [SPECIES_STEELIX] = sSteelixTMHMLearnset,
    [SPECIES_POPPLIO] = sPopplioTMHMLearnset,
    [SPECIES_BRIONNE] = sBrionneTMHMLearnset,
    [SPECIES_PRIMARINA] = sPrimarinaTMHMLearnset,
    [SPECIES_SCIZOR] = sScizorTMHMLearnset,
    [SPECIES_MEDIREIGN] = sMedireignTMHMLearnset,
    [SPECIES_HERACROSS] = sHeracrossTMHMLearnset,
    [SPECIES_SNEASEL] = sSneaselTMHMLearnset,
    [SPECIES_TEDDIURSA] = sTeddiursaTMHMLearnset,
    [SPECIES_URSARING] = sUrsaringTMHMLearnset,
    [SPECIES_BRONZOR] = sBronzorTMHMLearnset,
    [SPECIES_BRONZONG] = sBronzongTMHMLearnset,
    [SPECIES_SWINUB] = sSwinubTMHMLearnset,
    [SPECIES_PILOSWINE] = sPiloswineTMHMLearnset,
    [SPECIES_MAMOSWINE] = sMamoswineTMHMLearnset,
    [SPECIES_ZEKROM] = sZekromTMHMLearnset,
    [SPECIES_SHINX] = sShinxTMHMLearnset,
    [SPECIES_LUXIO] = sLuxioTMHMLearnset,
    [SPECIES_LUXRAY] = sLuxrayTMHMLearnset,
    [SPECIES_SKARMORY] = sSkarmoryTMHMLearnset,
    [SPECIES_HOUNDOUR] = sHoundourTMHMLearnset,
    [SPECIES_HOUNDOOM] = sHoundoomTMHMLearnset,
    [SPECIES_HOUNDREAD] = sHoundreadTMHMLearnset,
    [SPECIES_LITLEO] = sLitleoTMHMLearnset,
    [SPECIES_PYROAR] = sPyroarTMHMLearnset,
    [SPECIES_PORYGON2] = sPorygon2TMHMLearnset,
    [SPECIES_RESHIRAM] = sReshiramTMHMLearnset,
    [SPECIES_SMEARGLE] = sSmeargleTMHMLearnset,
    [SPECIES_TYROGUE] = sTyrogueTMHMLearnset,
    [SPECIES_HITMONTOP] = sHitmontopTMHMLearnset,
    [SPECIES_GOTHITA] = sGothitaTMHMLearnset,
    [SPECIES_GOTHORITA] = sGothoritaTMHMLearnset,
    [SPECIES_GOTHITELLE] = sGothitelleTMHMLearnset,
    [SPECIES_BONDED_MEWTWO_Y] = sMewtwo_YTMHMLearnset,
    [SPECIES_BLISSEY] = sBlisseyTMHMLearnset,
    [SPECIES_ROTOM_FAN] = sRotom_FanTMHMLearnset,
    [SPECIES_ROTOM_MOW] = sRotom_MowTMHMLearnset,
    [SPECIES_ROTOM_HEAT] = sRotom_HeatTMHMLearnset,
    [SPECIES_LARVITAR] = sLarvitarTMHMLearnset,
    [SPECIES_PUPITAR] = sPupitarTMHMLearnset,
    [SPECIES_TYRANITAR] = sTyranitarTMHMLearnset,
    [SPECIES_ROTOM_WASH] = sRotom_WashTMHMLearnset,
    [SPECIES_ROTOM_FREEZE] = sRotom_FreezeTMHMLearnset,
    [SPECIES_CELEBI] = sCelebiTMHMLearnset,
    [SPECIES_TREECKO] = sTreeckoTMHMLearnset,
    [SPECIES_GROVYLE] = sGrovyleTMHMLearnset,
    [SPECIES_SCEPTILE] = sSceptileTMHMLearnset,
    [SPECIES_TORCHIC] = sTorchicTMHMLearnset,
    [SPECIES_COMBUSKEN] = sCombuskenTMHMLearnset,
    [SPECIES_BLAZIKEN] = sBlazikenTMHMLearnset,
    [SPECIES_MUDKIP] = sMudkipTMHMLearnset,
    [SPECIES_MARSHTOMP] = sMarshtompTMHMLearnset,
    [SPECIES_SWAMPERT] = sSwampertTMHMLearnset,
    [SPECIES_POOCHYENA] = sPoochyenaTMHMLearnset,
    [SPECIES_MIGHTYENA] = sMightyenaTMHMLearnset,
    [SPECIES_ZIGZAGOON] = sZigzagoonTMHMLearnset,
    [SPECIES_LINOONE] = sLinooneTMHMLearnset,
    [SPECIES_PETILIL] = sPetililTMHMLearnset,
    [SPECIES_LILLIGANT] = sLilligantTMHMLearnset,
    [SPECIES_COTTONEE] = sCottoneeTMHMLearnset,
    [SPECIES_WHIMSICOTT] = sWhimsicottTMHMLearnset,
    [SPECIES_SOLOSIS] = sSolosisTMHMLearnset,
    [SPECIES_DUOSION] = sDuosionTMHMLearnset,
    [SPECIES_REUNICLUS] = sReuniclusTMHMLearnset,
    [SPECIES_PANCHAM] = sPanchamTMHMLearnset,
    [SPECIES_PANGORO] = sPangoroTMHMLearnset,
    [SPECIES_MIENFOO] = sMienfooTMHMLearnset,
    [SPECIES_MIENSHAO] = sMienshaoTMHMLearnset,
    [SPECIES_AMAURA] = sAmauraTMHMLearnset,
    [SPECIES_AURORUS] = sAurorusTMHMLearnset,
    [SPECIES_DIALGA] = sDialgaTMHMLearnset,
    [SPECIES_SHELMET] = sShelmetTMHMLearnset,
    [SPECIES_ACCELGOR] = sAccelgorTMHMLearnset,
    [SPECIES_SHROOMISH] = sShroomishTMHMLearnset,
    [SPECIES_BRELOOM] = sBreloomTMHMLearnset,
    [SPECIES_PALKIA] = sPalkiaTMHMLearnset,
    [SPECIES_WINGULL] = sWingullTMHMLearnset,
    [SPECIES_PELIPPER] = sPelipperTMHMLearnset,
    [SPECIES_RIOLU] = sRioluTMHMLearnset,
    [SPECIES_LUCARIO] = sLucarioTMHMLearnset,
    [SPECIES_WAILMER] = sWailmerTMHMLearnset,
    [SPECIES_WAILORD] = sWailordTMHMLearnset,
    [SPECIES_SKITTY] = sSkittyTMHMLearnset,
    [SPECIES_DELCATTY] = sDelcattyTMHMLearnset,
    [SPECIES_ROGGENROLA] = sRoggenrolaTMHMLearnset,
    [SPECIES_BOLDORE] = sBoldoreTMHMLearnset,
    [SPECIES_GIGALITH] = sGigalithTMHMLearnset,
    [SPECIES_SANDSHREW_A] = sSandshrewATMHMLearnset,
    [SPECIES_SANDSLASH_A] = sSandslashATMHMLearnset,
    [SPECIES_SABLEYE] = sSableyeTMHMLearnset,
    [SPECIES_LITWICK] = sLitwickTMHMLearnset,
    [SPECIES_LAMPENT] = sLampentTMHMLearnset,
    [SPECIES_CHANDELURE] = sChandelureTMHMLearnset,
    [SPECIES_CORPHISH] = sCorphishTMHMLearnset,
    [SPECIES_CRAWDAUNT] = sCrawdauntTMHMLearnset,
    [SPECIES_FEEBAS] = sFeebasTMHMLearnset,
    [SPECIES_MILOTIC] = sMiloticTMHMLearnset,
    [SPECIES_CARVANHA] = sCarvanhaTMHMLearnset,
    [SPECIES_SHARPEDO] = sSharpedoTMHMLearnset,
    [SPECIES_TRAPINCH] = sTrapinchTMHMLearnset,
    [SPECIES_VIBRAVA] = sVibravaTMHMLearnset,
    [SPECIES_FLYGON] = sFlygonTMHMLearnset,
    [SPECIES_DWEBBLE] = sDwebbleTMHMLearnset,
    [SPECIES_CRUSTLE] = sCrustleTMHMLearnset,
    [SPECIES_ELECTRIKE] = sElectrikeTMHMLearnset,
    [SPECIES_MANECTRIC] = sManectricTMHMLearnset,
    [SPECIES_MANETHUNDR] = sManethundrTMHMLearnset,
    [SPECIES_PORYGONZ] = sPorygonZTMHMLearnset,
    [SPECIES_TYNAMO] = sTynamoTMHMLearnset,
    [SPECIES_EELEKTRIK] = sEelektrikTMHMLearnset,
    [SPECIES_EELEKTROSS] = sEelektrossTMHMLearnset,
    [SPECIES_CACNEA] = sCacneaTMHMLearnset,
    [SPECIES_CACTURNE] = sCacturneTMHMLearnset,
    [SPECIES_SNORUNT] = sSnoruntTMHMLearnset,
    [SPECIES_GLALIE] = sGlalieTMHMLearnset,
    [SPECIES_FROSLASS] = sFroslassTMHMLearnset,
    [SPECIES_TIRTOUGA] = sTirtougaTMHMLearnset,
    [SPECIES_CARRACOSTA] = sCarracostaTMHMLearnset,
    [SPECIES_SPOINK] = sSpoinkTMHMLearnset,
    [SPECIES_GRUMPIG] = sGrumpigTMHMLearnset,
    [SPECIES_SALANDIT] = sSalanditTMHMLearnset,
    [SPECIES_SALAZZLE] = sSalazzleTMHMLearnset,
    [SPECIES_MAWILE] = sMawileTMHMLearnset,
    [SPECIES_MEDITITE] = sMedititeTMHMLearnset,
    [SPECIES_MEDICHAM] = sMedichamTMHMLearnset,
    [SPECIES_SWABLU] = sSwabluTMHMLearnset,
    [SPECIES_ALTARIA] = sAltariaTMHMLearnset,
    [SPECIES_TIMBURR] = sTimburrTMHMLearnset,
    [SPECIES_GURDURR] = sGurdurrTMHMLearnset,
    [SPECIES_CONKELDURR] = sConkeldurrTMHMLearnset,
    [SPECIES_GIRATINA] = sGiratinaTMHMLearnset,
    [SPECIES_FLETCHLING] = sFletchlingTMHMLearnset,
    [SPECIES_FLETCHINDR] = sFletchindrTMHMLearnset,
    [SPECIES_TALONFLAME] = sTalonflameTMHMLearnset,
    [SPECIES_GIRATINA_ORIGIN] = sGiratina_OriginTMHMLearnset,
    [SPECIES_BONDED_SERPERIOR] = sBonded_SerperiorTMHMLearnset,
    [SPECIES_KYUREM] = sKyuremTMHMLearnset,
    [SPECIES_MELOETTA] = sMeloettaTMHMLearnset,
    [SPECIES_BUNEARY] = sBunearyTMHMLearnset,
    [SPECIES_LOPUNNY] = sLopunnyTMHMLearnset,
    [SPECIES_AZELF] = sAzelfTMHMLearnset,
    [SPECIES_MESPRIT] = sMespritTMHMLearnset,
    [SPECIES_UXIE] = sUxieTMHMLearnset,
    [SPECIES_ABSOL] = sAbsolTMHMLearnset,
    [SPECIES_SHUPPET] = sShuppetTMHMLearnset,
    [SPECIES_BANETTE] = sBanetteTMHMLearnset,
    [SPECIES_BANSHEETTE] = sBansheetteTMHMLearnset,
    [SPECIES_ABSOLOM] = sAbsolomTMHMLearnset,
    [SPECIES_RELICANTH] = sRelicanthTMHMLearnset,
    [SPECIES_ARON] = sAronTMHMLearnset,
    [SPECIES_LAIRON] = sLaironTMHMLearnset,
    [SPECIES_AGGRON] = sAggronTMHMLearnset,
    [SPECIES_ALOLAN_MAROWAK] = sAlolan_MarowakTMHMLearnset,
    [SPECIES_RHYPERIOR] = sRhyperiorTMHMLearnset,
    [SPECIES_GALLADE] = sGalladeTMHMLearnset,
    [SPECIES_LILEEP] = sLileepTMHMLearnset,
    [SPECIES_CRADILY] = sCradilyTMHMLearnset,
    [SPECIES_ANORITH] = sAnorithTMHMLearnset,
    [SPECIES_ARMALDO] = sArmaldoTMHMLearnset,
    [SPECIES_RALTS] = sRaltsTMHMLearnset,
    [SPECIES_KIRLIA] = sKirliaTMHMLearnset,
    [SPECIES_GARDEVOIR] = sGardevoirTMHMLearnset,
    [SPECIES_BAGON] = sBagonTMHMLearnset,
    [SPECIES_SHELGON] = sShelgonTMHMLearnset,
    [SPECIES_SALAMENCE] = sSalamenceTMHMLearnset,
    [SPECIES_BELDUM] = sBeldumTMHMLearnset,
    [SPECIES_METANG] = sMetangTMHMLearnset,
    [SPECIES_METAGROSS] = sMetagrossTMHMLearnset,
    [SPECIES_ROCKRUFF] = sRockruffTMHMLearnset,
    [SPECIES_LYCANROC] = sLycanrocTMHMLearnset,
    [SPECIES_KYOGRE] = sKyogreTMHMLearnset,
    [SPECIES_GROUDON] = sGroudonTMHMLearnset,
    [SPECIES_RAYQUAZA] = sRayquazaTMHMLearnset,
    [SPECIES_KYUREM_WHITE] = sKyurem_WhiteTMHMLearnset,
    [SPECIES_KYUREM_BLACK] = sKyurem_BlackTMHMLearnset,
    [SPECIES_ARCEUS] = sArceusTMHMLearnset,
    [SPECIES_BONDED_ALTARIA] = sAltariaTMHMLearnset,
    [SPECIES_BONDED_AMPHAROS] = sAmpharosTMHMLearnset,
    [SPECIES_BONDED_AUDINO] = sAudinoTMHMLearnset,
    [SPECIES_BONDED_BEEDRILL] = sBeedrillTMHMLearnset,
    [SPECIES_BONDED_BLASTOISE] = sBlastoiseTMHMLearnset,
    [SPECIES_BONDED_BLAZIKEN] = sBlazikenTMHMLearnset,
    [SPECIES_BONDED_CHARIZARD] = sCharizardTMHMLearnset,
    [SPECIES_BONDED_GALLADE] = sGalladeTMHMLearnset,
    [SPECIES_BONDED_GARCHOMP] = sGarchompTMHMLearnset,
    [SPECIES_BONDED_GARDEVOIR] = sGardevoirTMHMLearnset,
    [SPECIES_BONDED_GENGAR] = sGengarTMHMLearnset,
    [SPECIES_BONDED_GLALIE] = sGlalieTMHMLearnset,
    [SPECIES_BONDED_GYARADOS] = sGyaradosTMHMLearnset,
    [SPECIES_BONDED_HERACROSS] = sHeracrossTMHMLearnset,
    [SPECIES_BONDED_LOPUNNY] = sLopunnyTMHMLearnset,
    [SPECIES_BONDED_LUCARIO] = sLucarioTMHMLearnset,
    [SPECIES_BONDED_METAGROSS] = sMetagrossTMHMLearnset,
    [SPECIES_BONDED_PIDGEOT] = sPidgeotTMHMLearnset,
    [SPECIES_BONDED_PINSIR] = sPinsirTMHMLearnset,
    [SPECIES_BONDED_MEWTWO_X] = sMewtwoTMHMLearnset,
    [SPECIES_BONDED_SALAMENCE] = sSalamenceTMHMLearnset,
    [SPECIES_BONDED_SCEPTILE] = sSceptileTMHMLearnset,
    [SPECIES_BONDED_SCIZOR] = sScizorTMHMLearnset,
    [SPECIES_BONDED_STEELIX] = sSteelixTMHMLearnset,
    [SPECIES_BONDED_SWAMPERT] = sSwampertTMHMLearnset,
    [SPECIES_BONDED_TYRANITAR] = sTyranitarTMHMLearnset,
    [SPECIES_BONDED_VENUSAUR] = sVenusaurTMHMLearnset,
};