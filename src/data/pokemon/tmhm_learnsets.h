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
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE), 
    0xFF,
};

static const u8 sIvysaurTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVenusaurTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCharmanderTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sCharmeleonTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCharizardTMHMLearnset[] = 
{ 
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSquirtleTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWartortleTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBlastoiseTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSnivyTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sServineTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSerperiorTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
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
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPidgeyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPidgeottoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPidgeotTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAlolan_VulpixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,

};

static const u8 sAlolan_NinetalesTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNoibatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM62_ACROBATICS),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM76_FLY),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNoivernTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sEkansTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sArbokTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPikachuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRaichuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSandshrewTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSandslashTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sNidoranMTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNidorinaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNidoqueenTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNidoranFTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNidorinoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNidokingTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sClefairyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sClefableTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVulpixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sNinetalesTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFroakieTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFrogadierTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGreninjaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRowletTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDartrixTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDecidueyeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM62_ACROBATICS),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBidoofTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF, };

static const u8 sBibarelTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVenonatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVenomothTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKarrablastTMHMLearnset[] =
{   
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sEscavalierTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTyruntTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTyrantrumTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCombeeTMHMLearnset[] =
{
    0xFF,
};

static const u8 sVespiqueenTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPurrloinTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLiepardTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGrowlitheTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sArcanineTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPidoveTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTranquillTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sUnfezantTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAbraTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKadabraTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAlakazamTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sScatterbugTMHMLearnset[] =
{
    0xFF,
};

static const u8 sSpewpaTMHMLearnset[] =
{
    TMHM(TM17_PROTECT),
    0xFF,
};

static const u8 sVivillonTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVenipedeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWhirlipedeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sScolipedeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTentacoolTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTentacruelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sEspurrTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMeowsticMTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sMeowsticFTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPonytaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRapidashTMHMLearnset[] =
{
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVullabyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMandibuzzTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMagnemiteTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMagnetonTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMagnezoneTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRotomTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLillipupTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHerdierTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),   
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sStoutlandTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMudbrayTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMudsdaleTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDucklettTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM55_SCALD),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSwannaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,   
};

static const u8 sGastlyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHaunterTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGengarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sOnixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRuffletTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBraviaryTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM58_SKY_DROP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKrabbyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKinglerTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sScraggyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sScraftyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCubchooTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBearticTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCuboneTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMarowakTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHitmonleeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHitmonchanTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBunnelbyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDiggersbyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};


static const u8 sRhyhornTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRhydonTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sChanseyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTangelaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTangrowthTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBuizelTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFloatzelTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDrillburTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sExcadrillTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sStaryuTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sStarmieTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sScytherTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLarvestaTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVolcaronaTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFoongusTMHMLearnset[] =
{

    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM66_PAYBACK),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPinsirTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAmoongussTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMagikarpTMHMLearnset[] =
{
    0xFF,
};

static const u8 sGyaradosTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLaprasTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDittoTMHMLearnset[] =
{
    0xFF,
};

static const u8 sEeveeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVaporeonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sJolteonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFlareonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPorygonTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSkorupiTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDrapionTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSkrelpTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDragalgeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAerodactylTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSnorlaxTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGoomyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSliggooTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGoodraTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMewtwoTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMewTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSnoverTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAbomasnowTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAbomacierTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCyndaquilTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sQuilavaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTyphlosionTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBasculinTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWimpodTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGolisopodTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSentretTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFurretTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFerroseedTMHMLearnset[] =
{    
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFerrothornTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sClauncherTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sClawitzerTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSpinarakTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAriadosTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMimikyuTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF, };

static const u8 sChinchouTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLanturnTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSewaddleTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM66_PAYBACK),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSwadloonTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM66_PAYBACK),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLeavannyTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTogepiTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTogeticTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM56_FLING),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTogekissTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPhantumpTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMareepTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFlaaffyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAmpharosTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTrevenantTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMarillTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAzumarillTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
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
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),    
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sJawguileTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBonded_RaichuTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWooperTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM78_BULLDOZE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sQuagsireTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sEspeonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sUmbreonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLeafeonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGlaceonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSylveonTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sFlabebeTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFloetteTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFlorgesTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sJoltikTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE), 
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sGalvantulaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAudinoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWeavileTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSteelixTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPopplioTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM62_ACROBATICS),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBrionneTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM62_ACROBATICS),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF, };

