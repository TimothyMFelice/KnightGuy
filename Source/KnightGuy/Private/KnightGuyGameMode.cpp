// Fill out your copyright notice in the Description page of Project Settings.


#include "KnightGuyGameMode.h"
#include "UObject/ConstructorHelpers.h"


AKnightGuyGameMode::AKnightGuyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> KnightGuyCharacterBPClass(TEXT("/Game/KnightGuy/Core/Characters/BP_KnightGuyCharacter.BP_KnightGuyCharacter"));
	if (KnightGuyCharacterBPClass.Class != NULL)
	{
		DefaultPawnClass = KnightGuyCharacterBPClass.Class;
	}
}
