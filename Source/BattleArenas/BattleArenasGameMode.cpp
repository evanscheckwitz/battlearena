// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BattleArenas.h"
#include "BattleArenasGameMode.h"
#include "BattleArenasHUD.h"
#include "BattleArenasCharacter.h"

ABattleArenasGameMode::ABattleArenasGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABattleArenasHUD::StaticClass();
}