static const u8 sPrimarinaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM55_SCALD),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sScizorTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMedireignTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHeracrossTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSneaselTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTeddiursaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sUrsaringTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBronzorTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBronzongTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSwinubTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPiloswineTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMamoswineTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sZekromTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sShinxTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sLuxioTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLuxrayTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSkarmoryTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHoundourTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHoundoomTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHoundreadTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLitleoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM66_PAYBACK),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPyroarTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPorygon2TMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sReshiramTMHMLearnset[] =
{

    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSmeargleTMHMLearnset[] =
{
    0xFF,
};

static const u8 sTyrogueTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sHitmontopTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGothitaTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGothoritaTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGothitelleTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMewtwo_YTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBlisseyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRotom_FanTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRotom_MowTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sRotom_HeatTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLarvitarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};


static const u8 sPupitarTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM66_PAYBACK),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTyranitarTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRotom_WashTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRotom_FreezeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCelebiTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTreeckoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGrovyleTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSceptileTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTorchicTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCombuskenTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBlazikenTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMudkipTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMarshtompTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSwampertTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPoochyenaTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMightyenaTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sZigzagoonTMHMLearnset[] = 
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLinooneTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPetililTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLilligantTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCottoneeTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWhimsicottTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSolosisTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDuosionTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sReuniclusTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPanchamTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPangoroTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMienfooTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMienshaoTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAmauraTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAurorusTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDialgaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sShelmetTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF, };

static const u8 sAccelgorTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM83_INFESTATION),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sShroomishTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBreloomTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPalkiaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWingullTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM55_SCALD),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPelipperTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRioluTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sLucarioTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWailmerTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sWailordTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSkittyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDelcattyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRoggenrolaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBoldoreTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGigalithTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSandshrewATMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSandslashATMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSableyeTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLitwickTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLampentTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sChandelureTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCorphishTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCrawdauntTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFeebasTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMiloticTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCarvanhaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSharpedoTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM78_BULLDOZE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTrapinchTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sVibravaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFlygonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sDwebbleTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sCrustleTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sElectrikeTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sManectricTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sManethundrTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sPorygonZTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTynamoTMHMLearnset[] =
{
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE)
    ,0xFF,
};

static const u8 sEelektrikTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sEelektrossTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCacneaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM66_PAYBACK),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCacturneTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSnoruntTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGlalieTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFroslassTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTirtougaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCarracostaTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSpoinkTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGrumpigTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSalanditTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSalazzleTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM56_FLING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),   
    0xFF,
};

static const u8 sMawileTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMedititeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMedichamTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSwabluTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAltariaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTimburrTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGurdurrTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sConkeldurrTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM84_POISON_JAB),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGiratinaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFletchlingTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM33_REFLECT),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sFletchindrTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sTalonflameTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKyuremTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMeloettaTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBunearyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLopunnyTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAzelfTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sMespritTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sUxieTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM62_ACROBATICS),
    TMHM(TM64_EXPLOSION),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sAbsolTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sShuppetTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM66_PAYBACK),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBanetteTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBansheetteTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM63_EMBARGO),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM83_INFESTATION),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAbsolomTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRelicanthTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAronTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sLaironTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAggronTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAlolan_MarowakTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRhyperiorTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM84_POISON_JAB),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM94_SURF),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGalladeTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sLileepTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sCradilyTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM83_INFESTATION),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sAnorithTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sArmaldoTMHMLearnset[] =
{
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRaltsTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKirliaTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};
static const u8 sGardevoirTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBagonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sShelgonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sSalamenceTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM51_STEEL_WING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM76_FLY),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sBeldumTMHMLearnset[] =
{
    0xFF,
};

static const u8 sMetangTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sMetagrossTMHMLearnset[] =
{
    TMHM(TM03_PSYSHOCK),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM64_EXPLOSION),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRockruffTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM27_RETURN),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF, 
};

static const u8 sLycanrocTMHMLearnset[] =
{
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM12_TAUNT),
    TMHM(TM17_PROTECT),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM95_SNARL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sKyogreTMHMLearnset[] =
{
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM55_SCALD),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sGroudonTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM56_FLING),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sRayquazaTMHMLearnset[] =
{
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM08_BULK_UP),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM42_FACADE),
    TMHM(TM44_REST),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM56_FLING),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM94_SURF),
    TMHM(TM98_WATERFALL),
    TMHM(TM00_CONFIDE),
    0xFF,
};

