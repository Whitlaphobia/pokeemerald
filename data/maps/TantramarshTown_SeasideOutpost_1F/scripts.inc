.set LOCALID_MOVE_RELEARNER, 2
TantramarshTown_SeasideOutpost_1F_MapScripts::
	.byte 0

TantramarshTown_SeasideOutpost_1F_Text_TakeRestInBed:
.string "It's a bed.\n"
.string "Let's take a rest.$"
	

TantramarshTown_SeasideOutpost_1F_EventScript_EnteredOutpost::
	setflag FLAG_ENTERED_OUTPOST
	setvar VAR_TEMP_0, 1
	end

TantramarshTown_SeasideOutpost_1F_EventScript_Bed:: 
	lockall
	setrespawn HEAL_LOCATION_TANTRAMARSH_TOWN_SEASIDE_OUTPOST_1F
	msgbox TantramarshTown_SeasideOutpost_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end


TantramarshTown_SeasideOutpost_1F_EventScript_TakeaRest::
	lock
	faceplayer
	msgbox TantramarshTown_SeasideOutpost_1F_Text_OutpostRest,MSGBOX_DEFAULT
	release
	end
TantramarshTown_SeasideOutpost_1F_Text_OutpostRest:
	.string "Use this place to recuperate\n"
	.string "before setting off.\p"
	.string "You can take a rest in the\n"
	.string "bed up there anytime you need.$"



TantramarshTown_SeasideOutpost_1F_EventScript_SellingBerries::
	lock
	faceplayer
	msgbox TantramarshTown_SeasideOutpost_1F_Text_IPlanTo,MSGBOX_DEFAULT
	giveitem ITEM_ORAN_BERRY
	release
	end
TantramarshTown_SeasideOutpost_1F_Text_IPlanTo:
	.string "I'm not ready yet but\n"
	.string "I plan to sell lots of berries\p"
	.string "at these outposts.\n"
	.string "Here's a sampler to get you hooked!$"





	
TantramarshTown_SeasideOutpost_1F_EventScript_MoveRelearner:: @ 8201383
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, TantramarshTown_SeasideOutpost_1F_EventScript_AskTeachMove
	msgbox TantramarshTown_SeasideOutpost_1F_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto TantramarshTown_SeasideOutpost_1F_EventScript_AskTeachMove
	end

TantramarshTown_SeasideOutpost_1F_EventScript_AskTeachMove:: @ 82013A8
	checkitem ITEM_LEMONADE, 1
	compare VAR_RESULT, FALSE
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_ComeBackWithHeartScale
	msgbox TantramarshTown_SeasideOutpost_1F_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, TantramarshTown_SeasideOutpost_1F_EventScript_ComeBackWithHeartScale
	goto TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMon
	end

TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMon:: @ 82013D6
	msgbox TantramarshTown_SeasideOutpost_1F_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_NoMoveToTeachMon
	goto TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMove
	end

TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMove:: @ 820140C
	msgbox TantramarshTown_SeasideOutpost_1F_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMon
	msgbox TantramarshTown_SeasideOutpost_1F_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_LEMONADE
	goto TantramarshTown_SeasideOutpost_1F_EventScript_ComeBackWithHeartScale
	end

TantramarshTown_SeasideOutpost_1F_EventScript_NoMoveToTeachMon:: @ 8201436
	msgbox TantramarshTown_SeasideOutpost_1F_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMon
	end

TantramarshTown_SeasideOutpost_1F_EventScript_CantTeachEgg:: @ 8201444
	msgbox TantramarshTown_SeasideOutpost_1F_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto TantramarshTown_SeasideOutpost_1F_EventScript_ChooseMon
	end

TantramarshTown_SeasideOutpost_1F_EventScript_ComeBackWithHeartScale:: @ 8201452
	msgbox TantramarshTown_SeasideOutpost_1F_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

