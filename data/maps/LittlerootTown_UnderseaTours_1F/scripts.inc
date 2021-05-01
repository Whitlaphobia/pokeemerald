LittlerootTown_UnderseaTours_1F_MapScripts::
	.byte 0

LittlerootTown_UnderseaTours_1F_EventScript_ShelleyWelcome:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_UnderseaTours_1F_Text_WelcomeIn, MSGBOX_DEFAULT
	call_if_unset FLAG_RECEIVED_OLD_ROD, LittlerootTown_UnderseaTours_1F_EventScript_GetOldRod
	release
	end

LittlerootTown_UnderseaTours_1F_EventScript_GetOldRod::
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	return



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
	.string "Hi there!\p"
	.string "Sorry that I can't \n"
	.string "do anything yet\p"
	.string "The script just doesn't exist!.$"

LittlerootTown_UnderseaTours_1F_Text_FullofDefective: @ 81E8ACF
	.string "It's full of defective\n"
	.string "snowglobes.\p"
	.string "The water has leaked out of them.$"
