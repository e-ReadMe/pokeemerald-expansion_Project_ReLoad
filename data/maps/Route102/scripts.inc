Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "Pokemon in grass: Seedot, Lotad,\n"
	.string "and Ralts. \p"
	.string "Fishing Pokemon: Corphish\p"
	.string "Surfing Pokemon: Marill$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"


//Calvin battle code --------------------------------------------------------------------
.set LOCALID_TRAINERCALVIN, 2

TrainerBattleCALVIN::
	applymovement LOCALID_TRAINERCALVIN, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	goto_if_not_defeated TRAINER_CALVIN_1 CALVIN_AskforInitialBattle //if you haven't beaten them, jump to that code
	msgbox CALVINReBattle_Text_Ask, MSGBOX_YESNO //if you've beaten them before, ask to battle
	compare VAR_RESULT, TRUE
	goto_if_eq CALVINBattleStart
	goto_if_ne CALVINDecline
	end

//if you haven't battled them before
CALVIN_AskforInitialBattle:
	msgbox CALVINInitialBattle_Text_ask, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq CALVINBattleStart
	goto_if_ne CALVINDecline
	releaseall
	end
//regardless, this is the start of the battle. 
CALVINBattleStart:
	cleartrainerflag TRAINER_CALVIN_1 //you need this or rebattling wont work
	trainerbattle_single TRAINER_CALVIN_1, CALVINBattle_Text_BattleBegin, CALVINBattle_Text_BattleEnd
	releaseall
	end
	
//if you decline the battle	
CALVINDecline:
	msgbox CALVIN_Text_Decline, MSGBOX_DEFAULT
	settrainerflag(TRAINER_CALVIN_1)//this means they'll remember you
    releaseall
    end

//what they say if they HAVEN"T battled before
CALVINInitialBattle_Text_ask:
	.string "Have you just started playing? Do you\n"
	.string "want to have a battle?$"

//what you say if you HAVE battled before
CALVINReBattle_Text_Ask:
	.string "Hey, its you again! Do you want to have a\n"
	.string "battle with me?$"

//what they say once you've agreed to battle
CALVINBattle_Text_BattleBegin:
	.string "Trainer battles are great for experience\n"
	.string "and stat training!$"
	
//what they say after you beat them	
CALVINBattle_Text_BattleEnd:
	.string "If you ever want to rebattle, just let\n"
	.string "me know!$"
	
//what they say if you decline to battle	
CALVIN_Text_Decline:
	.string "Okay, that's fine. Just speak to me again\n"
	.string "if you ever change your mind. I'm always\l"
	.string "up for a battle!$"

//Rick battle code --------------------------------------------------------------------
.set LOCALID_TRAINERRICK, 3

TrainerBattleRick::
	applymovement LOCALID_TRAINERRICK, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	goto_if_not_defeated TRAINER_RICK Rick_AskforInitialBattle //if you haven't beaten them, jump to that code
	msgbox RickReBattle_Text_Ask, MSGBOX_YESNO //if you've beaten them before, ask to battle
	compare VAR_RESULT, TRUE
	goto_if_eq RickBattleStart
	goto_if_ne RickDecline
	end

//if you haven't battled them before
Rick_AskforInitialBattle:
	msgbox RickInitialBattle_Text_ask, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq RickBattleStart
	goto_if_ne RickDecline
	releaseall
	end
//regardless, this is the start of the battle. 
RickBattleStart:
	cleartrainerflag TRAINER_RICK //you need this or rebattling wont work
	trainerbattle_single TRAINER_RICK, RickBattle_Text_BattleBegin, RickBattle_Text_BattleEnd
	releaseall
	end
	
//if you decline the battle	
RickDecline:
	msgbox Rick_Text_Decline, MSGBOX_DEFAULT
	settrainerflag(TRAINER_RICK)//this means they'll remember you
    releaseall
    end

//what they say if they HAVEN"T battled before
RickInitialBattle_Text_ask:
	.string "Since we're beginners, our Digimon can't\n"
	.string "level up past level 20.\p"
	.string "Do you want me to tell you how to unlock\n"
	.string "higher levels?$"

//what you say if you HAVE battled before
RickReBattle_Text_Ask:
	.string "I heard another really good prank the\n"
	.string "other day. Do you want to hear it?$"

//what they say once you've agreed to battle
RickBattle_Text_BattleBegin:
	.string "I'll tell you if you win!$"
	
//what they say after you beat them	
RickBattle_Text_BattleEnd:
	.string "You need to JOGRESS two Digimon\n"
	.string "together. Their level resets to Lv1, but\l"
	.string "the level cap increases.\p"
	.string "Haha just kidding.$"
	
//what they say if you decline to battle	
Rick_Text_Decline:
	.string "Toughing it out on your own, are you?$"

//Allen battle code --------------------------------------------------------------------
.set LOCALID_TRAINERALLEN, 9

