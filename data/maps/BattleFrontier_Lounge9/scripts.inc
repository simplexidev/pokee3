BattleFrontier_Lounge9_MapScripts::
	.byte 0

BattleFrontier_Lounge9_Heal::
	specialvar VAR_RESULT, IsPokecenterChallengeActivated
	goto_if_eq VAR_RESULT, TRUE, SSTidalRooms_EventScript_Bed_PokecenterChallenge
	msgbox BattleFrontier_Lounge9_Heal_TEXT, MSGBOX_NPC
	waitmessage
	fadescreen 0x1
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	fadescreen 0x0
	msgbox BattleFrontier_Lounge9_Heal_TEXT2, MSGBOX_NPC
	waitmessage
	release
	end

BattleFrontier_Lounge9_Heal_TEXT:
	.string "Hi! Welcome to the Hyper Training Gym!\n"
	.string "I will heal your Pokémon.$"

BattleFrontier_Lounge9_Heal_TEXT2:
	.string "We hope to see you again!$"

BattleFrontier_Lounge9_EV_No:
	msgbox BattleFrontier_Lounge9_EV_No_TEXT, MSGBOX_DEFAULT
	waitmessage
	release
	end

@EV Gym
BattleFrontier_Lounge9_EV_HP::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_HP_TEXT, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_HP_Yes
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_No
	end

BattleFrontier_Lounge9_EV_HP_Yes::
	msgbox BattleFrontier_Lounge9_EV_HP_TEXT2, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_WAILORD, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	release
	end
	
BattleFrontier_Lounge9_EV_ATK::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_ATK_TEXT, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_ATK_Yes
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_No
	end

BattleFrontier_Lounge9_EV_ATK_Yes::
	msgbox BattleFrontier_Lounge9_EV_ATK_TEXT2, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_GALLADE, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	release
	end

BattleFrontier_Lounge9_EV_SATK::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_SATK_TEXT, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_SATK_Yes
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_No
	end

BattleFrontier_Lounge9_EV_SATK_Yes::
	msgbox BattleFrontier_Lounge9_EV_SATK_TEXT2, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_GARDEVOIR, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	release
	end

BattleFrontier_Lounge9_EV_DEF::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_DEF_TEXT, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_DEF_Yes
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_No
	end

BattleFrontier_Lounge9_EV_DEF_Yes::
	msgbox BattleFrontier_Lounge9_EV_DEF_TEXT2, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_AGGRON, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	release
	end

BattleFrontier_Lounge9_EV_SDEF::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_SDEF_TEXT, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_SDEF_Yes
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_No
	end

BattleFrontier_Lounge9_EV_SDEF_Yes::
	msgbox BattleFrontier_Lounge9_EV_SDEF_TEXT2, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_LUDICOLO, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	release
	end

BattleFrontier_Lounge9_EV_SPD::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_SPD_TEXT, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_SPD_Yes
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_No
	end

BattleFrontier_Lounge9_EV_SPD_Yes::
	msgbox BattleFrontier_Lounge9_EV_SPD_TEXT2, MSGBOX_DEFAULT
	waitmessage
	setflag FLAG_SYS_NO_CATCHING
	setflag FLAG_NO_SHINY
	setwildbattle SPECIES_SCEPTILE, 1, ITEM_NONE
	dowildbattle
	clearflag FLAG_SYS_NO_CATCHING
	clearflag FLAG_NO_SHINY
	release
	end

BattleFrontier_Lounge9_EV_Column::
	msgbox BattleFrontier_Lounge9_EV_Column_Text, MSGBOX_SIGN
	end

@EV RESET
BattleFrontier_Lounge9_EV_SetZero::
	lockall
	faceplayer
	goto_if_unset FLAG_EV_MAN_FIRSTIME, BattleFrontier_Lounge9_EV_SetZeroIntro
	msgbox BattleFrontier_Lounge9_EV_SetZeroTextNoIntro, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroMoney
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroNo
	end

BattleFrontier_Lounge9_EV_SetZeroIntro::
	setflag FLAG_EV_MAN_FIRSTIME
	msgbox BattleFrontier_Lounge9_EV_SetZeroText, MSGBOX_NPC
	waitmessage
	end

BattleFrontier_Lounge9_EV_SetZeroMoney::
	msgbox BattleFrontier_Lounge9_EV_SetZeroMoneyText, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroCheckMoney
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroNo
	end

