LittlerootTown_WeatherInstitute_3F_MapScripts::
	.byte 0
LittlerootTown_WeatherInstitute_3F_EventScript_BigWindow3F:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_3F_Text_BreathtakingView, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_EventScript_KeanuWindow:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_3F_Text_BreathtakingYou, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_EventScript_SmallWindow3F:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_3F_Text_AWingullNest, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_EventScript_Barometers3F:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_3F_Text_DifferentRegions, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_Text_AWingullNest: @ 81FB124
	.string "A family of WINGULL have set up\n"
	.string "a nest in the window nook!$"

LittlerootTown_WeatherInstitute_3F_Text_DifferentRegions: @ 81FB124
	.string "The barometers here display \n"
	.string "the air pressure\p"
	.string "of various locations\n"
	.string "throughout the region.$"


	
LittlerootTown_WeatherInstitute_3F_Text_BreathtakingView: @ 81FB124
	.string "From here, the town is breathtaking.$"
LittlerootTown_WeatherInstitute_3F_Text_BreathtakingYou: @ 81FB124
	.string "Looking at the view, you're struck\n"
	.string "by the words of an old friend\p"
	.string "You,too, are breathtaking.$"