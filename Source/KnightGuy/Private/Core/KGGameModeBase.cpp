// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/KGGameModeBase.h"
#include "Core/KGPlayerControllerBase.h"
#include "Core/KGPawnBase.h"

AKGGameModeBase::AKGGameModeBase()
{
	//GameStateClass = AKGGameStateBase::StaticClass();
	PlayerControllerClass = AKGPlayerControllerBase::StaticClass();
	DefaultPawnClass = AKGPawnBase::StaticClass();
}