BattleFrontier_Lounge9_EV_SetZeroCheckMoney::
	checkmoney 20000, 0
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroYes
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroNoMoney
	end

BattleFrontier_Lounge9_EV_SetZeroYes::
	msgbox BattleFrontier_Lounge9_EV_SetZeroText2, MSGBOX_DEFAULT
	waitmessage
	closemessage
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_Lounge9_EV_SetZeroNo
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroEgg
	goto BattleFrontier_Lounge9_EV_SetZeroSure
	end

BattleFrontier_Lounge9_EV_SetZeroNo::
	msgbox BattleFrontier_Lounge9_EV_SetZeroTextNo, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_EV_SetZeroNoMoney::
	msgbox BattleFrontier_Lounge9_EV_SetZeroTextNoMoney, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_EV_SetZeroEgg::
	msgbox BattleFrontier_Lounge9_EV_SetZeroTextEgg, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_EV_SetZeroSure::
	faceplayer
	msgbox BattleFrontier_Lounge9_EV_SetZeroTextSure, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroProceed
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroNo
	end

BattleFrontier_Lounge9_EV_SetZeroProceed::
	faceplayer
	fadescreen 0x1
	delay 30
	removemoney 20000, 0
	fadescreen 0x0
	setvar VAR_0x8000, 0
	setvar VAR_0x8001, 0
	setvar VAR_0x8002, 0
	setvar VAR_0x8003, 0
	setvar VAR_0x8005, 0
	setvar VAR_0x8006, 0
	special SetHpEvs
	special SetAtkEvs
	special SetDefEvs
	special SetSpdEvs
	special SetSpAtkEvs
	special SetSpDefEvs
	msgbox BattleFrontier_Lounge9_EV_SetZeroText3, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

@IV setter to 31 (all of them)
BattleFrontier_Lounge9_IV_Man::
	checkflag FLAG_IV_SETTER
	lockall
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, BattleFrontier_Lounge9_IV_ManNoChampion
	call_if_unset FLAG_IV_SETTER, BattleFrontier_Lounge9_IV_First_Time
	msgbox BattleFrontier_Lounge9_IV_Text1, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_IV_CheckMoney
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_IV_No
	end

BattleFrontier_Lounge9_IV_ManNoChampion::
	msgbox BattleFrontier_Lounge9_IV_TextNoChampion, MSGBOX_NPC
	releaseall
	end

BattleFrontier_Lounge9_IV_TextNoChampion:
	.string "Hmm? What?\p"
	.string "Oh, you're a trainer. But not\n"
	.string "one I would call strong…\p"
	.string "Try beating the Pokémon League\n"
	.string "and come back again.\p"
	.string "I will show you the strongest\n"
	.string "training routine of the region!$"

BattleFrontier_Lounge9_IV_First_Time::
	msgbox BattleFrontier_Lounge9_IV_TextFirstTime, MSGBOX_NPC
	setflag FLAG_IV_SETTER
	releaseall
	end

BattleFrontier_Lounge9_IV_No::
	msgbox BattleFrontier_Lounge9_IV_Text_No, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_IV_NoLevel::
	msgbox BattleFrontier_Lounge9_IV_Text_NoLevel, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_IV_CheckMoney::
	checkmoney 100000, 0
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge9_IV_Continue
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroNoMoney
	end

BattleFrontier_Lounge9_IV_Continue::
	faceplayer
	closemessage
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge BattleFrontier_Lounge9_IV_No
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroEgg
	goto BattleFrontier_Lounge9_IV_Continue2
	end

BattleFrontier_Lounge9_IV_Continue2::
	faceplayer
	waitmessage
	checkpartymonlevel 100
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge9_IV_Continue3
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge9_IV_NoLevel
	releaseall
	end

BattleFrontier_Lounge9_IV_Continue3::
	faceplayer
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_IV_CustomizeIVs_HP_Start
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_IV_SetMaxQuestion
	releaseall
	end

BattleFrontier_Lounge9_IV_SetMaxQuestion::
	msgbox BattleFrontier_Lounge9_IV_Text_SetMaxQuestion, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_IV_SetMax
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_IV_No
	end

