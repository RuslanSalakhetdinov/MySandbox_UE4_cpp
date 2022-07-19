// Copyright Epic Games, Inc. All Rights Reserved.


#include "MySandboxGameModeBase.h"
#include <SandboxPawn.h>
#include <SandboxPlayerController.h>

AMySandboxGameModeBase::AMySandboxGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();
}
