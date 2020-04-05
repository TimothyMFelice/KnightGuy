// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Managers/KGAssetManager.h"
#include "Items/KGItem.h"
#include "KGMagicItem.generated.h"

/** Native base class for skills, should be blueprinted */
UCLASS()
class KNIGHTGUY_API UKGMagicItem : public UKGItem
{
	GENERATED_BODY()

public:
	/** Constructor */
	UKGMagicItem()
	{
		ItemType = UKGAssetManager::MagicItemType;
	}
};