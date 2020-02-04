PetalburgCity_Mart_MapScripts:: @ 8207D68
	.byte 0

PetalburgCity_Mart_EventScript_Clerk:: @ 8207D69
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, PetalburgCity_Mart_EventScript_ExpandedItems
	pokemart PetalburgCity_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PetalburgCity_Mart_Pokemart_Basic: @ 8207D8C
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PECHA_BERRY		
	.2byte ITEM_CHERI_BERRY		
	.2byte ITEM_STEEL_STONE		
	.2byte ITEM_BONDED_STONE		
	.2byte ITEM_TM35		
	.2byte ITEM_NONE
	release
	end

PetalburgCity_Mart_EventScript_ExpandedItems:: @ 8207DA6
	pokemart PetalburgCity_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PetalburgCity_Mart_Pokemart_Expanded: @ 8207DB8
	.2byte ITEM_POKE_BALL
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PECHA_BERRY		
	.2byte ITEM_CHERI_BERRY	
	.2byte ITEM_NONE
	release
	end

PetalburgCity_Mart_EventScript_Woman:: @ 8207DD6
	msgbox PetalburgCity_Mart_Text_WeakWillGrowStronger, MSGBOX_NPC
	end

PetalburgCity_Mart_EventScript_Boy:: @ 8207DDF
	msgbox PetalburgCity_Mart_Text_RepelIsUseful, MSGBOX_NPC
	end

PetalburgCity_Mart_EventScript_Man:: @ 8207DE8
	msgbox PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou, MSGBOX_NPC
	end

PetalburgCity_Mart_Text_WeakWillGrowStronger: @ 8207DF1
	.string "Even if a POKéMON is weak now,\n"
	.string "it will grow stronger.\p"
	.string "The most important thing is love!\n"
	.string "Love for your POKéMON!$"

PetalburgCity_Mart_Text_RepelIsUseful: @ 8207E60
	.string "Do you use REPEL?\n"
	.string "It keeps POKéMON away, so it's\l"
	.string "useful when you're in a hurry.$"

PetalburgCity_Mart_Text_TakeSomeAntidotesWithYou: @ 8207EB0
	.string "Do you have any ANTIDOTES with\n"
	.string "you?\p"
	.string "If you walk around with a poisoned\n"
	.string "POKéMON, it will lose HP until it faints.\l"
	.string "Take some ANTIDOTES with you.$"

