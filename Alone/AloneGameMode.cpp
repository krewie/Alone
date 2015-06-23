// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Alone.h"
#include "AloneGameMode.h"
#include "AloneCharacter.h"

AAloneGameMode::AAloneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	/**
	static ConstructorHelpers::FClassFinder <AHUD> BP_HUD(TEXT("/Game/ThirdPerson/Blueprints/BP_HUD"));
	HUDClass = (UClass*)BP_HUD.Class;
	*/
}
