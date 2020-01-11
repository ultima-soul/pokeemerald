Route130_MapScripts:: @ 81F735F
	map_script MAP_SCRIPT_ON_TRANSITION, Route130_OnTransition
	.byte 0

Route130_OnTransition: @ 81F7365
	call Common_EventScript_SetupRivalGfxId
	end

Zaurak_Bridge_Conversation:: @ 82078F3
	checkplayergender
	compare VAR_RESULT, MALE
	call_if_eq Zaurak_Bridge_Conversation_Derek
	compare VAR_RESULT, FEMALE
	call_if_eq Zaurak_Bridge_Conversation_Kate
	end
	
Zaurak_Bridge_Conversation_Derek::
	load_field_pic 1, 40, 83, VAR_0x8008
	load_field_pic 4, 200, 83, VAR_0x8009
	msgbox Zaurak_Bridge_Derek_Text_First_Battle, MSGBOX_NPC	
	destroy_field_pic 1, VAR_0x8008
	destroy_field_pic 4, VAR_0x8009
	return
	
Zaurak_Bridge_Conversation_Kate::	
	load_field_pic 3, 40, 83, VAR_0x8008
	load_field_pic 2, 200, 83, VAR_0x8009
	msgbox Zaurak_Bridge_Kate_Text_First_Battle,MSGBOX_NPC
	destroy_field_pic 3, VAR_0x8008
	destroy_field_pic 2, VAR_0x8009
	return
	
Zaurak_Bridge_Derek_Text_First_Battle:
	.string "Hey {PLAYER}. Ready to head to\n"
	.string "Zaurak City?\p"
	.string "Before we go to see Professor\n"
	.string "Hazel. How about a friendly\p"
	.string "Battle?$"
	
Zaurak_Bridge_Kate_Text_First_Battle:
	.string "Hey {PLAYER}. Ready to head to\n"
	.string "Zaurak City?\p"
	.string "Before we go to see Professor\n"
	.string "Hazel. How about a friendly\p"
	.string "Battle?$"	