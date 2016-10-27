// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Unrealdimension.h"
#include "UnrealdimensionGameMode.h"
#include "UnrealdimensionCharacter.h"

AUnrealdimensionGameMode::AUnrealdimensionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
