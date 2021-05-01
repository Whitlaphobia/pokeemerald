.set LOCALID_BALL_CASTFORM, 2
.set LOCALID_BALL_SWABLU, 11
.set LOCALID_AIDE, 10

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
	.string "Just like a real SNORLAX,\n"
	.string "this doll blocks the way.\p"
	.string "It's the most lifelike of all!$"



LittlerootTown_WeatherInstitute_3F_C_Text_JustaDoll: @ 81E8ACF
	.string "It's very lifelike,\n"
	.string "but it's actually just a doll.\p"
	.string "CYNDAQUIL sure is cute!$"



LittlerootTown_WeatherInstitute_3F_C_EventScript_HavePokemon:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_PokemonDaycare, MSGBOX_DEFAULT
	release
	end
	
LittlerootTown_WeatherInstitute_3F_C_Text_PokemonDaycare: @ 81E8ACF
	.string "This is the pokemon daycare\n"
	.string "where we raise pokemon specially\p"
	.string "to be perfect partners for our work!$"




 LittlerootTown_WeatherInstitute_3F_C_Text_YoullTakeCastform:
	.string "You'll take CASTFORM,\n"
	.string "the forecast pokemon?\p"
	.string "CASTFORM adapts its form and\n"
	.string "type according to the weather\p"
	.string "with its FORECAST.$"

LittlerootTown_WeatherInstitute_3F_C_Text_YoullTakeSwablu:
	.string "You'll take SWABLU,\n"
	.string "cloud bird pokemon?\p"
	.string "SWABLU negates the effects\n"
	.string "of weather with its CLOUD NINE.$"


LittlerootTown_WeatherInstitute_3F_C_EventScript_SwabluBall:: @ 81F9FBB
	release
	setflag FLAG_SYS_POKEMON_GET
	showmonpic SPECIES_SWABLU, 10, 3
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_YoullTakeSwablu, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_WeatherInstitute_3F_C_EventScript_TakeYourTime
	goto LittlerootTown_WeatherInstitute_3F_C_EventScript_GiveSwablu
	end

LittlerootTown_WeatherInstitute_3F_C_EventScript_CastformBall:: @ 81F9FBB
	release
	setflag FLAG_SYS_POKEMON_GET
	showmonpic SPECIES_CASTFORM, 10, 3
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_YoullTakeCastform, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_WeatherInstitute_3F_C_EventScript_TakeYourTime
	goto LittlerootTown_WeatherInstitute_3F_C_EventScript_GiveCastform
	end



LittlerootTown_WeatherInstitute_3F_C_EventScript_GiveCastform:: @ 81FA06C
		bufferspeciesname 0, SPECIES_CASTFORM
		setvar VAR_TEMP_1, SPECIES_CASTFORM
		givemon SPECIES_CASTFORM, 5, ITEM_NONE
		goto LittlerootTown_WeatherInstitute_3F_C_EventScript_SendCastformToParty
		hidemonpic
		end



LittlerootTown_WeatherInstitute_3F_C_EventScript_GiveSwablu:: @ 81FA06C
		bufferspeciesname 0, SPECIES_SWABLU
		setvar VAR_TEMP_1, SPECIES_SWABLU
		givemon SPECIES_SWABLU, 5, ITEM_NONE
		goto LittlerootTown_WeatherInstitute_3F_C_EventScript_SendSwabluToParty
		hidemonpic
		end

LittlerootTown_WeatherInstitute_3F_C_EventScript_SendCastformToParty:: @ 81FA0A1
	removeobject LOCALID_BALL_CASTFORM
	removeobject LOCALID_BALL_SWABLU
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_WeatherInstitute_3F_C_EventScript_ReceivedCastform
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_WeatherInstitute_3F_C_EventScript_ReceivedCastform
	end

LittlerootTown_WeatherInstitute_3F_C_EventScript_SendSwabluToParty:: @ 81FA0A1
	removeobject LOCALID_BALL_SWABLU
	removeobject LOCALID_BALL_CASTFORM
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_WeatherInstitute_3F_C_EventScript_ReceivedSwablu
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_WeatherInstitute_3F_C_EventScript_ReceivedSwablu
	
	end

LittlerootTown_WeatherInstitute_3F_C_EventScript_ReceivedCastform:: @ 81FA0FD
	hidemonpic
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_HeadOnDown, MSGBOX_DEFAULT
	releaseall
	setflag FLAG_GOT_POKEMON
	clearflag FLAG_NO_POKEMON_YET
	warpsilent MAP_LITTLEROOT_TOWN_WEATHER_INSTITUTE_3F_C, -3, 9,14
	end

LittlerootTown_WeatherInstitute_3F_C_EventScript_ReceivedSwablu:: @ 81FA0FD
	hidemonpic
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_HeadOnDown, MSGBOX_DEFAULT
	releaseall
	setflag FLAG_GOT_POKEMON
	clearflag FLAG_NO_POKEMON_YET
	warpsilent MAP_LITTLEROOT_TOWN_WEATHER_INSTITUTE_3F_C, 3, 9,14
	end


LittlerootTown_WeatherInstitute_3F_C_EventScript_TakeYourTime:: @ 81FA061
	hidemonpic
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_BothGood, MSGBOX_DEFAULT
	releaseall
	end

 LittlerootTown_WeatherInstitute_3F_C_Text_HeadOnDown:
	.string "Fantastic!\p"
	.string "I'm sure you'll grow inseperable.\p"
	.string "Take your time looking around town\n"
	.string "and getting settled.\p"
	.string "You can meet Prof. Drake in the\n"
	.string "barracks when you're ready.$"

 LittlerootTown_WeatherInstitute_3F_C_Text_BothGood:
	.string "Take your time, both\n"
	.string "options are equally good!$"


LittlerootTown_WeatherInstitute_3F_C_EventScript_StarterPokemonSequence::
	turnobject LOCALID_AIDE, DIR_SOUTH
	delay 20
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_ComeonOver,MSGBOX_SIGN
	setvar VAR_UNUSED_0x40E5, 1
	end

 LittlerootTown_WeatherInstitute_3F_C_Text_ComeonOver:
	.string "Come on over and pick out \n"
	.string "your partner!$"

LittlerootTown_WeatherInstitute_3F_C_EventScript_TakeYourTimeWithIt:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_C_Text_BothGood, MSGBOX_DEFAULT
	release
	end

