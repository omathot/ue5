// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test0GameMode.h"
#include "Test0Character.h"
#include "UObject/ConstructorHelpers.h"

ATest0GameMode::ATest0GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
