// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectRuneCombatGameMode.h"
#include "ProjectRuneCombatCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectRuneCombatGameMode::AProjectRuneCombatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
