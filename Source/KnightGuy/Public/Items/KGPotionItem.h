// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Managers/KGAssetManager.h"
#include "Items/KGItem.h"
#include "KGPotionItem.generated.h"

/** Native base class for potions, should be blueprinted */
UCLASS()
class KNIGHTGUY_API UKGPotionItem : public UKGItem
{
	GENERATED_BODY()

public:
	/** Constructor */
	UKGPotionItem()
	{
		ItemType = UKGAssetManager::PotionItemType;
	}
};