BattleFrontier_Lounge9_IV_SetMax::
	faceplayer
	fadescreen 0x1
	delay 100
	removemoney 100000, 0
	fadescreen 0x0
	faceplayer
	setvar VAR_0x8007, 31
	setvar VAR_0x8008, 31
	setvar VAR_0x8009, 31
	setvar VAR_0x800A, 31
	setvar VAR_0x800B, 31
	setvar VAR_UNUSED_0x8014, 31
	special SetHpIvs
	special SetAtkIvs
	special SetDefIvs
	special SetSpdIvs
	special SetSpAtkIvs
	special SetSpDefIvs
	msgbox BattleFrontier_Lounge9_IV_Finish, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

BattleFrontier_Lounge9_IV_CustomizeIVs_HP_Start::
	setflag FLAG_3031BOX
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs_HP, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_Lounge9_MultichoiceIVs_HP_31
	case NO, BattleFrontier_Lounge9_MultichoiceIVs_HP_30
	case 2, BattleFrontier_Lounge9_IV_CustomizeIVs_HP_Start
	waitmessage
	end

BattleFrontier_Lounge9_MultichoiceIVs_HP_31::
	setvar VAR_0x8007, 31
	special SetHpIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_ATK_Start

BattleFrontier_Lounge9_MultichoiceIVs_HP_30::
	setvar VAR_0x8007, 30
	special SetHpIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_ATK_Start

BattleFrontier_Lounge9_IV_CustomizeIVs_ATK_Start::
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs_ATK, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_Lounge9_MultichoiceIVs_ATK_31
	case NO, BattleFrontier_Lounge9_MultichoiceIVs_ATK_30
	case 2, BattleFrontier_Lounge9_IV_CustomizeIVs_HP_Start
	waitmessage
	end

BattleFrontier_Lounge9_MultichoiceIVs_ATK_31::
	setvar VAR_0x8008, 31
	special SetAtkIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_DEF_Start

BattleFrontier_Lounge9_MultichoiceIVs_ATK_30::
	setvar VAR_0x8008, 30
	special SetAtkIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_DEF_Start

BattleFrontier_Lounge9_IV_CustomizeIVs_DEF_Start::
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs_DEF, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_Lounge9_MultichoiceIVs_DEF_31
	case NO, BattleFrontier_Lounge9_MultichoiceIVs_DEF_30
	case 2, BattleFrontier_Lounge9_IV_CustomizeIVs_ATK_Start
	waitmessage
	end

BattleFrontier_Lounge9_MultichoiceIVs_DEF_31::
	setvar VAR_0x8009, 31
	special SetDefIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_SPD_Start

BattleFrontier_Lounge9_MultichoiceIVs_DEF_30::
	setvar VAR_0x8009, 30
	special SetDefIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_SPD_Start

BattleFrontier_Lounge9_IV_CustomizeIVs_SPD_Start::
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs_SPD, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_Lounge9_MultichoiceIVs_SPD_31
	case NO, BattleFrontier_Lounge9_MultichoiceIVs_SPD_30
	case 2, BattleFrontier_Lounge9_IV_CustomizeIVs_DEF_Start
	waitmessage
	end

BattleFrontier_Lounge9_MultichoiceIVs_SPD_31::
	setvar VAR_0x800A, 31
	special SetSpdIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_SPATK_Start
	end

BattleFrontier_Lounge9_MultichoiceIVs_SPD_30::
	setvar VAR_0x800A, 30
	special SetSpdIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_SPATK_Start
	end

BattleFrontier_Lounge9_IV_CustomizeIVs_SPATK_Start::
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs_SPATK, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_Lounge9_MultichoiceIVs_SPATK_31
	case NO, BattleFrontier_Lounge9_MultichoiceIVs_SPATK_30
	case 2, BattleFrontier_Lounge9_IV_CustomizeIVs_SPD_Start
	waitmessage
	end

BattleFrontier_Lounge9_MultichoiceIVs_SPATK_31::
	setvar VAR_0x800B, 31
	special SetSpAtkIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_SPDEF_Start

BattleFrontier_Lounge9_MultichoiceIVs_SPATK_30::
	setvar VAR_0x800B, 30
	special SetSpAtkIvs
	goto BattleFrontier_Lounge9_IV_CustomizeIVs_SPDEF_Start

BattleFrontier_Lounge9_IV_CustomizeIVs_SPDEF_Start::
	msgbox BattleFrontier_Lounge9_IV_Text_CustomizeIVs_SPDEF, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_Lounge9_MultichoiceIVs_SPDEF_31
	case NO, BattleFrontier_Lounge9_MultichoiceIVs_SPDEF_30
	case 2, BattleFrontier_Lounge9_IV_CustomizeIVs_SPATK_Start
	waitmessage
	end

