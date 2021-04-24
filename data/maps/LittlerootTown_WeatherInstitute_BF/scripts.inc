LittlerootTown_WeatherInstitute_BF_MapScripts::
	.byte 0


LittlerootTown_WeatherInstitute_BF_EventScript_SandwichScientist:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_BF_Text_WhatDoYouThinkOf, MSGBOX_DEFAULT
	release
	end
LittlerootTown_WeatherInstitute_BF_EventScript_EmbarassedColleague:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_BF_Text_PleaseExcuse, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_BF_EventScript_SteelGirders:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_IBeams, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_BasementGarbage:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_PackingTapeTough, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_Thermostat:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_BetterNotTouch, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_CraneHook:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_SeriousMachinery, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_FilingCabinet:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_FullofResearchNotes, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_FilingCabinet2:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_FullofResearchNotesJoke, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_Generator:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_PowerfulGeothermal, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_OddMachine:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_LotsofDials, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_PressureRegulator:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_Pressurized, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_Plans:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_ComplicatedMachinery, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_BF_EventScript_ShippingCrates:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_BF_Text_SealedTight, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_BF_Text_IBeams: @ 81E8D32
	.string "Big steel beams for heavy construction.\n"
	.string "They won't budge!$"
LittlerootTown_WeatherInstitute_BF_Text_SealedTight: @ 81E8D32
	.string "You wonder what is in these crates\n"
	.string "but they're sealed tight!$"
LittlerootTown_WeatherInstitute_BF_Text_ComplicatedMachinery: @ 81E8D32
	.string "Plans for complicated machinery\n"
	.string "are outlined in excrutiating detail.$"
LittlerootTown_WeatherInstitute_BF_Text_Pressurized: @ 81E8D32
	.string "This machine pressurizes oxygen\n"
	.string "for experiments and undersea exploration!$"
LittlerootTown_WeatherInstitute_BF_Text_PowerfulGeothermal: @ 81E8D32
	.string "A massive geothermal generator\n"
	.string "It powers both the station and the town.$"
LittlerootTown_WeatherInstitute_BF_Text_LotsofDials: @ 81E8D32
	.string "There are more switches and \n"
	.string "dials than you can count\p"
	.string "Better leave them alone.$"
LittlerootTown_WeatherInstitute_BF_Text_PackingTapeTough: @ 81E8D32
	.string "This garbage is full of packing tape\n"
	.string "and the crust of PB&J sandwiches.$"
LittlerootTown_WeatherInstitute_BF_Text_BetterNotTouch: @ 81E8D32
	.string "The thermostat...\p"
	.string "I'd better not touch this...\p"
	.string "Or I'll get a call from my dad!$"
LittlerootTown_WeatherInstitute_BF_Text_SeriousMachinery: @ 81E8D32
	.string "A crane hook for lifting heavy things.\n"
	.string "This lab has some serious machinery.$"
LittlerootTown_WeatherInstitute_BF_Text_FullofResearchNotes: @ 81E8D32
	.string "A file cabinet packed to the brim\n"
	.string "with research notes from various projects\p"
	.string "This one mentions new variations of \n"
	.string "pokemon seen in the region recently\p"
	.string "It seems ZIGZAGOON have developed the\n"
	.string "ability to filter toxins out of water!$"
LittlerootTown_WeatherInstitute_BF_Text_FullofResearchNotesJoke: @ 81E8D32
	.string "A file cabinet packed to the brim\n"
	.string "with research notes from various projects\p"
	.string "This one mentions developing new\n"
	.string "types of sandwiches.$"

LittlerootTown_WeatherInstitute_BF_Text_WhatDoYouThinkOf: @ 81E8D32
	.string "Do you like your grilled cheese\n"
	.string "made with mayo or butter?\p"
	.string "These are the questions\n"
	.string "crucial to my research.$"
LittlerootTown_WeatherInstitute_BF_Text_PleaseExcuse: @ 81E8D32
	.string "Please excuse my colleague.\p"
	.string "They do sandwich research\n"
	.string "in their free time.\p"
	.string "We really do do\n"
	.string "important work here.$"

