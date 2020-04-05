// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/KGPawnBase.h"

// Sets default values
AKGPawnBase::AKGPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AKGPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKGPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AKGPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

