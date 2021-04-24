
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
LittlerootTown_EventScript_Wingull:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_Text_WingullSound, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_YoungsterDavidGreeting:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_Text_ShortsStateOfMind, MSGBOX_DEFAULT
	release
	end

LittlerootTown_EventScript_VincentWelcome:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_Text_ItMustBeTough, MSGBOX_DEFAULT
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
LittlerootTown_EventScript_ShelleySign:: @ 81E8151
	msgbox LittlerootTown_Text_TheShelleyResidence, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BrineySign:: @ 81E8151
	msgbox LittlerootTown_Text_TheBrineyResidence, MSGBOX_SIGN
	end
LittlerootTown_EventScript_VincentSign:: @ 81E8151
	msgbox LittlerootTown_Text_StudioVincent, MSGBOX_SIGN
	end
LittlerootTown_EventScript_WeatherInstituteSign:: @ 81E8151
	msgbox LittlerootTown_Text_UnlockTheSecrets, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BrineyGarden1:: @ 81E8151
	msgbox LittlerootTown_Text_ALovelyGardenTomato, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BrineyGarden2:: @ 81E8151
	msgbox LittlerootTown_Text_ALovelyGardenCarrots, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BarracksWindows1:: @ 81E8151
	msgbox LittlerootTown_Text_CleanAndOpen, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BarracksWindows2:: @ 81E8151
	msgbox LittlerootTown_Text_BetterCloseTheBlinds, MSGBOX_SIGN
	end
LittlerootTown_EventScript_BarracksSign:: @ 81E8151
	msgbox LittlerootTown_Text_WeatherInstituteBarracks, MSGBOX_SIGN
	end



LittlerootTown_Text_CleanAndOpen: @ 81E8D32
	.string "You can see into the common area.\n"
	.string "It's clean and spaceous.\p"
	.string "Seems like people take good care of it!$"

LittlerootTown_Text_BetterCloseTheBlinds: @ 81E8D32
	.string "This one looks right into your room!.\n"
	.string "You'd better close the blinds!$"

LittlerootTown_Text_WeatherInstituteBarracks: @ 81E8D32
	.string "WEATHER INSTITUTE BARRACKS\n"
	.string "“Even WE need shelter from the weather!”$"

LittlerootTown_Text_ALovelyGardenCarrots: @ 81E8D32
	.string "A pretty little garden to grow vegetables.\n"
	.string "They seem to be growing like crazy!\p"
	.string "You've never seen carrots so leafy!$"
LittlerootTown_Text_ALovelyGardenTomato: @ 81E8D32
	.string "A cute little garden to grow fruit.\n"
	.string "They look very well taken care of!\p"
	.string "You've never seen tomatoes\n"
	.string "so red and plump!$"
LittlerootTown_Text_UnlockTheSecrets: @ 81E8D32
	.string "METEOR POINT METEOROLOGY\n"
	.string "“Unlock the secrets of nature\p"
	.string "with SCIENCE!”$"

LittlerootTown_Text_StudioVincent: @ 81E8D32
	.string "STUDIO DE VINCENT\n"
	.string "“Life is art, so express yourself!”$"

LittlerootTown_Text_TheBrineyResidence: @ 81E8D32
	.string "PEEKO POINT\n"
	.string "“Lovingly named for a lifelong partner”$"

LittlerootTown_Text_TheShelleyResidence: @ 81E8D32
	.string "UNDERSEA TOURS HQ\n"
	.string "“Uncover the mysteries\p"
	.string "of the ocean floor!”$"

LittlerootTown_Text_ProbablyBest: @ 81E8D32
	.string "It's probably best not to\n"
	.string "look through peoples' windows.$"
LittlerootTown_Text_TheSmellOf: @ 81E8D32
	.string "The smell of lovely home cooking\n"
	.string "wafts from the house.$"


LittlerootTown_Text_TownSign: @ 81E8D32
	.string "METEOR POINT\n"
	.string "“How about this weather!”$"

LittlerootTown_Text_NiceRock: @ 81E8D32
	.string "WOW!\n"
	.string "This rock sure is neat.$"

LittlerootTown_Text_ShortsStateOfMind: @ 81E8ACF
	.string "It may be snowing,\n"
	.string "but I won't give in!\p"
	.string "Shorts weather is a state of mind!$"

LittlerootTown_Text_SidneyWelcome: @ 81E8ACF
	.string "Welcome to METEOR POINT!\n"
	.string "I'll have your stuff moved in in no time.\p"
	.string "We should be done before you finish \n"
	.string "your orientation.$"
LittlerootTown_Text_ItMustBeTough: @ 81E8ACF
	.string "Oh, you just moved in?\n"
	.string "I'm quite sure you'll love it here.\p"
	.string "Though it can be hard moving to a \n"
	.string "new place where you don't know anyone...\p"
	.string "Tell you what, why don't you\n"
	.string "come by my house sometime?\p"
	.string "I live in the little cabin\n"
	.string "on the beach to the south\p"
	.string "My door is always open!$"
LittlerootTown_Text_TrainingOurLapras: @ 81E8D32
	.string "We're training our Lapras\n"
	.string "to take us overseas.\p"
	.string "We'll be able to see our \n"
	.string "grandkids whenever we like!$"
LittlerootTown_Text_ThisBagContains: @ 81E8D32
	.string "This bag contains many toys and treats.\n"
	.string "Perfect for training pokemon!$"

LittlerootTown_Text_FishermanonLeave: @ 81E8D32
	.string "I'm a fisherman,\n"
	.string "but today I have the day off.\p"
	.string "Things aren't so easy for us fishermen.\n"
	.string "The storms here can be really nasty.\p"
	.string "Is this career really for me?$"

	LittlerootTown_Text_WingullSound: @ 81E8D32
	.string "PYYOOO!$"



