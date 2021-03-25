// Copyright Epic Games, Inc. All Rights Reserved.

#include "EstrellaV0_01GameMode.h"
#include "EstrellaV0_01PlayerController.h"
#include "EstrellaV0_01Character.h"
#include "UObject/ConstructorHelpers.h"

AEstrellaV0_01GameMode::AEstrellaV0_01GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEstrellaV0_01PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}