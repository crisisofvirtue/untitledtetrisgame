// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UntitledTetrisGameMode.h"
#include "UntitledTetrisCharacter.h"

AUntitledTetrisGameMode::AUntitledTetrisGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AUntitledTetrisCharacter::StaticClass();	
}
