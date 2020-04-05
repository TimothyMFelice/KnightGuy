// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "KnightGuy.h"
#include "GameFramework/Pawn.h"
#include "KGPawnBase.generated.h"

UCLASS()
class KNIGHTGUY_API AKGPawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AKGPawnBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
