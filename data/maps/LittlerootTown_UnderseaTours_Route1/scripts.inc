LittlerootTown_UnderseaTours_Route1_MapScripts::
	.byte 0


LittlerootTown_UnderseaTours_Route1_EventScript_UnderseaWriting::
	msgbox LittlerootTown_UnderseaTours_Route1_Text_FullofGraffiti,MSGBOX_SIGN
	end




LittlerootTown_UnderseaTours_Route1_Text_FullofGraffiti:
	.string "Are these ancient runes?\p"
	.string "Taking a closer look, they\n"
	.string "appear to be graffiti!\p"
	.string "There are all sorts of messages.\p"
	.string "...\p"
	.string "SMEARGLE RULES\p"
	.string "...\p"
	.string "UNDERWATER SHORTS CLUB!\p"
	.string "...\p"
	.string "GRAFFITI IS WRONG!$"


LittlerootTown_UnderseaTours_Route1_EventScript_LeaveUnderwater::
	msgbox LittlerootTown_UnderseaTours_Route1_Text_HopeYouCaught,MSGBOX_SIGN
	warp MAP_LITTLEROOT_TOWN_UNDERSEA_TOURS_1F, -1, 5, 1
	end


LittlerootTown_UnderseaTours_Route1_EventScript_ReturnHome::
	msgbox LittlerootTown_UnderseaTours_Route1_Text_ReturntoTheSurface,MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_UnderseaTours_Route1_EventScript_LeaveUnderwater
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_UnderseaTours_Route1_EventScript_TakeYourTime
	end



LittlerootTown_UnderseaTours_Route1_Text_ReturntoTheSurface:
	.string "Ready to head back up\n"
	.string "to METEOR POINT?$"



LittlerootTown_UnderseaTours_Route1_EventScript_TakeYourTime::
	msgbox LittlerootTown_UnderseaTours_Route1_Text_ExploreTheDeep,MSGBOX_SIGN
	return



LittlerootTown_UnderseaTours_Route1_Text_HopeYouCaught:
	.string "Hope that you caught\n"
	.string "your fill of WATER pokemon!\p"
	.string "We'll be heading back\n"
	.string "up to the surface now.\p"
	.string "Bring er up lads!$"

LittlerootTown_UnderseaTours_Route1_Text_ExploreTheDeep:
	.string "Explore the deep to your\n"
	.string "heart's content!\p"
	.string "I'll be here to take you\n"
	.string "up whenever you're ready!$"