TantramarshTown_OceanPort_1F_MapScripts::
	.byte 0



TantramarshTown_OceanPort_1F_EventScript_HikerWater::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_SeaLegs,MSGBOX_DEFAULT
	release
	end

TantramarshTown_OceanPort_1F_Text_SeaLegs:
	.string "I have no sea legs whatsoever.\n"
	.string "The ground is where I belong.$"

TantramarshTown_OceanPort_1F_EventScript_VacationWoman::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_PokemonTravel,MSGBOX_DEFAULT
	release
	end

TantramarshTown_OceanPort_1F_Text_PokemonTravel:
	.string "I'm traveling accross the region\n"
	.string "with my POKéMON and my wife.\p"
	.string "We'll have so many new experiences!\n"
	.string "Life is so good!$"

TantramarshTown_OceanPort_1F_EventScript_WifeTutorial::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_HowExpWorks,MSGBOX_DEFAULT
	release
	end

TantramarshTown_OceanPort_1F_Text_HowExpWorks:
	.string "Even though POKéMON can gain\n"
	.string "LEVELS and EXP from battling,\p"
	.string "there's only so much a POKéMON can\n"
	.string "grow in a given environment.\p"
	.string "It'll gain more EXP again when\n"
	.string "it begins to have new experiences!$"


TantramarshTown_OceanPort_1F_EventScript_Marill::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_MarillHello,MSGBOX_DEFAULT
	playmoncry SPECIES_MARILL, 0
	release
	end

TantramarshTown_OceanPort_1F_Text_MarillHello:
	.string "Peeee Reeee$"


TantramarshTown_OceanPort_1F_EventScript_OffDutyNurse::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_OutpostBeach,MSGBOX_DEFAULT
	release
	end

TantramarshTown_OceanPort_1F_Text_OutpostBeach:
	.string "Sorry, I can't heal your POKéMON.\n"
	.string "I'm off duty today, and traveling.\p"
	.string "If you're with the METEOR POINT\n"
	.string "WEATHER INSTITUTE, I believe there\p"
	.string "is an outpost set up in\n"
	.string "the house on the beach.$"



TantramarshTown_OceanPort_1F_EventScript_CrypticMessage::
	msgbox TantramarshTown_OceanPort_1F_Text_SecretCode,MSGBOX_DEFAULT
	end

TantramarshTown_OceanPort_1F_Text_SecretCode:
	.string "A cryptic series of words is\n"
	.string "scrawled on the screen...\p"
	.string "AFTERNOON, SKITTY, FOGGY, GRIM$"

TantramarshTown_OceanPort_1F_EventScript_ComputerInUse::
	msgbox TantramarshTown_OceanPort_1F_Text_PrivateStuff,MSGBOX_DEFAULT
	end

TantramarshTown_OceanPort_1F_Text_PrivateStuff:
	.string "Probably best not to try to\n"
	.string "take a peek at someone's computer\p"
	.string "while they are actively using it.$"


TantramarshTown_OceanPort_1F_EventScript_Photobooth::
	msgbox TantramarshTown_OceanPort_1F_Text_SillyPhotos,MSGBOX_DEFAULT
	end

TantramarshTown_OceanPort_1F_Text_SillyPhotos:
	.string "Someone has left open \n"
	.string "a photobooth program.\p"
	.string "There are tons of silly photos\n"
	.string "of them with their POKéMON.$"


TantramarshTown_OceanPort_1F_EventScript_PokeMart::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_MartChanges,MSGBOX_DEFAULT
	release
	end
TantramarshTown_OceanPort_1F_Text_MartChanges:
	.string "Pokemarts aren't actually owned\n"
	.string "by a single company.\p"
	.string "So lately we've been expanding our\n"
	.string "breadth and letting people set up\p"
	.string "their own storefronts in the marts!$"


TantramarshTown_OceanPort_1F_EventScript_DestinationSign::
	msgbox TantramarshTown_OceanPort_1F_Text_MultiplePorts,MSGBOX_SIGN
	end
TantramarshTown_OceanPort_1F_Text_MultiplePorts:
	.string "The signs update consistently\n"
	.string "with the schedules for ships\p"
	.string "heading to various ports\n"
	.string "throuhout the region.$"

TantramarshTown_OceanPort_1F_EventScript_Indecisive::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_MultipleCans,MSGBOX_DEFAULT
	release
	end
