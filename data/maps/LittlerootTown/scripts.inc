
LittlerootTown_MapScripts:: @ 81E7DCB
	.byte 0


LittlerootTown_EventScript_TownSign:: @ 81E8151
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
	end
LittlerootTown_EventScript_Rock:: @ 81E8151
	msgbox LittlerootTown_Text_NiceRock, MSGBOX_SIGN
	end
LittlerootTown_EventScript_SidneyMove:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_Text_SidneyWelcome, MSGBOX_DEFAULT
	release
	end
LittlerootTown_EventScript_OldManLapras:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_Text_TrainingOurLapras, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_FishermanonBreak:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_Text_FishermanonLeave, MSGBOX_DEFAULT
	release
	end


LittlerootTown_EventScript_LaprasTrainingBag:: @ 81E8151
	msgbox LittlerootTown_Text_ThisBagContains, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BrineyHouseWindow:: @ 81E8151
	msgbox LittlerootTown_Text_TheSmellOf, MSGBOX_SIGN
	end
LittlerootTown_EventScript_ShelleyHouseWindow:: @ 81E8151
	msgbox LittlerootTown_Text_ProbablyBest, MSGBOX_SIGN
	end

LittlerootTown_Text_ProbablyBest: @ 81E8D32
	.string "It's probably best not to\n"
	.string "look through people's windows.”$"
LittlerootTown_Text_TheSmellOf: @ 81E8D32
	.string "The smell of lovely home cooking\n"
	.string "wafts out of the house.$"


LittlerootTown_Text_TownSign: @ 81E8D32
	.string "METEOR POINT\n"
	.string "“How about this weather!”$"

LittlerootTown_Text_NiceRock: @ 81E8D32
	.string "WOW!\n"
	.string "This rock sure is neat.$"
LittlerootTown_Text_SidneyWelcome: @ 81E8ACF
	.string "Welcome to METEOR POINT!\n"
	.string "I'll have your stuff moved in in no time.\p"
	.string "We should be done before you finish \n"
	.string "your orientation.$"

LittlerootTown_Text_TrainingOurLapras: @ 81E8D32
	.string "We're training our Lapras\n"
	.string "to take us overseas.\p"
	.string "We'll be able to see our \n"
	.string "grandkids whenever we like!$"
LittlerootTown_Text_ThisBagContains: @ 81E8D32
	.string "This bag contains lots of toys and treats.\n"
	.string "Perfect for training pokemon!$"

LittlerootTown_Text_FishermanonLeave: @ 81E8D32
	.string "I'm a fisherman,\n"
	.string "but today I have the day off.\p"
	.string "Things aren't so easy for us fishermen.\n"
	.string "The storms here can be really nasty.\p"
	.string "Is this career really for me?$"