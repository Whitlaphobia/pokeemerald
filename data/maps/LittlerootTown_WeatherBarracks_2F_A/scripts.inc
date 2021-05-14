LittlerootTown_WeatherBarracks_2F_A_MapScripts::
	.byte 0


LittlerootTown_WeatherBarracks_2F_A_EventScript_TalkToDrake1::
	lock
	faceplayer
	call_if_unset FLAG_DRAKE_MISSION_BRIEF_1, LittlerootTown_WeatherBarracks_2F_A_EventScript_DrakeMissionBriefing
	call_if_set FLAG_DRAKE_MISSION_BRIEF_1, LittlerootTown_WeatherBarracks_2F_A_EventScript_ReadytoLeave
	end
	
LittlerootTown_WeatherBarracks_2F_A_EventScript_ReadytoLeave::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_ReadytoLeave, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_WeatherBarracks_2F_A_EventScript_LeaveMeteorPoint
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_WeatherBarracks_2F_A_EventScript_TakeTimetoPrepare
	end

LittlerootTown_WeatherBarracks_2F_A_EventScript_TakeTimetoPrepare::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_GoGetReady, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherBarracks_2F_A_EventScript_LeaveMeteorPoint::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_LetsLeaveNow, MSGBOX_DEFAULT
	warp MAP_TANTRAMARSH_TOWN_OCEAN_PORT_1F, -1, 13, 14
	end

LittlerootTown_WeatherBarracks_2F_A_Text_GoGetReady:	
	.string "Well then go get ready.\n"
	.string "I'm ready to leave when you are.$"

LittlerootTown_WeatherBarracks_2F_A_Text_ReadytoLeave:	
	.string "Have you made all of your\n"
	.string "preparations for the assignment?$"

LittlerootTown_WeatherBarracks_2F_A_Text_LetsLeaveNow:	
	.string "Let's head out then!\n"
	.string "No time to waste.$"

LittlerootTown_WeatherBarracks_2F_A_EventScript_DrakeMissionBriefing::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_DrakeMission, MSGBOX_SIGN
	setflag FLAG_DRAKE_MISSION_BRIEF_1
	release
	end
	
LittlerootTown_WeatherBarracks_2F_A_EventScript_LabComputerGoof::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_LabComputer, MSGBOX_SIGN
	end


LittlerootTown_WeatherBarracks_2F_A_Text_LabComputer:	
	.string "Somebody is a real\n"
	.string "master of VOLTORB flip!$"


LittlerootTown_WeatherBarracks_2F_A_EventScript_LabComputerMeta::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_VisualStudio, MSGBOX_SIGN
	end


LittlerootTown_WeatherBarracks_2F_A_Text_VisualStudio:	
	.string "It has visual studio code open.\p"
	.string "It appears that they're working on\n"
	.string "Some kind of pokemon battle simulator?$"



LittlerootTown_WeatherBarracks_2F_A_Text_DrakeMission:	
	.string "Hello {PLAYER},\p"
	.string "How was your orientation?\n"
	.string "I see you've chosen a companion.\p"
	.string "I hope they serve you well in the\n"
	.string "challenges to come.\p"
	.string "Anyhow, moving on...\p"
	.string "For your first assignment, you\n"
	.string "will be searching for a lost piece\p"
	.string "of old technology. Years ago, in\n"
	.string "the HOENN region, scientists invented\p"
	.string "a machine that could change the weather.\p"
	.string "We once had posession of one, but it\n"
	.string "was lost when a HURRICANE hit us unawares.\p"
	.string "We think we have located it using\n"
	.string "satellite imagery, so we're sending\p"
	.string "you in to investigate.\p"
	.string "You'll be sent in near\n"
	.string "TANTRAMARSH TOWN to search.$"


LittlerootTown_WeatherBarracks_2F_A_EventScript_BoxesPackedWith::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_BoxesSupplies, MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_2F_A_Text_BoxesSupplies:	
	.string "Boxes of supplies for the lab.\p"
	.string "There's a lot going on for\n"
	.string "such a small space.$"



LittlerootTown_WeatherBarracks_2F_A_EventScript_ThreeRingBinders::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_BinderandBinders, MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_2F_A_Text_BinderandBinders:	
	.string "Binders and binders of research\n"
	.string "data and mission logs.$"


LittlerootTown_WeatherBarracks_2F_A_EventScript_SatelliteMap::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_TopographicalMap, MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_2F_A_Text_TopographicalMap:	
	.string "A detailed topographical map\n"
	.string "of the region that includes\p"
	.string "air pressure systems.$"


LittlerootTown_WeatherBarracks_2F_A_EventScript_TakeoutReceipt::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_PizzaPayment, MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_2F_A_Text_PizzaPayment:	
	.string "It's just a tally of who owes\n"
	.string "who money for pizza orders.$"


LittlerootTown_WeatherBarracks_2F_A_EventScript_SoilBook::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_BookOnSoil, MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_2F_A_Text_BookOnSoil:	
	.string "It's a field guide\n"
	.string "on different kinds of soils!$"

LittlerootTown_WeatherBarracks_2F_A_EventScript_CloudBook::
	msgbox LittlerootTown_WeatherBarracks_2F_A_Text_BookOnClouds, MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_2F_A_Text_BookOnClouds:	
	.string "It's a field guide\n"
	.string "on different kinds of clouds!$"

