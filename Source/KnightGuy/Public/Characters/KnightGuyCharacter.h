// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "KnightGuyCharacter.generated.h"

UCLASS()
class KNIGHTGUY_API AKnightGuyCharacter : public ACharacter
{
	GENERATED_BODY()

protected:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// Sets default values for this character's properties
	AKnightGuyCharacter();

};
