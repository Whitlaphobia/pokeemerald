LittlerootTown_WeatherInstitute_2F_MapScripts::
	.byte 0
LittlerootTown_WeatherInstitute_2F_EventScript_BigWindow:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_2F_Text_BeautifulView, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_2F_EventScript_SmallWindow:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_2F_Text_WindowLight, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_2F_EventScript_ShipTable:: @ 81FA4C4
	msgbox LittlerootTown_WeatherInstitute_2F_Text_ShipPlans, MSGBOX_SIGN
	end


LittlerootTown_WeatherInstitute_2F_Text_BeautifulView: @ 81FB124
	.string "It's even nicer from higher up!$"

LittlerootTown_WeatherInstitute_2F_Text_WindowLight: @ 81FB124
	.string "Not much to see, but \n"
	.string "it's nice to have natural light in here.$"


LittlerootTown_WeatherInstitute_2F_Text_ShipPlans: @ 81FB124
	.string "Plans for some kind of ship. \n"
	.string "It seems to be shaped to pierce through ice.$"