TantramarshTown_OceanPort_1F_Text_MultipleCans:
	.string "Did you know that\n"
	.string "vending machines sometimes drop\p"
	.string "more than one can?\n"
	.string "One time I even got three!$"

TantramarshTown_OceanPort_1F_EventScript_ScottGift::
	lock
	faceplayer
	msgbox TantramarshTown_OceanPort_1F_Text_NewBattler,MSGBOX_DEFAULT
	call_if_unset FLAG_RECEIVED_EXP_SHARE, TantramarshTown_OceanPort_1F_EventScript_ScottExpShare
	release
	end

TantramarshTown_OceanPort_1F_EventScript_ScottExpShare::
	msgbox TantramarshTown_OceanPort_1F_Text_NewBattlerGift,MSGBOX_SIGN
	giveitem ITEM_EXP_SHARE
	setflag FLAG_RECEIVED_EXP_SHARE
	return

TantramarshTown_OceanPort_1F_Text_NewBattler:
	.string "Hey there champ in the making!\n"
	.string "Always great to see a new face\p"
	.string "in the battling circuit\n"
	.string "Work hard and become a strong\p"
	.string "trainer so you can come battle\n"
	.string "at our brand new BATTLE FRONTIER!!$"



TantramarshTown_OceanPort_1F_Text_NewBattlerGift:
	.string "Here is a little gift to\n"
	.string "help you train your POKéMON\p"
	.string "to be ready for the challenges\n"
	.string "of the FRONTIER!$"


TantramarshTown_OceanPort_1F_EventScript_VendingMachine:: @ 8220295
	lockall
	message TantramarshTown_OceanPort_1F_Text_WhichDrinkWouldYouLike
	waitmessage
	showmoneybox 0, 0, 0
	goto TantramarshTown_OceanPort_1F_EventScript_ChooseDrink
	end

TantramarshTown_OceanPort_1F_EventScript_ChooseDrink:: @ 82202A6
	multichoice 16, 0, MULTI_VENDING_MACHINE, 0
	copyvar VAR_TEMP_1, VAR_RESULT
	switch VAR_TEMP_1
	case 0, TantramarshTown_OceanPort_1F_EventScript_FreshWater
	case 1, TantramarshTown_OceanPort_1F_EventScript_SodaPop
	case 2, TantramarshTown_OceanPort_1F_EventScript_Lemonade
	msgbox TantramarshTown_OceanPort_1F_Text_DecidedAgainstBuyingDrink, MSGBOX_DEFAULT
	goto TantramarshTown_OceanPort_1F_EventScript_ExitVendingMachine
	end

TantramarshTown_OceanPort_1F_EventScript_FreshWater:: @ 82202E4
	setvar VAR_TEMP_0, ITEM_FRESH_WATER
	goto TantramarshTown_OceanPort_1F_EventScript_TryBuyDrink
	end

TantramarshTown_OceanPort_1F_EventScript_SodaPop:: @ 82202EF
	setvar VAR_TEMP_0, ITEM_SODA_POP
	goto TantramarshTown_OceanPort_1F_EventScript_TryBuyDrink
	end

TantramarshTown_OceanPort_1F_EventScript_Lemonade:: @ 82202FA
	setvar VAR_TEMP_0, ITEM_LEMONADE
	goto TantramarshTown_OceanPort_1F_EventScript_TryBuyDrink
	end

TantramarshTown_OceanPort_1F_EventScript_CheckMoneyFreshWater:: @ 8220305
	checkmoney 200, 0
	return

TantramarshTown_OceanPort_1F_EventScript_CheckMoneySodaPop:: @ 822030C
	checkmoney 300, 0
	return

TantramarshTown_OceanPort_1F_EventScript_CheckMoneyLemonade:: @ 8220313
	checkmoney 350, 0
	return

TantramarshTown_OceanPort_1F_EventScript_RemoveMoneyFreshWater:: @ 822031A
	removemoney 200, 0
	return

TantramarshTown_OceanPort_1F_EventScript_RemoveMoneySodaPop:: @ 8220321
	removemoney 300, 0
	return

TantramarshTown_OceanPort_1F_EventScript_RemoveMoneyLemonade:: @ 8220328
	removemoney 350, 0
	return

