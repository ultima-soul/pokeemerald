PetalburgCity_MapScripts::
	.byte 0

Teala_EventScript::
	faceplayer	
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PetalburgCity_Conversation_Derek
	compare VAR_RESULT, FEMALE
	goto_if_eq PetalburgCity_Conversation_Kate
	msgbox Beta_Teala_Text MSGBOX_NPC		
	end

PetalburgCity_Conversation_Derek::
	load_field_pic 5, 200, 83, VAR_0x8009
	load_field_pic 1, 40, 83, VAR_0x8008
	goto_if_unset FLAG_MET_RIVAL_MOM, Beta_EventScript_Give_Starter_Kit
	msgbox Beta_Teala_Text MSGBOX_NPC	
	destroy_field_pic 5, VAR_0x8009
	destroy_field_pic 1, VAR_0x8008
	return

PetalburgCity_Conversation_Kate::
	load_field_pic 5, 200, 83, VAR_0x8009
	load_field_pic 3, 40, 83, VAR_0x8008
	goto_if_unset FLAG_MET_RIVAL_MOM, Beta_EventScript_Give_Starter_Kit
	msgbox Beta_Teala_Text MSGBOX_NPC	
	destroy_field_pic 5, VAR_0x8009
	destroy_field_pic 3, VAR_0x8008
	return
		
Beta_EventScript_Give_Starter_Kit:: @ 827004D	
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_MET_RIVAL_MOM
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	@special ChooseStarter
	givemon SPECIES_BONDED_BLAZIKEN, 50, ITEM_CHARCOAL
	givemon SPECIES_BONDED_METAGROSS, 50, ITEM_LEFTOVERS
	givemon SPECIES_MIGHTYENA, 50, ITEM_BLACK_GLASSES
	givemon SPECIES_BONDED_PIDGEOT, 50, ITEM_SHARP_BEAK
	givemon SPECIES_FROSLASS, 50, ITEM_NEVER_MELT_ICE
	givemon SPECIES_RESHIRAM, 50, ITEM_DRAGON_FANG
	return
	
Deneb_Academy_Lukas:: @ 81DC3FD
	faceplayer
	msgbox Beta_Lukas_Message, MSGBOX_NPC
	applymovement 4, turn_left
	closemessage
	end

Deneb_Academy_Carly:: @ 81DC3FD
	faceplayer	
	msgbox Beta_Carly_Message, MSGBOX_NPC
	applymovement 3, turn_right
	closemessage
	end	

turn_left: 
	face_left
	step_end
	
turn_right:
	face_right
	step_end
	
Beta_Starter_kit_message:
	.string "Take a starting kit for the beta.\p"

Beta_Lukas_Message:
	.string "Can't you see I'm busy?$"
	
Beta_Carly_Message:
	.string "I'm battling right now.\n"
	.string "We can talk afterwards.$"
	
Beta_Teala_Text:
	.string "Please take care {PLAYER}\n"
	.string "I am rooting for you.$"
