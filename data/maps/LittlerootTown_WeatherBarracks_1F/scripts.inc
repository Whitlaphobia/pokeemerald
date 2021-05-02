LittlerootTown_WeatherBarracks_1F_MapScripts::
	.byte 0

LittlerootTown_WeatherBarracks_1F_EventScript_CastIron::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_BeautifulSeasoning,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_BeautifulSeasoning:
	.string "There's a big cast iron pan\n"
	.string "that has a beautiful seasoning\p"
	.string "on it. This kitchen clearly respects\n"
	.string "good cookware.$"

LittlerootTown_WeatherBarracks_1F_EventScript_DiverseShelf::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_NeverHeardOf,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_NeverHeardOf:
	.string "The bottom shelves have\n"
	.string "first aid manuals and field manuals.\p"
	.string "The top shelves are filled with books\n"
	.string "you've never heard of before, seemingly\p"
	.string "from all over the world!$"

LittlerootTown_WeatherBarracks_1F_EventScript_BoardGameCabinet::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_GamesGalore,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_GamesGalore:
	.string "It's full of board games and card games.\p"
	.string "Social nights in the common room are\n"
	.string "going to be a blast!$"


LittlerootTown_WeatherBarracks_1F_EventScript_PictureBook::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_OpenontheFloor,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_OpenontheFloor:
	.string "A picture books sits open\n"
	.string "on the floor. Will the DRAGON be slain?$"

LittlerootTown_WeatherBarracks_1F_EventScript_CashUnderMattress::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_StoringCash,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_StoringCash:
	.string "The bed looks lumpy...\p"
	.string "Is there cash hidden underneath?$"

LittlerootTown_WeatherBarracks_1F_EventScript_LockedDresser::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_LockandKey,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_LockandKey:
	.string "The drawers are locked.\p"
	.string "Each has a little keyhole.$"

LittlerootTown_WeatherBarracks_1F_EventScript_FoldedNeatly::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_Unpacked,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_Unpacked:
	.string "Looks like the unloading team also\n"
	.string "put your clothes into your dressers.\p"
	.string "The precision of their folding\n"
	.string "is almost unbelievable.$"

LittlerootTown_WeatherBarracks_1F_EventScript_KidsDresser::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_ClothesforTwo,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_ClothesforTwo:
	.string "Full of children's clothes\n"
	.string " that are bunched into\p"
	.string "balls instead of folded.$"


LittlerootTown_WeatherBarracks_1F_EventScript_ComfyBed::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_HighQualitySheets,MSGBOX_SIGN
	end


LittlerootTown_WeatherBarracks_1F_EventScript_PokeballGuy::
	lock
	faceplayer
	call_if_unset FLAG_STARTING_POKEBALLS, LittlerootTown_WeatherBarracks_1F_EventScript_GivePokeballs
	call_if_set FLAG_STARTING_POKEBALLS, LittlerootTown_WeatherBarracks_1F_EventScript_HowIsCatching
	end

LittlerootTown_WeatherBarracks_1F_EventScript_GivePokeballs::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_NewtoPokemon,MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL,10
	setflag FLAG_STARTING_POKEBALLS
	release
	end

LittlerootTown_WeatherBarracks_1F_Text_NewtoPokemon:
	.string "Oh, youre {PLAYER},\n"
	.string "our new neighbour?\p"
	.string "AND you're a new trainer?\n"
	.string "take these as a welcome gift!$"


LittlerootTown_WeatherBarracks_1F_EventScript_HowIsCatching::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_HowIsCatchingGoing,MSGBOX_DEFAULT
	release
	end


LittlerootTown_WeatherBarracks_1F_Text_HowIsCatchingGoing:
	.string "Hey there {PLAYER},\n"
	.string "have you caught any\p"
	.string "new pokemon yet?$"



LittlerootTown_WeatherBarracks_1F_Text_HighQualitySheets:
	.string "The sheets are the softest\n"
	.string "you've ever felt\p"
	.string "It would take an ALAKAZAM\n"
	.string "to count these threads!$"
LittlerootTown_WeatherBarracks_1F_EventScript_Dresser::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_ClothesAdult,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_ClothesAdult:
	.string "The folding  of the clothes is \n"
	.string "shoddy at best, but at least\p"
	.string "an earnest effort was made.$"

