// Copyright Epic Games, Inc. All Rights Reserved.

#include "FpsExperimentsGameMode.h"
#include "FpsExperimentsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFpsExperimentsGameMode::AFpsExperimentsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
