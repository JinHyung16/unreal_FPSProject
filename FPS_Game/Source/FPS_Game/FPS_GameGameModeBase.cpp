// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_GameGameModeBase.h"

void AFPS_GameGameModeBase::StartPlay()
{
	Super::StartPlay();

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hellow World, this is FPS_Game Mode"));
	}
}