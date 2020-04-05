// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "KnightGuy.h"
#include "GameFramework/GameModeBase.h"
#include "KGGameModeBase.generated.h"


/** Base class for GameMode, should be blueprinted */
UCLASS()
class KNIGHTGUY_API AKGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	/** Constructor */
	AKGGameModeBase();
	
};
