// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KnightGuyWeapon.generated.h"

UCLASS()
class KNIGHTGUY_API AKnightGuyWeapon : public AActor
{
	GENERATED_UCLASS_BODY()

public:

	/** Weapon Mesh */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* WeaponMesh;

public:

	/** Returns WeaponMesh subobject **/
	FORCEINLINE class UStaticMeshComponent* GetWeaponMeshComponent() const { return WeaponMesh; }

private:
};
