// Copyright Epic Games, Inc. All Rights Reserved.

#include "WIAvatarGameMode.h"
#include "WIAvatarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWIAvatarGameMode::AWIAvatarGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
