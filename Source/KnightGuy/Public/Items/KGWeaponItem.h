// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Managers/KGAssetManager.h"
#include "Items/KGItem.h"
#include "KGWeaponItem.generated.h"

/** Native base class for weapons, should be blueprinted */
UCLASS()
class KNIGHTGUY_API UKGWeaponItem : public UKGItem
{
	GENERATED_BODY()

public:
	/** Constructor */
	UKGWeaponItem()
	{
		ItemType = UKGAssetManager::WeaponItemType;
	}

	/** Weapon actor to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Weapon)
	TSubclassOf<AActor> WeaponActor;
};