LittlerootTown_WeatherBarracks_1F_EventScript_MessyNotes::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_CantMakeOut,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_CantMakeOut:
	.string "It's filled with notes.\p"
	.string "It's too messy to read.$"

LittlerootTown_WeatherBarracks_1F_EventScript_PlatesandCups::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_FullofDishes,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_FullofDishes:
	.string "Rows and rows of chipped\n"
	.string "cups and plates.\p"
	.string "They seem well used\n"
	.string "and well loved.$"


LittlerootTown_WeatherBarracks_1F_EventScript_KnifeCupboard::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_ChefKnives,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_ChefKnives:
	.string "There are nice, sharp\n"
	.string "kitchen knives in the drawer.\p"
	.string "Cooking here is going to\n"
	.string "be a dream!$"


LittlerootTown_WeatherBarracks_1F_EventScript_Bed:: @ 826FB18
	lockall
	msgbox LittlerootTown_WeatherBarracks_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

	
LittlerootTown_WeatherBarracks_1F_Text_TakeRestInBed: @ 826FEFC
	.string "It's my bed…\n"
	.string "Let's take a rest.$"


LittlerootTown_WeatherBarracks_1F_EventScript_CommunalSink::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_SurprisinglyClean,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_SurprisinglyClean:
	.string "For a shared sink, it's\n"
	.string "surprisingly clean. There isn't\p"
	.string "a dish in sight.\p"
	.string "A little plastic PSYDUCK\n"
	.string "holds a dish sponge.$"

LittlerootTown_WeatherBarracks_1F_EventScript_CommunalFridge::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_DiversityofFood,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_DiversityofFood:
	.string "The food in the fridge is as\n"
	.string "diverse as the people that live here!\p"
	.string "A wall of aromas hits\n"
	.string "you like a truck.$"

LittlerootTown_WeatherBarracks_1F_EventScript_WindowView::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_OceanEye,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_OceanEye:
	.string "The ocean extends to the\n"
	.string "horizon in every direction.\p"
	.string "Peacefully waters as far\n"
	.string "as the eye can see.$"

LittlerootTown_WeatherBarracks_1F_EventScript_Unfinished::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_Sorry,MSGBOX_SIGN
	setvar VAR_TEMP_0,1
	end

LittlerootTown_WeatherBarracks_1F_Text_Sorry:
	.string "Sorry! This building\n"
	.string "is not finished.\p"
	.string "Feel free to look\n"
	.string "at the map though!$"


LittlerootTown_WeatherBarracks_1F_EventScript_VigHelloEnergized::
	lock
	playmoncry SPECIES_VIGOROTH, 0
	msgbox LittlerootTown_WeatherBarracks_1F_Text_VigrothGreetingReady, MSGBOX_DEFAULT
	release
	end
LittlerootTown_WeatherBarracks_1F_EventScript_VigHelloHappy::
	lock
	playmoncry SPECIES_VIGOROTH, 0
	msgbox LittlerootTown_WeatherBarracks_1F_Text_VigrothGreetingHappy, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherBarracks_1F_Text_VigrothGreetingHappy:
	.string "GROOOOOOW!\p"
	.string "It seems satisfied \n"
	.string "with its work.$"

LittlerootTown_WeatherBarracks_1F_Text_VigrothGreetingReady:
	.string "GROOW... GRRRRROW! \p"
	.string "It seems ready to\n"
	.string "get back to work.$"

LittlerootTown_WeatherBarracks_1F_EventScript_AllMovedinSidney::
	lock
	faceplayer
	msgbox LittlerootTown_WeatherBarracks_1F_Text_GivingBreather,MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherBarracks_1F_Text_GivingBreather:
	.string "Hey there lass,\n"
	.string "I hope you like your new room!\p"
	.string "These lads are taking\n"
	.string "a well deserved break.$"




LittlerootTown_WeatherBarracks_1F_EventScript_BarracksBookshelf::
	msgbox LittlerootTown_WeatherBarracks_1F_Text_AllKindsofBooks,MSGBOX_SIGN
	end

LittlerootTown_WeatherBarracks_1F_Text_AllKindsofBooks:
	.string "Filled with all kinds of books\n"
	.string "for all kinds of people!$"