TantramarshTown_SeasideOutpost_1F_Text_ImTheMoveTutor: @ 820145C
	.string "I'm the MOVE TUTOR.\p"
	.string "I know all the moves that POKéMON\n"
	.string "learn--every one of them--and I can\l"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON\n"
	.string "of yours if you'd like.\p"
	.string "I'll do it for a LEMONADE.\n"
	.string "I'm parched!.$"

TantramarshTown_SeasideOutpost_1F_Text_ThatsAHeartScaleWantMeToTeachMove: @ 8201541
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness LEMONADE!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

TantramarshTown_SeasideOutpost_1F_Text_TutorWhichMon: @ 82015A5
	.string "Which POKéMON needs tutoring?$"

TantramarshTown_SeasideOutpost_1F_Text_TeachWhichMove: @ 82015C3
	.string "Which move should I teach?$"

TantramarshTown_SeasideOutpost_1F_Text_DontHaveMoveToTeachPokemon: @ 82015DE
	.string "Sorry…\p"
	.string "It doesn't appear as if I have any move\n"
	.string "I can teach that POKéMON.$"

TantramarshTown_SeasideOutpost_1F_Text_HandedOverHeartScale: @ 8201627
	.string "{PLAYER} handed over one LEMONADE\n"
	.string "in exchange.$"

TantramarshTown_SeasideOutpost_1F_Text_ComeBackWithHeartScale: @ 8201653
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a LEMONADE.$"

TantramarshTown_SeasideOutpost_1F_Text_CantTeachEgg: @ 8201697
	.string "Hunh? There isn't a single move that\n"
	.string "I can teach an EGG.$"


TantramarshTown_SeasideOutpost_1F_Text_YouWillTradeWontYou: @ 821637B
	.string "Wrooooaaar! I need it!\n"
	.string "I have to get me a {STR_VAR_1}!\l"
	.string "I'll do anything for it!\p"
	.string "…Uh… Did you hear that?\n"
	.string "My shout from the bottom of my heart?\p"
	.string "Having heard that, you will trade\n"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
	.string "won't you?$"

TantramarshTown_SeasideOutpost_1F_Text_MonYouTakeCare: @ 8216440
	.string "Oh, yeah, right on!\p"
	.string "{STR_VAR_1}, welcome!\n"
	.string "{STR_VAR_2}, you take care!$"

TantramarshTown_SeasideOutpost_1F_Text_ThisIsntAMon: @ 8216474
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"

TantramarshTown_SeasideOutpost_1F_Text_YouWontTradeMe: @ 821649F
	.string "No? You won't trade me?\n"
	.string "Even after I bared my heart to you?$"

TantramarshTown_SeasideOutpost_1F_Text_GoingToMakeVolbeatStrong: @ 82164DB
	.string "I'm going to make VOLBEAT super\n"
	.string "strong from this moment on!\p"
	.string "I hope you do the same with PLUSLE!$"


TantramarshTown_SeasideOutpost_1F_EventScript_Trader:: @ 82162BB
	lock
	faceplayer
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, TantramarshTown_SeasideOutpost_1F_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox TantramarshTown_SeasideOutpost_1F_Text_YouWillTradeWontYou, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq TantramarshTown_SeasideOutpost_1F_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne TantramarshTown_SeasideOutpost_1F_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname 0, VAR_0x8009
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
	release
	end

TantramarshTown_SeasideOutpost_1F_EventScript_DeclineTrade:: @ 821633D
	msgbox TantramarshTown_SeasideOutpost_1F_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

TantramarshTown_SeasideOutpost_1F_EventScript_NotRequestedMon:: @ 8216347
	bufferspeciesname 0, VAR_0x8009
	msgbox TantramarshTown_SeasideOutpost_1F_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

TantramarshTown_SeasideOutpost_1F_EventScript_TradeCompleted:: @ 8216355
	msgbox TantramarshTown_SeasideOutpost_1F_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	release
	end

TantramarshTown_SeasideOutpost_1F_EventScript_FindPokeball:: 
	giveitem ITEM_POKE_BALL,1
	release
	end
