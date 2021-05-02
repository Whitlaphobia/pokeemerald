.set LOCALID_SHELLEY,2
LittlerootTown_UnderseaTours_1F_MapScripts::
	.byte 0

LittlerootTown_UnderseaTours_1F_EventScript_ShelleyWelcome:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_UnderseaTours_1F_Text_WelcomeIn, MSGBOX_DEFAULT
	call_if_unset FLAG_RECEIVED_OLD_ROD, LittlerootTown_UnderseaTours_1F_EventScript_GetOldRod
	call_if_set FLAG_RECEIVED_OLD_ROD, LittlerootTown_UnderseaTours_1F_EventScript_GotRod
	end

LittlerootTown_UnderseaTours_1F_EventScript_GetOldRod::
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	release
	end

LittlerootTown_UnderseaTours_1F_EventScript_GotRod::
	msgbox LittlerootTown_UnderseaTours_1F_Text_DontBeGreedy, MSGBOX_SIGN
	release
	end

LittlerootTown_UnderseaTours_1F_Text_DontBeGreedy: @ 81E8ACF
	.string "Ahh you thought you could pull\n"
	.string "a fast one on me lass?\p"
	.string "Youve already got an OLD ROD!$"


LittlerootTown_UnderseaTours_1F_EventScript_GarbageCan:: @ 81E8151
	msgbox LittlerootTown_UnderseaTours_1F_Text_FullofDefective, MSGBOX_SIGN
	end
LittlerootTown_UnderseaTours_1F_EventScript_ShippingCrates:: @ 81E8151
	msgbox LittlerootTown_UnderseaTours_1F_Text_ArriveHere, MSGBOX_SIGN
	end
LittlerootTown_UnderseaTours_1F_EventScript_Balcony:: @ 81E8151
	msgbox LittlerootTown_UnderseaTours_1F_Text_ShadowofSubmarine, MSGBOX_SIGN
	end
LittlerootTown_UnderseaTours_1F_EventScript_MetalDoor:: @ 81E8151
	msgbox LittlerootTown_UnderseaTours_1F_Text_LockedTight, MSGBOX_SIGN
	end
LittlerootTown_UnderseaTours_1F_EventScript_SignupComputer:: @ 81E8151
	msgbox LittlerootTown_UnderseaTours_1F_Text_FormandWaiver, MSGBOX_SIGN
	end
LittlerootTown_UnderseaTours_1F_EventScript_AirPressurizer:: @ 81E8151
	msgbox LittlerootTown_UnderseaTours_1F_Text_AirforSub, MSGBOX_SIGN
	end

LittlerootTown_UnderseaTours_1F_Text_ArriveHere: @ 81E8ACF
	.string "Lots of imported goods from\n"
	.string "the mainland arrive here.$"
	
LittlerootTown_UnderseaTours_1F_Text_ShadowofSubmarine: @ 81E8ACF
	.string "Below you can see the shadow\n"
	.string "of the submerged submarine.$"
	
LittlerootTown_UnderseaTours_1F_Text_LockedTight: @ 81E8ACF
	.string "The metal gate leading to the sub\n"
	.string "is locked tight.$"
	
LittlerootTown_UnderseaTours_1F_Text_FormandWaiver: @ 81E8ACF
	.string "To sign up for the undersea tour,\n"
	.string "you need to sign this waiver.\p"
	.string "...\p"
	.string "Wow.\n"
	.string "Traveling underseas sure is dangerous.$"

LittlerootTown_UnderseaTours_1F_Text_AirforSub: @ 81E8ACF
	.string "A device for pressurizing air\n"
	.string "for undersea voyages.$"
	
LittlerootTown_UnderseaTours_1F_Text_WelcomeIn: @ 81E8ACF
	.string "Ahoy there lass.\p"
	.string "if ye enthralled by the sea,\n"
	.string "yer in the right place.\p"
	.string "I'll give ye a souvenir for\n"
	.string "yer visit, but ye should book\p"
	.string "a tour with us if ye\n"
	.string "get the chance\p"
	.string "It's the best way to experience\n"
	.string "the local culture!$"