static const u8 sArceusTMHMLearnset[] =
{
    TMHM(TM01_WORK_UP),
    TMHM(TM02_DRAGON_CLAW),
    TMHM(TM03_PSYSHOCK),
    TMHM(TM04_CALM_MIND),
    TMHM(TM05_ROAR),
    TMHM(TM06_TOXIC),
    TMHM(TM07_HAIL),
    TMHM(TM08_BULK_UP),
    TMHM(TM09_VENOSHOCK),
    TMHM(TM10_HIDDEN_POWER),
    TMHM(TM11_SUNNY_DAY),
    TMHM(TM12_TAUNT),
    TMHM(TM13_ICE_BEAM),
    TMHM(TM14_BLIZZARD),
    TMHM(TM15_HYPER_BEAM),
    TMHM(TM16_LIGHT_SCREEN),
    TMHM(TM17_PROTECT),
    TMHM(TM18_RAIN_DANCE),
    TMHM(TM19_ROOST),
    TMHM(TM20_SAFEGUARD),
    TMHM(TM21_FRUSTRATION),
    TMHM(TM22_SOLAR_BEAM),
    TMHM(TM23_SMACK_DOWN),
    TMHM(TM24_THUNDERBOLT),
    TMHM(TM25_THUNDER),
    TMHM(TM26_EARTHQUAKE),
    TMHM(TM27_RETURN),
    TMHM(TM28_LEECH_LIFE),
    TMHM(TM29_PSYCHIC),
    TMHM(TM30_SHADOW_BALL),
    TMHM(TM31_BRICK_BREAK),
    TMHM(TM32_DOUBLE_TEAM),
    TMHM(TM33_REFLECT),
    TMHM(TM34_SLUDGE_WAVE),
    TMHM(TM35_FLAMETHROWER),
    TMHM(TM36_SLUDGE_BOMB),
    TMHM(TM37_SANDSTORM),
    TMHM(TM38_FIRE_BLAST),
    TMHM(TM39_ROCK_TOMB),
    TMHM(TM40_AERIAL_ACE),
    TMHM(TM41_TORMENT),
    TMHM(TM42_FACADE),
    TMHM(TM43_FLAME_CHARGE),
    TMHM(TM44_REST),
    TMHM(TM45_ATTRACT),
    TMHM(TM46_THIEF),
    TMHM(TM47_LOW_SWEEP),
    TMHM(TM48_ROUND),
    TMHM(TM49_ECHOED_VOICE),
    TMHM(TM50_OVERHEAT),
    TMHM(TM51_STEEL_WING),
    TMHM(TM52_FOCUS_BLAST),
    TMHM(TM53_ENERGY_BALL),
    TMHM(TM54_FALSE_SWIPE),
    TMHM(TM55_SCALD),
    TMHM(TM56_FLING),
    TMHM(TM57_CHARGE_BEAM),
    TMHM(TM58_SKY_DROP),
    TMHM(TM59_BRUTAL_SWING),
    TMHM(TM60_QUASH),
    TMHM(TM61_WILL_O_WISP),
    TMHM(TM62_ACROBATICS),
    TMHM(TM63_EMBARGO),
    TMHM(TM64_EXPLOSION),
    TMHM(TM65_SHADOW_CLAW),
    TMHM(TM66_PAYBACK),
    TMHM(TM67_SMART_STRIKE),
    TMHM(TM68_GIGA_IMPACT),
    TMHM(TM69_ROCK_POLISH),
    TMHM(TM70_AURORA_VEIL),
    TMHM(TM71_STONE_EDGE),
    TMHM(TM72_VOLT_SWITCH),
    TMHM(TM73_THUNDER_WAVE),
    TMHM(TM74_GYRO_BALL),
    TMHM(TM75_SWORDS_DANCE),
    TMHM(TM76_FLY),
    TMHM(TM77_PSYCH_UP),
    TMHM(TM78_BULLDOZE),
    TMHM(TM79_FROST_BREATH),
    TMHM(TM80_ROCK_SLIDE),
    TMHM(TM81_X_SCISSOR),
    TMHM(TM82_DRAGON_TAIL),
    TMHM(TM83_INFESTATION),
    TMHM(TM84_POISON_JAB),
    TMHM(TM85_DREAM_EATER),
    TMHM(TM86_GRASS_KNOT),
    TMHM(TM87_SWAGGER),
    TMHM(TM88_SLEEP_TALK),
    TMHM(TM89_U_TURN),
    TMHM(TM90_SUBSTITUTE),
    TMHM(TM91_FLASH_CANNON),
    TMHM(TM92_TRICK_ROOM),
    TMHM(TM93_WILD_CHARGE),
    TMHM(TM94_SURF),
    TMHM(TM95_SNARL),
    TMHM(TM96_NATURE_POWER),
    TMHM(TM97_DARK_PULSE),
    TMHM(TM98_WATERFALL),
    TMHM(TM99_DAZZLING_GLEAM),
    TMHM(TM00_CONFIDE),
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
    [SPECIES_GIRATINA_ORIGIN] = sGiratinaTMHMLearnset,
    [SPECIES_BONDED_SERPERIOR] = sSerperiorTMHMLearnset,
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
    [SPECIES_KYUREM_WHITE] = sKyuremTMHMLearnset,
    [SPECIES_KYUREM_BLACK] = sKyuremTMHMLearnset,
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
