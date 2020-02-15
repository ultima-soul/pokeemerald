const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = _("Seed"),
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = _("Seed"),
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = _("Seed"),
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = _("Lizard"),
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = _("Flame"),
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = _("Flame"),
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = _("Tiny Turtle"),
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = _("Turtle"),
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = _("Tank Turtle"),
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SNIVY] =
    {
        .categoryName = _("Grass Snake"),
        .height = 6,
        .weight = 81,
        .description = gSnivyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERVINE] =
    {
        .categoryName = _("Grass Snake"),
        .height = 7,
        .weight = 99,
        .description = gServinePokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SERPERIOR] =
    {
        .categoryName = _("Regal Snake"),
        .height = 33,
        .weight = 630,
        .description = gSerperiorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
        .categoryName = _("Poison Worm"),
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
        .categoryName = _("Poison Bee"),
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
        .categoryName = _("Tiny Bird"),
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
        .categoryName = _("Bird"),
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX_A] =
    {
        .categoryName = _("Snow Fox"),
        .height = 6,
        .weight = 99,
        .description = gAlolan_VulpixPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES_A] =
    {
        .categoryName = _("Snow Fox"),
        .height = 11,
        .weight = 199,
        .description = gAlolan_NinetalesPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOIBAT] =
    {
        .categoryName = _("Tiny Bat"),
        .height = 5,
        .weight = 80,
        .description = gNoibatPokedexText,
        .pokemonScale = 500,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOIVERN] =
    {
        .categoryName = _("Sonic Bat"),
        .height = 15,
        .weight = 850,
        .description = gNoivernPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EKANS] =
    {
        .categoryName = _("Snake"),
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARBOK] =
    {
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = _("Mouse"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = _("Mouse"),
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
        .categoryName = _("Pangolin"),
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
        .categoryName = _("Pangolin"),
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
        .categoryName = _("Poison Pin"),
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
        .categoryName = _("Poison Pin"),
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
        .categoryName = _("Drill"),
        .height = 21,
        .weight = 930,
        .description = gNidoqueenPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 300,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
        .categoryName = _("Poison Pin"),
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
        .categoryName = _("Poison Pin"),
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
        .categoryName = _("Drill"),
        .height = 200,
        .weight = 870,
        .description = gNidokingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 300,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
        .categoryName = _("Fairy"),
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = _("Fox"),
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROAKIE] =
    {
        .categoryName = _("Bubble Frog"),
        .height = 3,
        .weight = 70,
        .description = gFroakiePokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROGADIER] =
    {
        .categoryName = _("Bubble Frog"),
        .height = 6,
        .weight = 109,
        .description = gFrogadierPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRENINJA] =
    {
        .categoryName = _("Ninja Frog"),
        .height = 15,
        .weight = 400,
        .description = gGreninjaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_GRENINJA] =
    {
        .categoryName = _("Ninja Frog"),
        .height = 165,
        .weight = 400,
        .description = gBonded_GreninjaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROWLET] =
    {
        .categoryName = _("Owl"),
        .height = 3,
        .weight = 15,
        .description = gRowletPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DARTRIX] =
    {
        .categoryName = _("Owl"),
        .height = 7,
        .weight = 160,
        .description = gDartrixPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DECIDUEYE] =
    {
        .categoryName = _("Grey Owl"),
        .height = 16,
        .weight = 366,
        .description = gDecidueyePokedexText,
        .pokemonScale = 286,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIDOOF] =
    {
        .categoryName = _("Beaver"),
        .height = 5,
        .weight = 200,
        .description = gBidoofPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BIBAREL] =
    {
        .categoryName = _("Beaver"),
        .height = 10,
        .weight = 315,
        .description = gBibarelPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENONAT] =
    {
        .categoryName = _("Insect"),
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_VENOMOTH] =
    {
        .categoryName = _("Poison Moth"),
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_KARRABLAST] =
    {
        .categoryName = _("Beetle"),
        .height = 5,
        .weight = 59,
        .description = gKarrablastPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESCAVALIER] =
    {
        .categoryName = _("Armored Bug"),
        .height = 10,
        .weight = 330,
        .description = gEscavalierPokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRUNT] =
    {
        .categoryName = _("Dinosaur"),
        .height = 8,
        .weight = 260,
        .description = gTyruntPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANTRUM] =
    {
        .categoryName = _("Dinosaur"),
        .height = 62,
        .weight = 10240,
        .description = gTyrantrumPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 600,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBEE] =
    {
        .categoryName = _("Tiny Bee"),
        .height = 3,
        .weight = 55,
        .description = gCombeePokedexText,
        .pokemonScale = 486,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VESPIQUEN] =
    {
        .categoryName = _("Queen Bee"),
        .height = 12,
        .weight = 385,
        .description = gVespiquenPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PURRLOIN] =
    {
        .categoryName = _("Cat"),
        .height = 4,
        .weight = 101,
        .description = gPurrloinPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LIEPARD] =
    {
        .categoryName = _("Cat"),
        .height = 11,
        .weight = 375,
        .description = gLiepardPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
        .categoryName = _("Puppy"),
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
        .categoryName = _("Canine"),
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_PIDOVE] =
    {
        .categoryName = _("Pidgeon"),
        .height = 3,
        .weight = 21,
        .description = gPidovePokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRANQUILL] =
    {
        .categoryName = _("Pidgeon"),
        .height = 6,
        .weight = 150,
        .description = gTranquillPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNFEZANT] =
    {
        .categoryName = _("Pheasant"),
        .height = 12,
        .weight = 290,
        .description = gUnfezantPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABRA] =
    {
        .categoryName = _("Psi"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KADABRA] =
    {
        .categoryName = _("Psi"),
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
        .categoryName = _("Psi"),
        .height = 15,
        .weight = 480,
        .description = gAlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCATTERBUG] =
    {
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 25,
        .description = gScatterbugPokedexText,
        .pokemonScale = 486,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEWPA] =
    {
        .categoryName = _("Cocoon"),
        .height = 3,
        .weight = 84,
        .description = gSpewpaPokedexText,
        .pokemonScale = 486,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIVILLON] =
    {
        .categoryName = _("Butterfly"),
        .height = 12,
        .weight = 170,
        .description = gVivillonPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENIPEDE] =
    {
        .categoryName = _("Centipede"),
        .height = 4,
        .weight = 53,
        .description = gVenipedePokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIRLIPEDE] =
    {
        .categoryName = _("Curlipede"),
        .height = 12,
        .weight = 585,
        .description = gWhirlipedePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCOLIPEDE] =
    {
        .categoryName = _("Megapede"),
        .height = 25,
        .weight = 2005,
        .description = gScolipedePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 386,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = _("Jellyfish"),
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = _("Jellyfish"),
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ESPURR] =
    {
        .categoryName = _("Psychic Cat"),
        .height = 3,
        .weight = 35,
        .description = gEspurrPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWSTIC_M] =
    {
        .categoryName = _("Psychic Cat"),
        .height = 6,
        .weight = 85,
        .description = gMeowsticPokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWSTIC_F] =
    {
        .categoryName = _("Psychic Cat"),
        .height = 6,
        .weight = 85,
        .description = gMeowsticPokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PONYTA] =
    {
        .categoryName = _("Fire Horse"),
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
        .categoryName = _("Fire Horse"),
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_VULLABY] =
    {
        .categoryName = _("Vulture"),
        .height = 5,
        .weight = 90,
        .description = gVullabyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANDIBUZZ] =
    {
        .categoryName = _("Vulture"),
        .height = 12,
        .weight = 395,
        .description = gMandibuzzPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
        .categoryName = _("Magnet"),
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
        .categoryName = _("Magnet"),
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNEZONE] =
    {
        .categoryName = _("Magnet Area"),
        .height = 12,
        .weight = 1800,
        .description = gMagnezonePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ROTOM] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotomPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIPUP] =
    {
        .categoryName = _("Small Dog"),
        .height = 4,
        .weight = 41,
        .description = gLillipupPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERDIER] =
    {
        .categoryName = _("Dog"),
        .height = 9,
        .weight = 147,
        .description = gHerdierPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STOUTLAND] =
    {
        .categoryName = _("Large Dog"),
        .height = 12,
        .weight = 610,
        .description = gStoutlandPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUDBRAY] =
    {
        .categoryName = _("Mud Donkey"),
        .height = 10,
        .weight = 1100,
        .description = gMudbrayPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUDSDALE] =
    {
        .categoryName = _("Horse-Power"),
        .height = 25,
        .weight = 20283,
        .description = gMudsdalePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_DUCKLETT] =
    {
        .categoryName = _("Duck"),
        .height = 5,
        .weight = 55,
        .description = gDucklettPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWANNA] =
    {
        .categoryName = _("Swan"),
        .height = 13,
        .weight = 242,
        .description = gSwannaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GASTLY] =
    {
        .categoryName = _("Gas"),
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
        .categoryName = _("Gas"),
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GENGAR] =
    {
        .categoryName = _("Poltergeist"),
        .height = 15,
        .weight = 405,
        .description = gGengarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ONIX] =
    {
        .categoryName = _("Rock Snake"),
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RUFFLET] =
    {
        .categoryName = _("Eaglet"),
        .height = 5,
        .weight = 105,
        .description = gRuffletPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRAVIARY] =
    {
        .categoryName = _("Bald Eagle"),
        .height = 15,
        .weight = 410,
        .description = gBraviaryPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRABBY] =
    {
        .categoryName = _("River Crab"),
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGLER] =
    {
        .categoryName = _("Big Crab"),
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAGGY] =
    {
        .categoryName = _("Headbutt"),
        .height = 6,
        .weight = 118,
        .description = gScraggyPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCRAFTY] =
    {
        .categoryName = _("Hoodlum"),
        .height = 11,
        .weight = 300,
        .description = gScraftyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CUBCHOO] =
    {
        .categoryName = _("Tiny Bear"),
        .height = 5,
        .weight = 85,
        .description = gCubchooPokedexText,
        .pokemonScale = 456,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEARTIC] =
    {
        .categoryName = _("Polar Bear"),
        .height = 26,
        .weight = 2600,
        .description = gBearticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 326,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CUBONE] =
    {
        .categoryName = _("Lone Cub"),
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
        .categoryName = _("Bone Keeper"),
        .height = 10,
        .weight = 450,
        .description = gMarowakPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
        .categoryName = _("Kicking"),
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
        .categoryName = _("Punching"),
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BUNNELBY] =
    {
        .categoryName = _("Hare"),
        .height = 4,
        .weight = 50,
        .description = gBunnelbyPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIGGERSBY] =
    {
        .categoryName = _("Digging"),
        .height = 10,
        .weight = 935,
        .description = gDiggersbyPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_BEARTIC] =
    {
        .categoryName = _("Polar Bear "),
        .height = 12,
        .weight = 95,
        .description = gBonded_BearticPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
        .categoryName = _("Rhino"),
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYDON] =
    {
        .categoryName = _("Drill Rhino"),
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
        .categoryName = _("Caretaker"),
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = _("Vine"),
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGROWTH] =
    {
        .categoryName = _("Vine"),
        .height = 20,
        .weight = 1286,
        .description = gTangrowthPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 276,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_BUIZEL] =
    {
        .categoryName = _("Sea Weasel"),
        .height = 7,
        .weight = 295,
        .description = gBuizelPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOATZEL] =
    {
        .categoryName = _("Sea Weasel"),
        .height = 11,
        .weight = 335,
        .description = gFloatzelPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRILLBUR] =
    {
        .categoryName = _("Mole"),
        .height = 3,
        .weight = 85,
        .description = gDrillburPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXCADRILL] =
    {
        .categoryName = _("Steel Mole"),
        .height = 7,
        .weight = 404,
        .description = gExcadrillPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARYU] =
    {
        .categoryName = _("Starfish"),
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARMIE] =
    {
        .categoryName = _("Starfish"),
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_FLYGON] =
    {
        .categoryName = _("Mystic"),
        .height = 24,
        .weight = 960,
        .description = gBonded_FlygonPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("Mantis"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LARVESTA] =
    {
        .categoryName = _("Torch Larva"),
        .height = 11,
        .weight = 288,
        .description = gLarvestaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_VOLCARONA] =
    {
        .categoryName = _("Sun Moth"),
        .height = 16,
        .weight = 460,
        .description = gVolcaronaPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FOONGUS] =
    {
        .categoryName = _("Mushroom"),
        .height = 2,
        .weight = 10,
        .description = gFoongusPokedexText,
        .pokemonScale = 456,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINSIR] =
    {
        .categoryName = _("Stag Beetle"),
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMOONGUSS] =
    {
        .categoryName = _("Mushroom"),
        .height = 6,
        .weight = 105,
        .description = gAmoongussPokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
        .categoryName = _("Fish"),
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
        .categoryName = _("Sea Serpent"),
        .height = 65,
        .weight = 2350,
        .description = gGyaradosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
        .categoryName = _("Transport"),
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = _("Evolution"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = _("Bubble Jet"),
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = _("Lightning"),
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = _("Flame"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON] =
    {
        .categoryName = _("Digital"),
        .height = 8,
        .weight = 365,
        .description = gPorygonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKORUPI] =
    {
        .categoryName = _("Scorpion"),
        .height = 8,
        .weight = 120,
        .description = gSkorupiPokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAPION] =
    {
        .categoryName = _("Scorpion"),
        .height = 13,
        .weight = 615,
        .description = gDrapionPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKRELP] =
    {
        .categoryName = _("Seahorse"),
        .height = 5,
        .weight = 73,
        .description = gSkrelpPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DRAGALGE] =
    {
        .categoryName = _("Kelp Dragon"),
        .height = 18,
        .weight = 815,
        .description = gDragalgePokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
        .categoryName = _("Pterodactyl"),
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
        .categoryName = _("Big Sloth"),
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_BONDED_KYOGRE] =
    {
        .categoryName = _("Primordial"),
        .height = 17,
        .weight = 554,
        .description = gBonded_KyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GROUDON] =
    {
        .categoryName = _("Primordial"),
        .height = 16,
        .weight = 526,
        .description = gBonded_GroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_BONDED_RAYQUAZA] =
    {
        .categoryName = _("Primordial"),
        .height = 20,
        .weight = 600,
        .description = gBonded_RayquazaPokedexText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_GOOMY] =
    {
        .categoryName = _("Gooey"),
        .height = 3,
        .weight = 28,
        .description = gGoomyPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SLIGGOO] =
    {
        .categoryName = _("Goo Slug"),
        .height = 8,
        .weight = 175,
        .description = gSliggooPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_GOODRA] =
    {
        .categoryName = _("Dragon"),
        .height = 20,
        .weight = 1505,
        .description = gGoodraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 300,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
        .categoryName = _("Genetic"),
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEW] =
    {
        .categoryName = _("Ancestor"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNOVER] =
    {
        .categoryName = _("Frost Tree"),
        .height = 10,
        .weight = 505,
        .description = gSnoverPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABOMASNOW] =
    {
        .categoryName = _("Frost Tree"),
        .height = 22,
        .weight = 1355,
        .description = gAbomasnowPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_ABOMACIER] =
    {
        .categoryName = _("Frost Tree"),
        .height = 27,
        .weight = 1850,
        .description = gAbomacierPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 356,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_CYNDAQUIL] =
    {
        .categoryName = _("Fire Quill"),
        .height = 5,
        .weight = 79,
        .description = gCyndaquilPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILAVA] =
    {
        .categoryName = _("Fire Badger"),
        .height = 9,
        .weight = 190,
        .description = gQuilavaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPHLOSION] =
    {
        .categoryName = _("Fire Badger"),
        .height = 17,
        .weight = 795,
        .description = gTyphlosionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BASCULIN] =
    {
        .categoryName = _("Fish"),
        .height = 10,
        .weight = 180,
        .description = gBasculinPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIMPOD] =
    {
        .categoryName = _("Silverfish"),
        .height = 5,
        .weight = 120,
        .description = gWimpodPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLISOPOD] =
    {
        .categoryName = _("Titan Bug"),
        .height = 20,
        .weight = 1080,
        .description = gGolisopodPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 300,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SENTRET] =
    {
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 60,
        .description = gSentretPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRET] =
    {
        .categoryName = _("Walking"),
        .height = 18,
        .weight = 325,
        .description = gFurretPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROSEED] =
    {
        .categoryName = _("Thorn Seed"),
        .height = 6,
        .weight = 188,
        .description = gFerroseedPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERROTHORN] =
    {
        .categoryName = _("Thorn Pod"),
        .height = 10,
        .weight = 1100,
        .description = gFerrothornPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAUNCHER] =
    {
        .categoryName = _("Shrimp"),
        .height = 5,
        .weight = 83,
        .description = gClauncherPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAWITZER] =
    {
        .categoryName = _("Shellfish"),
        .height = 13,
        .weight = 353,
        .description = gClawitzerPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
        .categoryName = _("Spider"),
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
        .categoryName = _("Spider"),
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIMIKYU] =
    {
        .categoryName = _("Disguise"),
        .height = 2,
        .weight = 7,
        .description = gMimikyuPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
        .categoryName = _("Angler"),
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANTURN] =
    {
        .categoryName = _("Light Fish"),
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEWADDLE] =
    {
        .categoryName = _("Silk Worm"),
        .height = 3,
        .weight = 25,
        .description = gSewaddlePokedexText,
        .pokemonScale = 486,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWADLOON] =
    {
        .categoryName = _("LeafWrapped"),
        .height = 5,
        .weight = 73,
        .description = gSwadloonPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAVANNY] =
    {
        .categoryName = _("Grasshopper"),
        .height = 12,
        .weight = 205,
        .description = gLeavannyPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
        .categoryName = _("Egg"),
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
        .categoryName = _("Egg Fairy"),
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEKISS] =
    {
        .categoryName = _("Wish Fairy"),
        .height = 15,
        .weight = 380,
        .description = gTogekissPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANTUMP] =
    {
        .categoryName = _("Stump"),
        .height = 4,
        .weight = 70,
        .description = gPhantumpPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAREEP] =
    {
        .categoryName = _("Sheep"),
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
        .categoryName = _("Sheep"),
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
        .categoryName = _("Lighthouse"),
        .height = 14,
        .weight = 615,
        .description = gAmpharosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREVENANT] =
    {
        .categoryName = _("Elder Tree"),
        .height = 25,
        .weight = 710,
        .description = gTrevenantPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 356,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MARILL] =
    {
        .categoryName = _("Aqua MOuse"),
        .height = 4,
        .weight = 85,
        .description = gMarillPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZUMARILL] =
    {
        .categoryName = _("Aqua Rabbit"),
        .height = 8,
        .weight = 285,
        .description = gAzumarillPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIBLE] =
    {
        .categoryName = _("Land Shark"),
        .height = 7,
        .weight = 205,
        .description = gGiblePokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GABITE] =
    {
        .categoryName = _("Land Shark"),
        .height = 14,
        .weight = 560,
        .description = gGabitePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARCHOMP] =
    {
        .categoryName = _("Land Shark"),
        .height = 19,
        .weight = 950,
        .description = gGarchompPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 286,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HONEDGE] =
    {
        .categoryName = _("Sword"),
        .height = 8,
        .weight = 20,
        .description = gHonedgePokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DOUBLADE] =
    {
        .categoryName = _("Dual Sword"),
        .height = 8,
        .weight = 45,
        .description = gDoubladePokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AEGISLASH] =
    {
        .categoryName = _("Royal Sword"),
        .height = 17,
        .weight = 530,
        .description = gAegislashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIMITEYE] =
    {
        .categoryName = _("Gem Goblin"),
        .height = 5,
        .weight = 1610,
        .description = gScimiteyePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JAWGUILE] =
    {
        .categoryName = _("Dual Jaw"),
        .height = 10,
        .weight = 235,
        .description = gJawguilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_RAICHU] =
    {
        .categoryName = _("MOuse"),
        .height = 10,
        .weight = 403,
        .description = gBonded_RaichuPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = _("Mud Fish"),
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("Sun"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("Moonlight"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEAFEON] =
    {
        .categoryName = _("Verdant"),
        .height = 10,
        .weight = 255,
        .description = gLeafeonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLACEON] =
    {
        .categoryName = _("Fresh Snow"),
        .height = 10,
        .weight = 259,
        .description = gGlaceonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SYLVEON] =
    {
        .categoryName = _("Ribbon"),
        .height = 10,
        .weight = 235,
        .description = gSylveonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLABEBE] =
    {
        .categoryName = _("Fairy"),
        .height = 1,
        .weight = 1,
        .description = gFlabebePokedexText,
        .pokemonScale = 700,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLOETTE] =
    {
        .categoryName = _("Fiary"),
        .height = 2,
        .weight = 9,
        .description = gFloettePokedexText,
        .pokemonScale = 700,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLORGES] =
    {
        .categoryName = _("Fairy"),
        .height = 11,
        .weight = 100,
        .description = gFlorgesPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTIK] =
    {
        .categoryName = _("Volt Tick"),
        .height = 1,
        .weight = 6,
        .description = gJoltikPokedexText,
        .pokemonScale = 726,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GALVANTULA] =
    {
        .categoryName = _("Volt Spider"),
        .height = 8,
        .weight = 143,
        .description = gGalvantulaPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AUDINO] =
    {
        .categoryName = _("Caretaker"),
        .height = 11,
        .weight = 310,
        .description = gAudinoPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEAVILE] =
    {
        .categoryName = _("Ice Weasel"),
        .height = 11,
        .weight = 340,
        .description = gWeavilePokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = _("Iron Snake"),
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_POPPLIO] =
    {
        .categoryName = _("Sea Lion"),
        .height = 4,
        .weight = 75,
        .description = gPopplioPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRIONNE] =
    {
        .categoryName = _("Sea Lion"),
        .height = 6,
        .weight = 175,
        .description = gBrionnePokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMARINA] =
    {
        .categoryName = _("Siren"),
        .height = 18,
        .weight = 440,
        .description = gPrimarinaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("Steel Bug"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDIREIGN] =
    {
        .categoryName = _("MOLD"),
        .height = 18,
        .weight = 525,
        .description = gMedireignPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = _("Horn Beetle"),
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = _("Ice Weasel"),
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = _("Little Bear"),
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = _("Large Bear"),
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZOR] =
    {
        .categoryName = _("Bronze"),
        .height = 5,
        .weight = 605,
        .description = gBronzorPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRONZONG] =
    {
        .categoryName = _("Bronze Bell"),
        .height = 13,
        .weight = 1870,
        .description = gBronzongPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = _("Pig"),
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = _("Swine"),
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAMOSWINE] =
    {
        .categoryName = _("Mammoth"),
        .height = 40,
        .weight = 39800,
        .description = gMamoswinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 525,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_ZEKROM] =
    {
        .categoryName = _("Deep Black"),
        .height = 52,
        .weight = 5450,
        .description = gZekromPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_SHINX] =
    {
        .categoryName = _("Flash"),
        .height = 5,
        .weight = 95,
        .description = gShinxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXIO] =
    {
        .categoryName = _("Spark"),
        .height = 9,
        .weight = 305,
        .description = gLuxioPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUXRAY] =
    {
        .categoryName = _("Lighting"),
        .height = 14,
        .weight = 420,
        .description = gLuxrayPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("Armor Bird"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = _("Hound"),
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = _("Hell Hound"),
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDREAD] =
    {
        .categoryName = _("Hell Hound"),
        .height = 25,
        .weight = 666,
        .description = gHoundreadPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 356,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_LITLEO] =
    {
        .categoryName = _("Lion Cub"),
        .height = 6,
        .weight = 135,
        .description = gLitleoPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PYROAR] =
    {
        .categoryName = _("Lion"),
        .height = 15,
        .weight = 815,
        .description = gPyroarPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = _("Digital"),
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RESHIRAM] =
    {
        .categoryName = _("Vast White"),
        .height = 52,
        .weight = 4260,
        .description = gReshiramPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = _("Painter"),
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = _("Scuffle"),
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
        .categoryName = _("Handstand"),
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITA] =
    {
        .categoryName = _("Mystic"),
        .height = 4,
        .weight = 58,
        .description = gGothitaPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHORITA] =
    {
        .categoryName = _("Mystic"),
        .height = 15,
        .weight = 440,
        .description = gGothoritaPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOTHITELLE] =
    {
        .categoryName = _("Mystic"),
        .height = 21,
        .weight = 560,
        .description = gGothitellePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 284,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_MEWTWO_Y] =
    {
        .categoryName = _("Genetic"),
        .height = 12,
        .weight = 755,
        .description = gMewtwo_YPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = _("Caretaker"),
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_ROTOM_FAN] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotom_FanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ROTOM_MOW] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotom_MowPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ROTOM_HEAT] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotom_HeatPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = _("Rock Skin"),
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = _("Hard Shell"),
        .height = 22,
        .weight = 2420,
        .description = gPupitarPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = _("Dinosaur"),
        .height = 52,
        .weight = 4820,
        .description = gTyranitarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_ROTOM_WASH] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotom_WashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_ROTOM_FREEZE] =
    {
        .categoryName = _("Plasma"),
        .height = 3,
        .weight = 3,
        .description = gRotom_FreezePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = _("Time Travel"),
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = _("Wood Gecko"),
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = _("Wood Gecko"),
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = _("Wood Lizard"),
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = _("Young Fowl"),
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = _("Blaze Bird"),
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = _("Mud Fish"),
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = _("Mud Fish"),
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = _("Wild Puppy"),
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = _("Wolf"),
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = _("Raccoon"),
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = _("Badger"),
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PETILIL] =
    {
        .categoryName = _("Bulb"),
        .height = 5,
        .weight = 66,
        .description = gPetililPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LILLIGANT] =
    {
        .categoryName = _("Flower"),
        .height = 11,
        .weight = 163,
        .description = gLilligantPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COTTONEE] =
    {
        .categoryName = _("Cotton Puff"),
        .height = 3,
        .weight = 6,
        .description = gCottoneePokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHIMSICOTT] =
    {
        .categoryName = _("Cotton"),
        .height = 7,
        .weight = 66,
        .description = gWhimsicottPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLOSIS] =
    {
        .categoryName = _("Cell"),
        .height = 3,
        .weight = 10,
        .description = gSolosisPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUOSION] =
    {
        .categoryName = _("Mitosis"),
        .height = 6,
        .weight = 80,
        .description = gDuosionPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REUNICLUS] =
    {
        .categoryName = _("Multiplying"),
        .height = 10,
        .weight = 201,
        .description = gReuniclusPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANCHAM] =
    {
        .categoryName = _("Panda"),
        .height = 6,
        .weight = 80,
        .description = gPanchamPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PANGORO] =
    {
        .categoryName = _("Large Panda"),
        .height = 21,
        .weight = 1360,
        .description = gPangoroPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MIENFOO] =
    {
        .categoryName = _("Martial Art"),
        .height = 9,
        .weight = 200,
        .description = gMienfooPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIENSHAO] =
    {
        .categoryName = _("Martial Art"),
        .height = 14,
        .weight = 355,
        .description = gMienshaoPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELMET] =
    {
        .categoryName = _("Armor Snail"),
        .height = 4,
        .weight = 77,
        .description = gShelmetPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ACCELGOR] =
    {
        .categoryName = _("Speed Snail"),
        .height = 8,
        .weight = 253,
        .description = gAccelgorPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = _("Seagull"),
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = _("Pelican"),
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("Feeling"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("Emotion"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("Embrace"),
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RIOLU] =
    {
        .categoryName = _("Puppy"),
        .height = 7,
        .weight = 202,
        .description = gRioluPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUCARIO] =
    {
        .categoryName = _("Aura"),
        .height = 18,
        .weight = 720,
        .description = gLucarioPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 300,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = _("Mushroom"),
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = _("Mushroom"),
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLETCHLING] =
    {
        .categoryName = _("Tiny Robin"),
        .height = 3,
        .weight = 17,
        .description = gFletchlingPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLETCHINDR] =
    {
        .categoryName = _("Ember Robin"),
        .height = 7,
        .weight = 160,
        .description = gFletchindrPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TALONFLAME] =
    {
        .categoryName = _("Flame Bird"),
        .height = 12,
        .weight = 245,
        .description = gTalonflamePokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMAURA] =
    {
        .categoryName = _("Tundra Dino"),
        .height = 13,
        .weight = 252,
        .description = gAmauraPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AURORUS] =
    {
        .categoryName = _("Dinosaur"),
        .height = 108,
        .weight = 43800,
        .description = gAurorusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 800,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DIALGA] =
    {
        .categoryName = _("Temporal"),
        .height = 54,
        .weight = 6830,
        .description = gDialgaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_MELOETTA] =
    {
        .categoryName = _("Melody"),
        .height = 17,
        .weight = 423,
        .description = gMeloettaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_BUNEARY] =
    {
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .description = gBunearyPokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOPUNNY] =
    {
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .description = gLopunnyPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DWEBBLE] =
    {
        .categoryName = _("Hermit Crab"),
        .height = 3,
        .weight = 145,
        .description = gDwebblePokedexText,
        .pokemonScale = 456,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRUSTLE] =
    {
        .categoryName = _("Stone Crab"),
        .height = 14,
        .weight = 2000,
        .description = gCrustlePokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CARRACOSTA] =
    {
        .categoryName = _("Archelon"),
        .height = 46,
        .weight = 2200,
        .description = gCarracostaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SANDSHREW_A] =
    {
        .categoryName = _("Pangolin"),
        .height = 7,
        .weight = 400,
        .description = gSandshrewAPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = _("KITTEN"),
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = _("PRIM"),
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = _("Gem Goblin"),
        .height = 5,
        .weight = 110,
        .description = gSableyePokedexText,
        .pokemonScale = 400,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = _("Steel Jaw"),
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("Iron Armor"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = _("Iron Armor"),
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = _("Iron Armor"),
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = _("Meditate"),
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = _("MEditate"),
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = _("Lightning"),
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = _("Discharge"),
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALANDIT] =
    {
        .categoryName = _("Lizard"),
        .height = 6,
        .weight = 48,
        .description = gSalanditPokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAZZLE] =
    {
        .categoryName = _("Salamander"),
        .height = 12,
        .weight = 222,
        .description = gSalazzlePokedexText,
        .pokemonScale = 386,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYPERIOR] =
    {
        .categoryName = _("Armor Rhino"),
        .height = 24,
        .weight = 2828,
        .description = gRhyperiorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 386,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_GALLADE] =
    {
        .categoryName = _("Elbow Blade"),
        .height = 16,
        .weight = 520,
        .description = gGalladePokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRATINA] =
    {
        .categoryName = _("Antimatter"),
        .height = 45,
        .weight = 7500,
        .description = gGiratinaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GIRATINA_ORIGIN] =
    {
        .categoryName = _("Antimatter"),
        .height = 69,
        .weight = 6500,
        .description = gGiratina_OriginPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_BONDED_SERPERIOR] =
    {
        .categoryName = _("POISON BAG"),
        .height = 17,
        .weight = 800,
        .description = gBonded_SerperiorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = _("Piranha"),
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = _("Shark"),
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = _("Ball Whale"),
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = _("Whale"),
        .height = 160,
        .weight = 41000,
        .description = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_MANETHUNDR] =
    {
        .categoryName = _("Thunder"),
        .height = 18,
        .weight = 440,
        .description = gManethundrPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGONZ] =
    {
        .categoryName = _("Virus"),
        .height = 9,
        .weight = 340,
        .description = gPorygonZPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_SANDSLASH_A] =
    {
        .categoryName = _("Pangolin"),
        .height = 12,
        .weight = 550,
        .description = gSandslashAPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = _("Bouncing"),
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = _("Psychic Pig"),
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PALKIA] =
    {
        .categoryName = _("Spatial"),
        .height = 42,
        .weight = 3360,
        .description = gPalkiaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 512,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = _("Ant Lion"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = _("Dragonfly"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = _("Dragonfly"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = _("Scarecrow"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = _("Cotton Bird"),
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = _("Cotton Bird"),
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOLOM] =
    {
        .categoryName = _("Omen"),
        .height = 20,
        .weight = 1500,
        .description = gAbsolomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 300,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BANSHEETTE] =
    {
        .categoryName = _("Marionette"),
        .height = 12,
        .weight = 130,
        .description = gBansheettePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FROSLASS] =
    {
        .categoryName = _("Snow Maiden"),
        .height = 13,
        .weight = 266,
        .description = gFroslassPokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIRTOUGA] =
    {
        .categoryName = _("Archelon"),
        .height = 12,
        .weight = 460,
        .description = gTirtougaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LITWICK] =
    {
        .categoryName = _("Candle"),
        .height = 4,
        .weight = 19,
        .description = gLitwickPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAMPENT] =
    {
        .categoryName = _("Lantern"),
        .height = 9,
        .weight = 236,
        .description = gLampentPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = _("Crayfish"),
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = _("Crayfish"),
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BOLDORE] =
    {
        .categoryName = _("Boulder"),
        .height = 9,
        .weight = 1020,
        .description = gBoldorePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIGALITH] =
    {
        .categoryName = _("Crystal"),
        .height = 42,
        .weight = 7810,
        .description = gGigalithPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 400,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = _("Sea Lily"),
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = _("Barnacle"),
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = _("Old Shrimp"),
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = _("Armor"),
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = _("Fish"),
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = _("Sea Serpent"),
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ALOLAN_MAROWAK] =
    {
        .categoryName = _("Fire Dancer"),
        .height = 10,
        .weight = 340,
        .description = gAlolan_MarowakText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROGGENROLA] =
    {
        .categoryName = _("Ore"),
        .height = 4,
        .weight = 180,
        .description = gRoggenrolaPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = _("Puppet"),
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = _("Marionette"),
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GURDURR] =
    {
        .categoryName = _("Muscular"),
        .height = 12,
        .weight = 400,
        .description = gGurdurrPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CONKELDURR] =
    {
        .categoryName = _("Muscular"),
        .height = 14,
        .weight = 870,
        .description = gConkeldurrPokedexText,
        .pokemonScale = 286,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_KYUREM] =
    {
        .categoryName = _("Hollow Soul"),
        .height = 47,
        .weight = 4325,
        .description = gKyuremPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 600,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_ARCEUS] =
    {
        .categoryName = _("Creator"),
        .height = 100,
        .weight = 10000,
        .description = gArceusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 800,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = _("Disaster"),
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TIMBURR] =
    {
        .categoryName = _("Muscular"),
        .height = 6,
        .weight = 125,
        .description = gTimburrPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("Snow Hat"),
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("Face"),
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_TYNAMO] =
    {
        .categoryName = _("Volt Fish"),
        .height = 2,
        .weight = 3,
        .description = gTynamoPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTRIK] =
    {
        .categoryName = _("Volt Fish"),
        .height = 12,
        .weight = 220,
        .description = gEelektrikPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EELEKTROSS] =
    {
        .categoryName = _("Volt Fish"),
        .height = 21,
        .weight = 805,
        .description = gEelektrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 356,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_AZELF] =
    {
        .categoryName = _("Willpower"),
        .height = 3,
        .weight = 3,
        .description = gAzelfPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MESPRIT] =
    {
        .categoryName = _("Emotion"),
        .height = 3,
        .weight = 3,
        .description = gMespritPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UXIE] =
    {
        .categoryName = _("Knowledge"),
        .height = 3,
        .weight = 3,
        .description = gUxiePokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = _("Ancient"),
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHANDELURE] =
    {
        .categoryName = _("Chandelier"),
        .height = 10,
        .weight = 343,
        .description = gChandelurePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = _("Rock Head"),
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = _("Shell"),
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = _("Dragon"),
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = _("Iron Ball"),
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = _("Iron Claw"),
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = _("Iron Leg"),
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_ROCKRUFF] =
    {
        .categoryName = _("Puppy"),
        .height = 5,
        .weight = 92,
        .description = gRockruffPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 6,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LYCANROC] =
    {
        .categoryName = _("Wolf"),
        .height = 8,
        .weight = 250,
        .description = gLycanrocPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_AERODACTYL] =
    {
        .categoryName = _("IRON"),
        .height = 19,
        .weight = 2050,
        .description = gBonded_AerodactylPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_KYUREM_WHITE] =
    {
        .categoryName = _("EON"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KYUREM_BLACK] =
    {
        .categoryName = _("EON"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("Sea  Basin"),
        .height = 85,
        .weight = 13502,
        .description = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("Continent"),
        .height = 62,
        .weight = 29050,
        .description = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("Atmosphere"),
        .height = 108,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_BONDED_AGGRON] =
    {
        .categoryName = _("WISH"),
        .height = 3,
        .weight = 11,
        .description = gBonded_AggronPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BONDED_ALAKAZAM] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
    [NATIONAL_DEX_BONDED_ALTARIA] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_AMPHAROS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_AUDINO] = 
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_BEEDRILL] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_BLASTOISE] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_BLAZIKEN] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_CHARIZARD] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GALLADE] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GARCHOMP] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GARDEVOIR] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GENGAR] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GLALIE] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_GYARADOS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_HERACROSS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_LOPUNNY] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_LUCARIO] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_METAGROSS] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_PIDGEOT] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_PINSIR] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_MEWTWO_X] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_SALAMENCE] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_SCEPTILE] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_SCIZOR] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_STEELIX] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_SWAMPERT] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_TYRANITAR] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BONDED_VENUSAUR] =
    {
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gBonded_AlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    }
};
