// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Managers/KGAssetManager.h"
#include "Items/KGItem.h"
#include "AbilitySystemGlobals.h"

const FPrimaryAssetType	UKGAssetManager::PotionItemType = TEXT("Potion");
const FPrimaryAssetType	UKGAssetManager::MagicItemType = TEXT("Magic");
const FPrimaryAssetType	UKGAssetManager::TokenItemType = TEXT("Token");
const FPrimaryAssetType	UKGAssetManager::WeaponItemType = TEXT("Weapon");

UKGAssetManager& UKGAssetManager::Get()
{
	UKGAssetManager* This = Cast<UKGAssetManager>(GEngine->AssetManager);

	if (This)
	{
		return *This;
	}
	else
	{
		//UE_LOG(LogActionKG, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be KGAssetManager!"));
		return *NewObject<UKGAssetManager>(); // never calls this
	}
}

void UKGAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	UAbilitySystemGlobals::Get().InitGlobalData();
}


UKGItem* UKGAssetManager::ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	FSoftObjectPath ItemPath = GetPrimaryAssetPath(PrimaryAssetId);

	// This does a synchronous load and may hitch
	UKGItem* LoadedItem = Cast<UKGItem>(ItemPath.TryLoad());

	if (bLogWarning && LoadedItem == nullptr)
	{
		//UE_LOG(LogActionKG, Warning, TEXT("Failed to load item for identifier %s!"), *PrimaryAssetId.ToString());
	}

	return LoadedItem;
}