BattleFrontier_Lounge9_MultichoiceIVs_SPDEF_31::
	setvar VAR_UNUSED_0x8014, 31
	special SetSpDefIvs
	faceplayer
	fadescreen 0x1
	delay 100
	removemoney 100000, 0
	fadescreen 0x0
	faceplayer
	msgbox BattleFrontier_Lounge9_IV_Finish, MSGBOX_DEFAULT
	clearflag FLAG_3031BOX
	closemessage
	releaseall
	end

BattleFrontier_Lounge9_MultichoiceIVs_SPDEF_30::
	setvar VAR_UNUSED_0x8014, 30
	special SetSpDefIvs
	faceplayer
	fadescreen 0x1
	delay 100
	removemoney 100000, 0
	fadescreen 0x0
	faceplayer
	msgbox BattleFrontier_Lounge9_IV_Finish, MSGBOX_DEFAULT
	clearflag FLAG_3031BOX
	closemessage
	releaseall
	end

BattleFrontier_Lounge9_IV_Text_CustomizeIVs:
	.string "Would you like to customize the Iv\n"
	.string "stat distribution?$"

BattleFrontier_Lounge9_IV_Text_CustomizeIVs_HP:
	.string "How many points should I set the\n"
	.string "HP stat to?$"

BattleFrontier_Lounge9_IV_Text_CustomizeIVs_ATK:
	.string "How many points should I set the\n"
	.string "Atk stat to?$"

BattleFrontier_Lounge9_IV_Text_CustomizeIVs_SPATK:
	.string "How many points should I set the\n"
	.string "Sp.Atk stat to?$"

BattleFrontier_Lounge9_IV_Text_CustomizeIVs_DEF:
	.string "How many points should I set the\n"
	.string "Def stat to?$"

BattleFrontier_Lounge9_IV_Text_CustomizeIVs_SPDEF:
	.string "How many points should I set the\n"
	.string "Sp.Def stat to?$"

BattleFrontier_Lounge9_IV_Text_CustomizeIVs_SPD:
	.string "How many points should I set the\n"
	.string "Spd stat to?$"

BattleFrontier_Lounge9_IV_Text_SetMaxQuestion:
	.string "I will set all IVs to the maximum\n"
	.string "value, which is 31. Should I continue?$"

BattleFrontier_Lounge9_IV_TextFirstTime:
	.string "Hey! It's you! Nice to\n"
	.string "see you around here!\p"
	.string "Wait… You don't know me?\p"
	.string ". . .\p"
	.string ". . .\p"
	.string "Oh… Of course! I saw you on\n"
	.string "the Tv a short while ago!\p"
	.string "I'm Ivan, but you can call me Iv-man!\p"
	.string "I'm the brother of Ev-man,\n"
	.string "to no one's surprise.\p"
	.string "And you…\p"
	.string "You are {PLAYER} and you recently\n"
	.string "won the Pokémon League, right?\p"
	.string "Your last combat was quite amazing.\p"
	.string "I learned so many things from you\n"
	.string "that I decided to join your Fan Club!\p"
	.string "Anyway, I also decided to become\n"
	.string "stronger so I created the\l"
	.string "absolute training routine.\p"
	.string "For Pokémon, of course!\n"
	.string "If you want we can train together to\l"
	.string "maximize the potential of your Pokémon.\p"
	.string "But… to maximize that potential, the\n"
	.string "Pokémon needs to be ready for it.\p"
	.string "Only Pokémon who have reached its\n"
	.string "maximum Level can whitstand\l"
	.string "this training routine.\p"
	.string "Do you want to try it?\p"
	.string "It's a lenghty and difficult process, so\n"
	.string "I need 100.000¥ to prepare everything\l"
	.string "Tell me when you are ready!$"

BattleFrontier_Lounge9_IV_Text1:
	.string "Iv-man: Hi! What's up?\n"
	.string "Ready for the best training routine of\l"
	.string "all Hoenn?$"

BattleFrontier_Lounge9_IV_Continue_Text:
	.string "Are you sure that this is the correct\n"
	.string "Pokémon?$"

BattleFrontier_Lounge9_IV_Text_No:
	.string "Oh… Well, see you another time.$"

BattleFrontier_Lounge9_IV_Text_NoLevel:
	.string "I don't think your Pokémon has reached\n"
	.string "its maximum Level…$"

