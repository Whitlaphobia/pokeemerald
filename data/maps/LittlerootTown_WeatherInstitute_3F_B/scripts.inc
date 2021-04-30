LittlerootTown_WeatherInstitute_3F_B_MapScripts::
	.byte 0


LittlerootTown_WeatherInstitute_3F_B_EventScript_KyogreWater:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_CaveOfOriginWater, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_CaveOfOriginWater: @ 81E8ACF
	.string "A sphere of pure water,\n"
	.string "from the CAVE OF ORIGIN\p"
	.string "where KYOGRE lay dormant.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_GroudonEarth:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_CaveOfOriginShard, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_B_Text_CaveOfOriginShard: @ 81E8ACF
	.string "A shard of magmatic stone,\n"
	.string "from the CAVE OF ORIGIN\p"
	.string "where GROUDON lay dormant.$"


LittlerootTown_WeatherInstitute_3F_B_EventScript_PokemonWeather:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_AbilitiesAffect, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_AbilitiesAffect: @ 81E8ACF
	.string "Some pokemon have abilities\n"
	.string "that affect the weather!\p"
	.string "While some summon weather,\n"
	.string "such as WINGULL's DRIZZLE,\p"
	.string "others use the weather to \n"
	.string "their advantage\p"
	.string "such as LOTAD's RAIN DISH.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_SunnyWeather:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_HowSunWorks, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_B_Text_HowSunWorks: @ 81E8ACF
	.string "In bright sunlight, FIRE type\n"
	.string "moves are empowered\p"
	.string "and WATER type moves\n"
	.string "are weakened.\p"
	.string "In the sun, a pokemon's\n"
	.string "SOLARBEAM will take one turn!$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_RainyWeather:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_HowRainWorks, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_HowRainWorks: @ 81E8ACF
	.string "In heavy rainfall, WATER type\n"
	.string "moves are empowered\p"
	.string "and FIRE type moves\n"
	.string "are weakened.\p"
	.string "In rain, moves like HURRICANE\n"
	.string "and THUNDER will always hit.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_SnowWeather:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_HowHailWorks, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_B_Text_HowHailWorks: @ 81E8ACF
	.string "Some pokemon can summon HAIL,\n"
	.string "which damages all pokemon\p"
	.string "except for ICE types and makes\n"
	.string "BLIZZARD always hit!$"


LittlerootTown_WeatherInstitute_3F_B_EventScript_SandstormWeather:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_HowSandstormWorks, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_B_Text_HowSandstormWorks: @ 81E8ACF
	.string "Some pokemon can summon a SANDSTORM,\n"
	.string "which damages all pokemon except\p"
	.string "for ROCK, GROUND, and STEEL types.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_SubmarineModel:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_FirstSub, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_B_Text_FirstSub: @ 81E8ACF
	.string "The first submarine, invented by\n"
	.string "Capt. Stern of the HOENN region.\p"
	.string "It was stolen by TEAM AQUA before\n"
	.string "being recovered by MAY BIRCH.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_OceanLinerModel:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_AccrossTheSea, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_B_Text_AccrossTheSea: @ 81E8ACF
	.string "A model of a modern ocean liner,\n"
	.string "designed to cross the vast sea.\p"
	.string "It carries both people and cargo\n"
	.string "from region to region.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_WeatherSatModel:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_WeatherSatelite, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_WeatherSatelite: @ 81E8ACF
	.string "A model of the satellites that,\n"
	.string "observe global weather patterns.\p"
	.string "This one was launched from\n"
	.string "this very facility!$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_WeatherCrops:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_ClimateCrops, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_ClimateCrops: @ 81E8ACF
	.string "A model showing how crops and soil\n"
	.string "are affected by different climates.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_DopplerRadar:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_EarlyDetection, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_EarlyDetection: @ 81E8ACF
	.string "A demonstration of \n"
	.string "Doppler Radar techonology.\p"
	.string "It allows for early detection\n"
	.string "of extreme weather.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_PokemonClimateChange:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_LegendariesEffect, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_LegendariesEffect: @ 81E8ACF
	.string "Because some legendary pokemon\n"
	.string "like GROUDON, KYOGRE, and LUGIA\p"
	.string "can command the weather,\n"
	.string "many people believe that they\p"
	.string "are responsible for climate change.\p"
	.string "But research shows that humans,\n"
	.string "not pokemon, are responsible.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_GreenhouseEffect:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_ManMadeClimateChange, MSGBOX_SIGN
	end


LittlerootTown_WeatherInstitute_3F_B_Text_ManMadeClimateChange: @ 81E8ACF
	.string "Man-made climate change has\n"
	.string "many mechanisms, such as\p"
	.string "deforesting natural buffers, causing\n"
	.string "the extinction of species that\p"
	.string "regulate the environment,and\p"
	.string "emiting greenhouse gasses that heat\n"
	.string "up the earth.$"


LittlerootTown_WeatherInstitute_3F_B_EventScript_Computer:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_PlayingSolitaire, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_PlayingSolitaire: @ 81E8ACF
	.string "The computer has a game of\n"
	.string "solitaire on the screen.$"

LittlerootTown_WeatherInstitute_3F_B_EventScript_CounterNotes:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_GuestBook, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_B_Text_GuestBook: @ 81E8ACF
	.string "A guestbook full of greetings\n"
	.string "from past visitors.\p"
	.string "Someone has drawn a doodle\n"
	.string "of a smeargle smiling widely.$"


LittlerootTown_WeatherInstitute_3F_B_EventScript_FlanneryGreeting:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_B_Text_HopeYouEnjoy, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_B_Text_HopeYouEnjoy: @ 81E8ACF
	.string "I know it isn't completely\n"
	.string "fleshed out yet,\p"
	.string "but I hope you enjoy\n"
	.string "our museum!$"