LittlerootTown_StudioVincent_1F_MapScripts::
	.byte 0



LittlerootTown_StudioVincent_1F_EventScript_SadFridge:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_NoFood, MSGBOX_SIGN
	end

LittlerootTown_StudioVincent_1F_Text_NoFood: @ 81E8D32
	.string "The fridge is empty.$"

LittlerootTown_StudioVincent_1F_EventScript_PaintSink:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_SinkFullofPaint, MSGBOX_SIGN
	end

LittlerootTown_StudioVincent_1F_Text_SinkFullofPaint: @ 81E8D32
	.string "The sink is full of unwashed\n"
	.string "paint cups and putty knives.\p"
	.string "It appears Vincent was using\n"
	.string "a lot of red paint recently.$"

LittlerootTown_StudioVincent_1F_EventScript_DisplayCabinet:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_PokemonFigures, MSGBOX_SIGN
	end
LittlerootTown_StudioVincent_1F_Text_PokemonFigures: @ 81E8D32
	.string "It's a display cabiniet\n"
	.string "full of tiny figures.\p"
	.string "They appear to be little sculptures\n"
	.string "of pokemon carefully painted.$"



LittlerootTown_StudioVincent_1F_EventScript_ClothingDrawer:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_Berets, MSGBOX_SIGN
	end

LittlerootTown_StudioVincent_1F_Text_Berets: @ 81E8D32
	.string "These drawers are filled with\n"
	.string "dozens of identical ponchos and berets.\p"
	.string "They're all folded neatly,\n"
	.string "there's not a wrinkle in sight!$"

LittlerootTown_StudioVincent_1F_EventScript_Dishes:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_LotsofTakeout, MSGBOX_SIGN
	end
LittlerootTown_StudioVincent_1F_Text_LotsofTakeout: @ 81E8D32
	.string "The dishes in these cabinets look\n"
	.string "like they've never been used.\p"
	.string "Vincent must get a lot of takeout!$"

LittlerootTown_StudioVincent_1F_EventScript_MysterySculpture:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_HeavyStone, MSGBOX_SIGN
	end

LittlerootTown_StudioVincent_1F_Text_HeavyStone: @ 81E8D32
	.string "A large stone sculpture of\n"
	.string "a pokemon you've never seen before.\p"
	.string "How does Vincent move this thing?\n"
	.string "It must weigh a ton!$"


LittlerootTown_StudioVincent_1F_EventScript_PaintBag:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_TubesNeverHeardOf, MSGBOX_SIGN
	end

LittlerootTown_StudioVincent_1F_Text_TubesNeverHeardOf: @ 81E8D32
	.string "There must be hundreds of\n"
	.string "tubes of paint in here.\p"
	.string "You've never even heard of\n"
	.string "some of these colours.$"

LittlerootTown_StudioVincent_1F_EventScript_SmallWindow:: @ 81E8151
	msgbox LittlerootTown_StudioVincent_1F_Text_SadView, MSGBOX_SIGN
	end
LittlerootTown_StudioVincent_1F_Text_SadView: @ 81E8D32
	.string "It's a little sad to have\n"
	.string "a window this small\p"
	.string "with a view this nice.$"



LittlerootTown_StudioVincent_1F_Text_YoullTakeSmeargle:
	.string "You'll take SMEARGLE,\n"
	.string "the artist pokemon?$"

LittlerootTown_StudioVincent_1F_Text_SmeargleOffer:
	.string "Hello there!\n"
	.string "How have you been settling in?\p"
	.string "...\p"
	.string "Well it just so happens that\n"
	.string "I've got the perfect\p"
	.string "housewarming gift for you!\p"
	.string "How would you like\n"
	.string "your very own pokemon partner?$"

LittlerootTown_StudioVincent_1F_EventScript_AreYouSure::
	hidemonpic
	msgbox LittlerootTown_StudioVincent_1F_Text_AreYouSureAbout, MSGBOX_DEFAULT
	releaseall
	end

LittlerootTown_StudioVincent_1F_Text_AreYouSureAbout:
	.string "Are you sure?\n"
	.string "Come back if you reconsider!$"


LittlerootTown_StudioVincent_1F_EventScript_VincentOffer:: @ 81F9FBB
	lock
	faceplayer
	msgbox LittlerootTown_StudioVincent_1F_Text_SmeargleOffer, MSGBOX_DEFAULT
	delay 30
	showmonpic SPECIES_SMEARGLE, 10, 3
	msgbox LittlerootTown_StudioVincent_1F_Text_YoullTakeSmeargle, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_StudioVincent_1F_EventScript_AreYouSure
	goto LittlerootTown_StudioVincent_1F_EventScript_GiveSmeargle
	release
	end


LittlerootTown_StudioVincent_1F_EventScript_GiveSmeargle:: @ 81FA06C
		bufferspeciesname 0, SPECIES_SMEARGLE
		setvar VAR_TEMP_1, SPECIES_SMEARGLE
		givemon SPECIES_SMEARGLE, 5, ITEM_LAGGING_TAIL
		setflag FLAG_SYS_POKEMON_GET
		goto LittlerootTown_StudioVincent_1F_EventScript_SendSmeargleToParty
		hidemonpic
		end

LittlerootTown_StudioVincent_1F_EventScript_SendSmeargleToParty:: @ 81FA0A1
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LittlerootTown_StudioVincent_1F_EventScript_ReceivedSmeargle
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_StudioVincent_1F_EventScript_ReceivedSmeargle
	
	end


LittlerootTown_StudioVincent_1F_EventScript_ReceivedSmeargle:: @ 81FA0FD
	hidemonpic
	msgbox LittlerootTown_StudioVincent_1F_Text_ThickAsThieves, MSGBOX_DEFAULT
	releaseall
	setflag FLAG_GOT_POKEMON
	setvar VAR_UNUSED_0x40E5, 1
	warpsilent MAP_LITTLEROOT_TOWN_STUDIO_VINCENT_1F, 3, 4, 5
	end

LittlerootTown_StudioVincent_1F_Text_ThickAsThieves:
	.string "Look at you lot!\p"
	.string "You'll be thick as thieves in\p"
	.string "no time flat!$"