BattleFrontier_Lounge9_IV_Finish:
	.string "Phew… I'm exhausted…\n"
	.string "What about your Pokémon?\p"
	.string "You should Rest a bit\n"
	.string "before going.\p"
	.string "Well, see you soon!$"

BattleFrontier_Lounge9_EV_SetZeroText:
	.string "Hello there, trainer! My name's Evan,\n"
	.string "but I'm known as Ev-man around here!\p"
	.string "I am the owner this Gym, and I train\n"
	.string "here together with my brother Ivan.\p"
	.string "If you want to reset your Pokémon\n"
	.string "EVs to zero, just talk to me.$"

BattleFrontier_Lounge9_EV_SetZeroTextNoIntro:
	.string "Ev-man: Welcome again!\n"
	.string "Do you want to reset all Pokémon\l"
	.string "Effort Values to zero?$"

BattleFrontier_Lounge9_EV_SetZeroText2:
	.string "Alright, which Pokémon EVs should I\n"
	.string "reset to zero?$"

BattleFrontier_Lounge9_EV_SetZeroText3:
	.string "Phew! It was hard, but I managed it!\n"
	.string "Its EVs are now zero!$"

BattleFrontier_Lounge9_EV_SetZeroTextEgg:
	.string "Sorry, that won't work.$"

BattleFrontier_Lounge9_EV_SetZeroTextNo:
	.string "Alright, come back if you need to!$"

BattleFrontier_Lounge9_EV_SetZeroMoneyText:
	.string "This process is quite difficult.\n"
	.string "It will cost you 20.000¥.\l"
	.string "Do you want to continue?$"

BattleFrontier_Lounge9_EV_SetZeroTextNoMoney:
	.string "You don't have enough money.\p"
	.string "Come back when you have.$"

BattleFrontier_Lounge9_EV_SetZeroTextSure:
	.string "Are you sure you want to reset this\n"
	.string "Pokémon Ev values?\p"
	.string "This process can't be undone.$"

BattleFrontier_Lounge9_EV_Column_Text:
	.string "Welcome to the Hyper Training Gym!\p"
	.string "Here you can train your Pokémon\n"
	.string "to improve their Stats.\p"
	.string "How does this work?\p"
	.string "Win one battle and obtain Effort Values\n"
	.string "for the selected stat of your Pokémon.\p"
	.string "Trainer Tip 1:\n"
	.string "Reset EVs to zero by talking\l"
	.string "to Ev-Man.\p"
	.string "Trainer Tip 2:\n"
	.string "Equip a Macho Brace to multiply\l"
	.string "by 5 the EVs gained.\p"
	.string "Trainer Tip 3:\n"
	.string "A new type of training is available\l"
	.string "at the right corner of the gym.$"

BattleFrontier_Lounge9_EV_HP_TEXT:
	.string "Hi ya buddy! I can train your\n"
	.string "Pokémon in Health Points.\p"
	.string "Are you ready?$"

BattleFrontier_Lounge9_EV_HP_TEXT2:
	.string "Go Wailord!$"

BattleFrontier_Lounge9_EV_ATK_TEXT:
	.string "Osha! I can train your Pokémon\n"
	.string "in Attack.\p"
	.string "Are you ready?$"

BattleFrontier_Lounge9_EV_ATK_TEXT2:
	.string "Go Gallade!$"

BattleFrontier_Lounge9_EV_SATK_TEXT:
	.string "Bonjour! I can train your Pokémon\n"
	.string "in Special Attack.\p"
	.string "Are you ready?$"

BattleFrontier_Lounge9_EV_SATK_TEXT2:
	.string "Go Gardevoir!$"
	
BattleFrontier_Lounge9_EV_DEF_TEXT:
	.string "Sup' kid! I can train your\n"
	.string "Pokémon in Defense.\p"
	.string "Are you ready?$"

BattleFrontier_Lounge9_EV_DEF_TEXT2:
	.string "Go Aggron!$"

BattleFrontier_Lounge9_EV_SDEF_TEXT:
	.string "Bonjour mon trainer! I can train your\n"
	.string "Pokémon in Special Defense.\p"
	.string "Are you ready?$"

BattleFrontier_Lounge9_EV_SDEF_TEXT2:
	.string "Go Ludicolo!$"

BattleFrontier_Lounge9_EV_SPD_TEXT:
	.string "Hmph… I can train your\n"
	.string "Pokémon in Speed.\p"
	.string "Are you ready?$"

BattleFrontier_Lounge9_EV_SPD_TEXT2:
	.string "Go Sceptile!$"

