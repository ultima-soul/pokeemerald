#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

extern const u16 gBirchBagGrassPal[2][16];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchHelpGfx[];

u16 GetStarterPokemon(u16 chosenStarterId, bool8 wantFormId);
void CB2_ChooseStarter(void);

#endif // GUARD_STARTER_CHOOSE_H
