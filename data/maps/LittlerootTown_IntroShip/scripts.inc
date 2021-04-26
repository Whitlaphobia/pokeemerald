.set LOCALID_MEW, 1

LittlerootTown_IntroShip_MapScripts::
	.byte 0



LittlerootTown_IntroShip_EventScript_BalconyLookout:: @ 81E8151
	msgbox LittlerootTown_IntroShip_Text_LandHo, MSGBOX_SIGN
	end


LittlerootTown_IntroShip_EventScript_CargoHold:: @ 81E8151
	msgbox LittlerootTown_IntroShip_Text_ThankGoodness, MSGBOX_SIGN
	end


LittlerootTown_IntroShip_Text_ThankGoodness: @ 81E8D32
	.string "Cargo is transported on the back.\n"
	.string "of the ship.\p"
	.string "Thank goodness you didn't have\n"
	.string "to stay back there!$"

LittlerootTown_IntroShip_Text_LandHo: @ 81E8D32
	.string "LAND HO!!\p"
	.string "Your long voyage is over\n"
	.string "at last.$"
