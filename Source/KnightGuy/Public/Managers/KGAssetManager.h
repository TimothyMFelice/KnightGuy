// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "KnightGuy.h"
#include "Engine/AssetManager.h"
#include "KGAssetManager.generated.h"

class UKGItem;

/**
* Game implementation of asset manager, overrides functionality and stores game-specific types
* It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic
* This is used by setting AssetManagerClassName in DefaultEngine.ini
*/
UCLASS()
class KNIGHTGUY_API UKGAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UKGAssetManager() {}
	virtual void StartInitialLoading() override;

	/** Static types for items */
	static const FPrimaryAssetType	PotionItemType;
	static const FPrimaryAssetType	MagicItemType;
	static const FPrimaryAssetType	TokenItemType;
	static const FPrimaryAssetType	WeaponItemType;

	/** Returns the current AssetManager object */
	static UKGAssetManager& Get();

	/**
	* Synchronously loads an KGItem subclass, this can hitch but is useful when you cannot wait for an async load
	* This does not maintain a reference to the item so it will garbage collect if not loaded some other way
	*
	* @param PrimaryAssetId The asset identifier to load
	* @param bDisplayWarning If true, this will log a warning if the item failed to load
	*/
	UKGItem* ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning = true);
};

