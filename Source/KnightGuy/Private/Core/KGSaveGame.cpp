// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/KGSaveGame.h"
#include "Core/KGGameInstanceBase.h"


void UKGSaveGame::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);

	if (Ar.IsLoading() && SavedDataVersion != EKGSaveGameVersion::LatestVersion)
	{
		if (SavedDataVersion < EKGSaveGameVersion::AddedItemData)
		{
			// Convert from list to item data map
			for (const FPrimaryAssetId& ItemId : InventoryItems_DEPRECATED)
			{
				InventoryData.Add(ItemId, FKGItemData(1, 1));
			}

			InventoryItems_DEPRECATED.Empty();
		}

		SavedDataVersion = EKGSaveGameVersion::LatestVersion;
	}
}
