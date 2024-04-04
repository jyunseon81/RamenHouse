// Copyright Epic Games, Inc. All Rights Reserved.

#include "RamenHouseGameMode.h"
#include "RamenHouseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARamenHouseGameMode::ARamenHouseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
