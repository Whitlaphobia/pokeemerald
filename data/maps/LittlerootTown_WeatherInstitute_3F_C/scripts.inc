LittlerootTown_WeatherInstitute_3F_C_MapScripts::
	.byte 0


LittlerootTown_WeatherInstitute_3F_C_EventScript_SidneyCounter:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_PokemonDaycare, MSGBOX_DEFAULT
	release
	end
LittlerootTown_WeatherInstitute_3F_C_EventScript_Kecleon:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_KecleonSound, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_C_EventScript_CyndaquilDoll:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_JustaDoll, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_C_EventScript_DaycareWindows:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_LotsOfLight, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_C_EventScript_BoxOfToys:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_PackedtoTheBrim, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_C_EventScript_MeowthDoll:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_MeowthDoll, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_C_EventScript_SnorlaxDoll:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_BlockingtheWay, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_C_EventScript_Plant:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_NaturalAir, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_C_Text_NaturalAir: @ 81E8ACF
	.string "Having lots of plants around\n"
	.string "is good for pokemon development!$"

LittlerootTown_WeatherInstitute_3F_C_Text_KecleonSound: @ 81E8ACF
	.string "...\p"
	.string "...?$"

LittlerootTown_WeatherInstitute_3F_C_Text_LotsOfLight: @ 81E8ACF
	.string "You can see into a nursery\n"
	.string "full of sleeping baby pokemon.\p"
	.string "Better not wake them up!$"

LittlerootTown_WeatherInstitute_3F_C_Text_PackedtoTheBrim: @ 81E8ACF
	.string "Boxes packed to the brim\n"
	.string "with toys for all kinds of pokemon.$"

LittlerootTown_WeatherInstitute_3F_C_Text_MeowthDoll: @ 81E8ACF
	.string "This MEOWTH doll is very lifelike.\p"
	.string "It even has a real coin\n"
	.string " stitched to its head.$"

LittlerootTown_WeatherInstitute_3F_C_Text_BlockingtheWay: @ 81E8ACF
	.string "Just like a real SNORELAX,\n"
	.string "this doll blocks the way.\p"
	.string "It's the most lifelike of all!$"

LittlerootTown_WeatherInstitute_3F_C_Text_JustaDoll: @ 81E8ACF
	.string "It's very lifelike,\n"
	.string "but it's actually just a doll.\p"
	.string "CYNDAQUIL sure is cute!$"
LittlerootTown_WeatherInstitute_3F_C_Text_PokemonDaycare: @ 81E8ACF
	.string "It's very lifelike,\n"
	.string "but it's actually just a doll.\p"
	.string "Cyndaquil sure is cute!$"