TrainerBattleAllen::
	applymovement LOCALID_TRAINERALLEN, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	goto_if_not_defeated TRAINER_ALLEN Allen_AskforInitialBattle //if you haven't beaten them, jump to that code
	msgbox AllenReBattle_Text_Ask, MSGBOX_YESNO //if you've beaten them before, ask to battle
	compare VAR_RESULT, TRUE
	goto_if_eq AllenBattleStart
	goto_if_ne AllenDecline
	end

//if you haven't battled them before
Allen_AskforInitialBattle:
	msgbox AllenInitialBattle_Text_ask, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq AllenBattleStart
	goto_if_ne AllenDecline
	releaseall
	end
//regardless, this is the start of the battle. 
AllenBattleStart:
	cleartrainerflag TRAINER_ALLEN //you need this or rebattling wont work
	trainerbattle_single TRAINER_ALLEN, AllenBattle_Text_BattleBegin, AllenBattle_Text_BattleEnd
	releaseall
	end
	
//if you decline the battle	
AllenDecline:
	msgbox Allen_Text_Decline, MSGBOX_DEFAULT
	settrainerflag(TRAINER_ALLEN)//this means they'll remember you
    releaseall
    end

//what they say if they HAVEN"T battled before
AllenInitialBattle_Text_ask:
	.string "Most Stage 3 Digimon have abilities that\n"
	.string "buff certain types.\p"
	.string "My Agumon has VOLCANIC BEAT, so all fire\n"
	.string "type moves get a boost. Even my other\l"
	.string "POKEMON benefit. Wanna see?$"

//what you say if you HAVE battled before
AllenReBattle_Text_Ask:
	.string "I'm still working on my synergy strategy!\n"
	.string "Shall we battle again?$"

//what they say once you've agreed to battle
AllenBattle_Text_BattleBegin:
	.string "Alright! Let's go!$"
	
//what they say after you beat them	
AllenBattle_Text_BattleEnd:
	.string "Volcanic Beat gives a 1.25x boost to all\n"
	.string "TYPE TYPE attacks, so as long as my\l"
	.string "AGUMON is on the field,\p"
	.string "all my DIGIMON benefit!$"
	
//what they say if you decline to battle	
Allen_Text_Decline:
	.string "Fair enough, my synergy strategy is\n"
	.string "tough to beat!$"

//Tiana battle code --------------------------------------------------------------------
.set LOCALID_TRAINERTIANA, 4

TrainerBattleTiana::
	applymovement LOCALID_TRAINERTIANA, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	goto_if_not_defeated TRAINER_TIANA Tiana_AskforInitialBattle //if you haven't beaten them, jump to that code
	msgbox TianaReBattle_Text_Ask, MSGBOX_YESNO //if you've beaten them before, ask to battle
	compare VAR_RESULT, TRUE
	goto_if_eq TianaBattleStart
	goto_if_ne TianaDecline
	end

//if you haven't battled them before
Tiana_AskforInitialBattle:
	msgbox TianaInitialBattle_Text_ask, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TianaBattleStart
	goto_if_ne TianaDecline
	releaseall
	end
//regardless, this is the start of the battle. 
TianaBattleStart:
	cleartrainerflag TRAINER_TIANA //you need this or rebattling wont work
	trainerbattle_single TRAINER_TIANA, TianaBattle_Text_BattleBegin, TianaBattle_Text_BattleEnd
	releaseall
	end
	
//if you decline the battle	
TianaDecline:
	msgbox Tiana_Text_Decline, MSGBOX_DEFAULT
	settrainerflag(TRAINER_TIANA)//this means they'll remember you
    releaseall
    end

//what they say if they HAVEN"T battled before
TianaInitialBattle_Text_ask:
	.string "You say you want to evolve your Digimon,\n"
	.string "but do you know about training your EVs?$"

//what you say if you HAVE battled before
TianaReBattle_Text_Ask:
	.string "Do you need to train your stats? Even if\n"
	.string "you've hit your level cap, you can still\l"
	.string "gain EV's!$"

//what they say once you've agreed to battle
TianaBattle_Text_BattleBegin:
	.string "All Digimon give at least 1 EV in every\n"
	.string "stat. You need four EV's to gain 1 stat\l"
	.string "point. Let's test it!$"
	
//what they say after you beat them	
TianaBattle_Text_BattleEnd:
	.string "Digimon give at least 1 EV in every stat,\n"
	.string "but some give 2 EV's or more.$"
	
//what they say if you decline to battle	
Tiana_Text_Decline:
	.string "You need four EV's to gain 1 stat point.\n"
	.string "But its only calculated upon level up.\l"
	.string "UGH! Training is so confusing!$"
	
//--------------------------------------------------
Route102_EventScript_TanemonMeatIntro::
	msgbox Route102_Text_TanemonMeatIntro, MSGBOX_NPC
	end

Route102_Text_TanemonMeatIntro:
	.string "Hi! I gave up my office job in the city to\n"
	.string "farm the land.\p"
	.string "I didn't have much savings, though, so I\n"
	.string "could only afford this little plot here.\p"
	.string "Feel free to grab some produce. I enjoy\n"
	.string "the process more than the end result.$"
