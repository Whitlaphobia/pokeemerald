LittlerootTown_IntroShip_Room_MapScripts::
	.byte 0

LittlerootTown_IntroShip_EventScriptRoom_MewDoll:: @ 81E8151
	msgbox LittlerootTown_IntroShipRoom_Text_DidYouReallyThink, MSGBOX_SIGN
	end


LittlerootTown_IntroShipRoom_Text_DidYouReallyThink: @ 81E8D32
	.string "Oh my goodness it's a MEW!\p"
	.string "...\p"
	.string "Doll,\p"
	.string "It's a MEW doll.$"


LittlerootTown_IntroShip_EventScriptRoom_LifePreserver:: @ 81E8151
	msgbox LittlerootTown_IntroShipRoom_Text_Lifeguard, MSGBOX_SIGN
	end
LittlerootTown_IntroShipRoom_Text_Lifeguard: @ 81E8D32
	.string "It's bolted to the wall.\p"
	.string "Seems unlikely to be saving\n"
	.string "any lives.$"

LittlerootTown_IntroShip_EventScriptRoom_Garbage:: @ 81E8151
	msgbox LittlerootTown_IntroShipRoom_Text_CleanStart, MSGBOX_SIGN
	end
LittlerootTown_IntroShipRoom_Text_CleanStart: @ 81E8D32
	.string "An empty garbage can\n"
	.string "for a clean new beginning.$"

LittlerootTown_IntroShip_EventScriptRoom_Bed:: @ 81E8151
	msgbox LittlerootTown_IntroShipRoom_Text_ReasonablyComfy, MSGBOX_SIGN
	end
LittlerootTown_IntroShipRoom_Text_ReasonablyComfy: @ 81E8D32
	.string "Who puts a water bed on a boat?\p"
	.string "At least it was\n"
	.string "reasonably comfy.$"

LittlerootTown_IntroShip_EventScriptRoom_Deskwork:: @ 81E8151
	msgbox LittlerootTown_IntroShipRoom_Text_AlmostLeft, MSGBOX_SIGN
	end

LittlerootTown_IntroShipRoom_Text_AlmostLeft: @ 81E8D32
	.string "Always good to double-check\n"
	.string "that you haven't left\p"
	.string "anything behind.\p"
	.string "You'll never forget the time\n"
	.string "you lost your pokemon ruby...$"
