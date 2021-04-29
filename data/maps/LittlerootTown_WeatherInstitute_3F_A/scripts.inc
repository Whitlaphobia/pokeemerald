LittlerootTown_WeatherInstitute_3F_A_MapScripts::
	.byte 0
LittlerootTown_WeatherInstitute_3F_A_EventScript_GameBoyKid:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_CornerPunishment, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_Teacher:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_ItsAWonderfulDay, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_Twin1:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_WorkingHardMathAddition, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_Twin2:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_WorkingHardMathSubtraction, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_NinjaKid:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_SecretStudies, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_LittleGirlKeener:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_KeenerWorking, MSGBOX_DEFAULT
	release
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_DreamerBoy:: @ 81E8151
	lock
	faceplayer
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_AdmireMyDad, MSGBOX_DEFAULT
	release
	end


LittlerootTown_WeatherInstitute_3F_A_Text_AdmireMyDad: @ 81E8ACF
	.string "My dad works for\n"
	.string "the Weather Institute.\p"
	.string "I'm working hard\n"
	.string "to be like him one day!$"

LittlerootTown_WeatherInstitute_3F_A_Text_CornerPunishment: @ 81E8ACF
	.string "I got punished on purpose\n"
	.string "so that I could play gameboy!\p"
	.string "I love learning but I need\n"
	.string "a little break from time to time.\p"
	.string "You should take one too!$"

LittlerootTown_WeatherInstitute_3F_A_Text_KeenerWorking: @ 81E8ACF
	.string "When I'm getting perfect\n"
	.string "on my classwork,\p"
	.string "it means I need \n"
	.string "more of a challenge!$"

LittlerootTown_WeatherInstitute_3F_A_Text_SecretStudies: @ 81E8ACF
	.string "I'm working hard at school,\n"
	.string "but I'm also studying to be a ninja.\p"
	.string "Don't tell anyone!$"

LittlerootTown_WeatherInstitute_3F_A_Text_WorkingHardMathAddition: @ 81E8ACF
	.string "I'm a big fan of math!\n"
	.string "I like it all but...\p"
	.string "Addition is my favourite!$"	


LittlerootTown_WeatherInstitute_3F_A_Text_WorkingHardMathSubtraction: @ 81E8ACF
	.string "I'm a big fan of math!\n"
	.string "I like it all but...\p"
	.string "Subtraction is my favourite!$"	

LittlerootTown_WeatherInstitute_3F_A_Text_ItsAWonderfulDay: @ 81E8ACF
	.string "My class is working very hard.\n"
	.string "It's a wonderful day to learn.$"	


LittlerootTown_WeatherInstitute_3F_A_EventScript_ClassRoomWindow:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_LightForLearning, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_A_Text_LightForLearning: @ 81E8ACF
	.string "A well lit room helps\n"
	.string "keep spirits high!\p"
	.string "You feel like you can\n"
	.string "tackle any challenge.$"	



LittlerootTown_WeatherInstitute_3F_A_EventScript_Whiteboard:: @ 81E8151
	lockall
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_EVsandIVs, MSGBOX_DEFAULT
	goto LittlerootTown_WeatherInstitute_3F_A_EventScript_ChooseBlackboardTopic
	end

LittlerootTown_WeatherInstitute_3F_A_EventScript_ChooseBlackboardTopic:: @ 81E8151
	message LittlerootTown_WeatherInstitute_3F_A_Text_ReadWhichTopic
	multichoicegrid 3, 1, MULTI_EVSIVS_INFO, 3, 0
	switch VAR_RESULT
	case 0, LittlerootTown_WeatherInstitute_3F_A_EventScript_EffortValues
	case 1, LittlerootTown_WeatherInstitute_3F_A_EventScript_IndividualValues
	case 2, LittlerootTown_WeatherInstitute_3F_A_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, LittlerootTown_WeatherInstitute_3F_A_EventScript_ExitTopicSelect
	end


LittlerootTown_WeatherInstitute_3F_A_Text_ReadWhichTopic: @ 81E8ACF
	.string "Read about which topic?$"


LittlerootTown_WeatherInstitute_3F_A_EventScript_EffortValues:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_EVDesc, MSGBOX_SIGN
	goto LittlerootTown_WeatherInstitute_3F_A_EventScript_ChooseBlackboardTopic
	end
LittlerootTown_WeatherInstitute_3F_A_EventScript_IndividualValues:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_IVDesc, MSGBOX_SIGN
	goto LittlerootTown_WeatherInstitute_3F_A_EventScript_ChooseBlackboardTopic
	end

 LittlerootTown_WeatherInstitute_3F_A_EventScript_ExitTopicSelect:: @ 81E8151
	releaseall
	end

LittlerootTown_WeatherInstitute_3F_A_Text_EVsandIVs: @ 81E8ACF
	.string "The blackboard describes \n"
	.string "pokemon EVs and IVs,\p"
	.string "genetic and experiential factors\n"
	.string "that influence their stats.$"	

LittlerootTown_WeatherInstitute_3F_A_Text_IVDesc:@ 81E8ACF
	.string "Individual Values are\n"
	.string "pokemon genetics.\p"
	.string "They are fixed stat modifiers\n"
	.string "that every pokemon has.\p"
	.string "They range from 0-31 \n"
	.string "in each stat.\p"
	.string "To check a pokemon's IVs,\n"
	.string "press L on their stat page.$"	

LittlerootTown_WeatherInstitute_3F_A_Text_EVDesc:@ 81E8ACF
	.string "Effort Values are gained when\n"
	.string "defeating other pokemon in battle.\p"
	.string "Your pokemon gains EVs according \n"
	.string "to the highest stat of the opponent.\p"
	.string "Each pokemon can only\n"
	.string "gain so many EVs,\p"
	.string "so think carefully\n"
	.string "about how you raise them.\p"
	.string "To check a pokemon's EVs,\n"
	.string "press R on their stat page.$"

LittlerootTown_WeatherInstitute_3F_A_EventScript_TeacherDesk:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_ApplesGalore, MSGBOX_SIGN
	end

LittlerootTown_WeatherInstitute_3F_A_Text_ApplesGalore: @ 81E8ACF
	.string "The teacher's desk is packed\n"
	.string "to the brim with apples\p"
	.string "Students must really love this class!$"	



LittlerootTown_WeatherInstitute_3F_A_EventScript_EmptyDesk:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_AnEmptyDesk, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_A_Text_AnEmptyDesk: @ 81E8ACF
	.string "An empty desk.\p"
	.string "Seems like there aren't enough\n"
	.string "students to fill them.\p"
	.string "It looks rather lonely.$"	


LittlerootTown_WeatherInstitute_3F_A_EventScript_BookDesk:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_DynamicClass, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_A_Text_DynamicClass: @ 81E8ACF
	.string "This desk has a book on it from\n"
	.string "another class.\p"
	.string "...\p"
	.string "Good to have a refresher!$"	


LittlerootTown_WeatherInstitute_3F_A_EventScript_MessyDesk:: @ 81E8151
	msgbox LittlerootTown_WeatherInstitute_3F_A_Text_Personality, MSGBOX_SIGN
	end
LittlerootTown_WeatherInstitute_3F_A_Text_Personality: @ 81E8ACF
	.string "Now this is a desk with personality!\p"
	.string "You think you hear\n"
	.string "something rustling within.$"