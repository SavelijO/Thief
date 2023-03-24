// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThiefGameMode.h"
#include "ThiefCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThiefGameMode::AThiefGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
