LittlerootTown_WeatherBarracks_1F_MapScripts::
	.byte 0


LittlerootTown_WeatherBarracks_1F_EventScript_Unfinished::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_Sorry,MSGBOX_SIGN
	setvar VAR_TEMP_0,1
	end


LittlerootTown_WeatherBarracks_1F_Text_Sorry:
	.string "Sorry! This building\n"
	.string "is not finished.\p"
	.string "Feel free to look\n"
	.string "at the map though!$"