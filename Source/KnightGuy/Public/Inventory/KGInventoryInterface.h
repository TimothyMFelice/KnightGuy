// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "KnightGuy.h"
#include "KGInventoryInterface.generated.h"

/**
* Interface for actors that provide a set of KGItems bound to ItemSlots
* This exists so KGCharacterBase can query inventory without doing hacky player controller casts
* It is designed only for use by native classes
*/
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UKGInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

class KNIGHTGUY_API IKGInventoryInterface
{
	GENERATED_BODY()

public:
	/** Returns the map of items to data */
	virtual const TMap<UKGItem*, FKGItemData>& GetInventoryDataMap() const = 0;

	/** Returns the map of slots to items */
	virtual const TMap<FKGItemSlot, UKGItem*>& GetSlottedItemMap() const = 0;

	/** Gets the delegate for inventory item changes */
	virtual FOnInventoryItemChangedNative& GetInventoryItemChangedDelegate() = 0;

	/** Gets the delegate for inventory slot changes */
	virtual FOnSlottedItemChangedNative& GetSlottedItemChangedDelegate() = 0;

	/** Gets the delegate for when the inventory loads */
	virtual FOnInventoryLoadedNative& GetInventoryLoadedDelegate() = 0;
};

