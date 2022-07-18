// Copyright Epic Games, Inc. All Rights Reserved.


#include "MySandboxGameModeBase.h"
#include <SandboxPawn.h>

AMySandboxGameModeBase::AMySandboxGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
}
