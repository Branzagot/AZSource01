// Copyright Epic Games, Inc. All Rights Reserved.

#include "AZSource01GameMode.h"
#include "AZSource01Character.h"
#include "UObject/ConstructorHelpers.h"

AAZSource01GameMode::AAZSource01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder< APawn > PlayerPawnBPClass( TEXT( "/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter" ) );
	if ( PlayerPawnBPClass.Class != NULL )
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
