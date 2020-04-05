// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Managers/KGAssetManager.h"
#include "Items/KGItem.h"
#include "KGTokenItem.generated.h"

/** Native base class for tokens/currency, should be blueprinted */
UCLASS()
class KNIGHTGUY_API UKGTokenItem : public UKGItem
{
	GENERATED_BODY()

public:
	/** Constructor */
	UKGTokenItem()
	{
		ItemType = UKGAssetManager::TokenItemType;
		MaxCount = 0; // Infinite
	}
};