TantramarshTown_OceanPort_1F_EventScript_TryBuyDrink:: @ 822032F
	compare VAR_TEMP_1, 0
	call_if_eq TantramarshTown_OceanPort_1F_EventScript_CheckMoneyFreshWater
	compare VAR_TEMP_1, 1
	call_if_eq TantramarshTown_OceanPort_1F_EventScript_CheckMoneySodaPop
	compare VAR_TEMP_1, 2
	call_if_eq TantramarshTown_OceanPort_1F_EventScript_CheckMoneyLemonade
	compare VAR_RESULT, FALSE
	goto_if_eq TantramarshTown_OceanPort_1F_EventScript_NotEnoughMoneyForDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, FALSE
	goto_if_eq TantramarshTown_OceanPort_1F_EventScript_NoRoomForDrink
	compare VAR_TEMP_1, 0
	call_if_eq TantramarshTown_OceanPort_1F_EventScript_RemoveMoneyFreshWater
	compare VAR_TEMP_1, 1
	call_if_eq TantramarshTown_OceanPort_1F_EventScript_RemoveMoneySodaPop
	compare VAR_TEMP_1, 2
	call_if_eq TantramarshTown_OceanPort_1F_EventScript_RemoveMoneyLemonade
	updatemoneybox 0, 0
	bufferitemname 0, VAR_TEMP_0
	playse SE_VEND
	msgbox TantramarshTown_OceanPort_1F_Text_CanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	random 64  @ 1/64 chance of an additional drink dropping
	compare VAR_RESULT, 0
	goto_if_ne TantramarshTown_OceanPort_1F_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, FALSE
	goto_if_eq TantramarshTown_OceanPort_1F_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox TantramarshTown_OceanPort_1F_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	random 64  @ 1/64 * the prev 1/64 chance of a third additional drink dropping, ~ 0.02% chance
	compare VAR_RESULT, 0
	goto_if_ne TantramarshTown_OceanPort_1F_EventScript_ChooseNewDrink
	checkitemspace VAR_TEMP_0, 1
	compare VAR_RESULT, 0
	goto_if_eq TantramarshTown_OceanPort_1F_EventScript_NoRoomForDrink
	playse SE_VEND
	msgbox TantramarshTown_OceanPort_1F_Text_ExtraCanOfDrinkDroppedDown, MSGBOX_DEFAULT
	additem VAR_TEMP_0
	bufferitemname 1, VAR_TEMP_0
	bufferstdstring 2, STDSTRING_ITEMS
	msgbox gText_PutItemInPocket, MSGBOX_DEFAULT
	goto TantramarshTown_OceanPort_1F_EventScript_ChooseNewDrink
	end

TantramarshTown_OceanPort_1F_EventScript_ChooseNewDrink:: @ 8220436
	message TantramarshTown_OceanPort_1F_Text_WhichDrinkWouldYouLike
	waitmessage
	goto TantramarshTown_OceanPort_1F_EventScript_ChooseDrink
	end

TantramarshTown_OceanPort_1F_EventScript_NotEnoughMoneyForDrink:: @ 8220442
	msgbox TantramarshTown_OceanPort_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto TantramarshTown_OceanPort_1F_EventScript_ExitVendingMachine
	end

TantramarshTown_OceanPort_1F_EventScript_NoRoomForDrink:: @ 8220450
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	goto TantramarshTown_OceanPort_1F_EventScript_ExitVendingMachine
	end

TantramarshTown_OceanPort_1F_EventScript_ExitVendingMachine:: @ 822045E
	hidemoneybox
	releaseall
	end





TantramarshTown_OceanPort_1F_Text_WhichDrinkWouldYouLike: @ 822056D
	.string "It's a VENDING MACHINE.\n"
	.string "Which drink would you like?$"

TantramarshTown_OceanPort_1F_Text_CanOfDrinkDroppedDown: @ 82205A1
	.string "Clang!\p"
	.string "A can of {STR_VAR_1} dropped down.$"

TantramarshTown_OceanPort_1F_Text_ExtraCanOfDrinkDroppedDown: @ 82205C2
	.string "Clang!\p"
	.string "Score! An extra can of {STR_VAR_1}\n"
	.string "dropped down!$"

TantramarshTown_OceanPort_1F_Text_NotEnoughMoney: @ 82205F1
	.string "Not enough money…$"

TantramarshTown_OceanPort_1F_Text_DecidedAgainstBuyingDrink: @ 8220603
	.string "Decided against buying a drink.$"