LittlerootTown_UnderseaTours_1F_Text_FullofDefective: @ 81E8ACF
	.string "It's full of defective\n"
	.string "snowglobes.\p"
	.string "The water has leaked out of them.$"








	
LittlerootTown_UnderseaTours_1F_EventScript_EntranceCounterTrigger:: @ 822BC18
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	applymovement LOCALID_SHELLEY, Common_Movement_WalkInPlaceFastestDown
	waitmovement 0
	showmoneybox 0, 0, 0
	msgbox LittlerootTown_UnderseaTours_1F_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_UnderseaTours_1F_EventScript_TryEnterUnderseaTours
	msgbox LittlerootTown_UnderseaTours_1F_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto LittlerootTown_UnderseaTours_1F_EventScript_MovePlayerBackFromCounter
	end

LittlerootTown_UnderseaTours_1F_EventScript_TryEnterUnderseaTours:: @ 822BC48

	call LittlerootTown_UnderseaTours_1F_EventScript_CheckHasRoomForPokemon
	checkmoney 500, 0
	compare VAR_RESULT, 0
	goto_if_eq LittlerootTown_UnderseaTours_1F_EventScript_NotEnoughMoney
	playse SE_SHOP
	msgbox LittlerootTown_UnderseaTours_1F_Text_ThatWillBe500Please, MSGBOX_DEFAULT
	removemoney 1000, 0
	updatemoneybox 0, 0
	msgbox LittlerootTown_UnderseaTours_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	warp MAP_LITTLEROOT_TOWN_UNDERSEA_TOURS_ROUTE1, -1, 14, 18
	waitstate
	end


LittlerootTown_UnderseaTours_1F_EventScript_HasRoomForPokemon:: @ 822BCE9
	return


LittlerootTown_UnderseaTours_1F_EventScript_NotEnoughMoney:: @ 822BCF8
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end


LittlerootTown_UnderseaTours_1F_Movement_BackAwayFromCounter: @ 822BD16
	walk_down
	step_end


LittlerootTown_UnderseaTours_1F_EventScript_MovePlayerBackFromCounter:: @ 822BD06
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_UnderseaTours_1F_Movement_BackAwayFromCounter
	waitmovement 0
	releaseall
	end


LittlerootTown_UnderseaTours_1F_EventScript_CheckHasRoomForPokemon:: @ 822BCBF
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_ne LittlerootTown_UnderseaTours_1F_EventScript_HasRoomForPokemon
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	compare VAR_RESULT, 1
	goto_if_eq LittlerootTown_UnderseaTours_1F_EventScript_HasRoomForPokemon
	msgbox LittlerootTown_UnderseaTours_1F_Text_PCIsFull, MSGBOX_DEFAULT
	goto LittlerootTown_UnderseaTours_1F_EventScript_MovePlayerBackFromCounter
	end



LittlerootTown_UnderseaTours_1F_Text_WouldYouLikeToPlay: @ 82A4F74
	.string "Ahoy! And welcome to\n"
	.string "METEOR POINT UNDERSEA TOURS!\p"
	.string "All you can catch for just ¥1000!\n"
	.string "Explore the depths of the vast ocean?$"

LittlerootTown_UnderseaTours_1F_Text_PlayAnotherTime: @ 82A4FD7
	.string "Come on back, y'hear?\p"
	.string "No better way to experience\n"
	.string "the sea or the local culture!$"

LittlerootTown_UnderseaTours_1F_Text_NotEnoughMoney: @ 82A4FF7
	.string "Yer fresh out of dubloons miss.$"

LittlerootTown_UnderseaTours_1F_Text_ThatWillBe500Please: @ 82A501B
	.string "That'll be ¥1000, if it pleases ye.$"


LittlerootTown_UnderseaTours_1F_Text_PleaseEnjoyYourself: @ 82A506F
	.string "When yer exploring the ocean floor,\n"
	.string "you can return to the sub\p"
	.string "at any time to come back\n"
	.string "to the surface and head home.$"

LittlerootTown_UnderseaTours_1F_Text_PCIsFull: @ 82A50E5
	.string "Ahh, sorry lass.\n"
	.string "Your PC BOX is jammed full.$"