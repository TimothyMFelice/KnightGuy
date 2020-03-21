// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapons/KnightGuyWeapon.h"

// Sets default values
AKnightGuyWeapon::AKnightGuyWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create a camera boom attached to the root (capsule)
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon Mesh")); 
	WeaponMesh->SetupAttachment(RootComponent);
}

