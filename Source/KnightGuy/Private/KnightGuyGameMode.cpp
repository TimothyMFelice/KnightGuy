// Fill out your copyright notice in the Description page of Project Settings.


#include "KnightGuyGameMode.h"
#include "UObject/ConstructorHelpers.h"
#include "Characters/KightGuyCharacter.h"


AKnightGuyGameMode::AKnightGuyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<AKightGuyCharacter> KnightGuyCharacterBPClass(TEXT("/Game/KnightGuy/Core/Characters/Blueprints/BP_KnightGuyCharacter"));
	if (KnightGuyCharacterBPClass.Class != NULL)
	{
		DefaultPawnClass = KnightGuyCharacterBPClass.Class;
	}
}