BattleFrontier_Lounge9_EV_No_TEXT:
	.string "No? Okay.$"

@Chansey training

BattleFrontier_Lounge9_Chansey5::
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, BattleFrontier_Lounge9_Chansey5Champion
	msgbox BattleFrontier_Lounge9_Chansey5Repeat2, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_Lounge9_Chansey1End
	case YES, BattleFrontier_Lounge9_Chansey5Battle
	case MULTI_B_PRESSED, BattleFrontier_Lounge9_Chansey1End

BattleFrontier_Lounge9_Chansey5Battle::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_CHANSEY5, 0, BattleFrontier_Lounge9_Chansey5Intro, BattleFrontier_Lounge9_Chansey5Defeat, BattleFrontier_Lounge9_ChanseyBattleAgain
	end

BattleFrontier_Lounge9_Chansey1End::
	closemessage
	end

BattleFrontier_Lounge9_ChanseyBattleAgain::
	faceplayer
	msgbox BattleFrontier_Lounge9_Chansey5Repeat, MSGBOX_AUTOCLOSE
	clearflag 0x85B
	end

BattleFrontier_Lounge9_Chansey5Champion:
	faceplayer
	msgbox BattleFrontier_Lounge9_Chansey5ChampionText, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge9_Chansey5ChampionText:
	.string "How many badges you have?\p"
	.string "Oh my! No, I cannot battle you!\n"
	.string "You are not strong enough.\l"
	.string "Come back when you get stronger.$"

BattleFrontier_Lounge9_Chansey5Intro:
	.string "My Blissey are ready for it!$"

BattleFrontier_Lounge9_Chansey5Defeat:
	.string "Oh no… Blissey, use Soft-boiled!$"

BattleFrontier_Lounge9_Chansey5Repeat:
	.string "We can battle again if you want!$"

BattleFrontier_Lounge9_Chansey5Repeat2:
	.string "Have you come to train?$"

@Ability swapper

BattleFrontier_Lounge9_Ability_Man::
	lockall
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, BattleFrontier_Lounge9_Ability_ManNoChampion
	msgbox BattleFrontier_Lounge9_Ability_Text1, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Lounge9_Ability_CheckMoney
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge9_Ability_No
	end

BattleFrontier_Lounge9_Ability_ManNoChampion::
	msgbox BattleFrontier_Lounge9_Ability_Text_NoChampion, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_Ability_No:
	msgbox BattleFrontier_Lounge9_Ability_Text_No, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_Ability_CheckMoney:
	checkmoney 25000, 0
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge9_Ability_Continue
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge9_EV_SetZeroNoMoney
	end

BattleFrontier_Lounge9_Ability_Continue:
	closemessage
	special ChoosePartyMon
	waitstate
	special SwitchMonAbility
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge9_Ability_Finish
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge9_Ability_Cant
	end

BattleFrontier_Lounge9_Ability_Cant:
	msgbox BattleFrontier_Lounge9_Ability_Text_Cant, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

BattleFrontier_Lounge9_Ability_Finish:
	fadescreen 0x1
	delay 100
	fadescreen 0x0
	faceplayer
	waitse
	playse SE_EXP_MAX
	msgbox BattleFrontier_Lounge9_Ability_Finish_Text, MSGBOX_DEFAULT
	removemoney 25000, 0
	closemessage
	releaseall
	end

BattleFrontier_Lounge9_Ability_Finish_Text:
	.string "That's it! You're welcome!$"

BattleFrontier_Lounge9_Ability_Text1:
	.string "Welcome! I'm the Ability Expert!\p"
	.string "I can swap Pokémon's abilities in\n"
	.string "a heartbeat, only for 25.000¥!\p"
	.string "Would you like me to swap any\n"
	.string "Pokémon's ability?$"

BattleFrontier_Lounge9_Ability_Text_No:
	.string "Sure. I'll be here if you need me.$"

BattleFrontier_Lounge9_Ability_Text_Cant:
	.string "I cannot do that. This Pokémon\n"
	.string "does not have a second Ability!$"

BattleFrontier_Lounge9_Ability_Text_NoChampion:
	.string "Welcome! I'm the Ability Expert!\p"
	.string "I can swap Pokémon's abilities\n"
	.string "in a heartbeat.\p"
	.string "Unfortunately, my back hurts and\n"
	.string "I can't work today.\p"
	.string "Come again later!$"
