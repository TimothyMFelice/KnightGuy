// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/KGAbilitySystemComponent.h"

#include "AbilitySystemGlobals.h"
#include "Abilities/KGGameplayAbility.h"
#include "Core/KGCharacterBase.h"

UKGAbilitySystemComponent::UKGAbilitySystemComponent()
{

}

void UKGAbilitySystemComponent::GetActiveAbilitiesWithTags(const FGameplayTagContainer& GameplayTagContainer, TArray<UKGGameplayAbility*>& ActiveAbilities)
{
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	GetActivatableGameplayAbilitySpecsByAllMatchingTags(GameplayTagContainer, AbilitiesToActivate, false);

	// Iterate the list of all ability specs
	for (FGameplayAbilitySpec* Spec : AbilitiesToActivate)
	{
		// Iterate all instances on this ability spec
		TArray<UGameplayAbility*> AbilityInstances = Spec->GetAbilityInstances();

		for (UGameplayAbility* ActiveAbility : AbilityInstances)
		{
			ActiveAbilities.Add(Cast<UKGGameplayAbility>(ActiveAbility));
		}
	}
}

int32 UKGAbilitySystemComponent::GetDefaultAbilityLevel() const
{
	AKGCharacterBase* OwningCharacter = Cast<AKGCharacterBase>(OwnerActor);

	if (OwningCharacter)
	{
		return OwningCharacter->GetCharacterLevel();
	}
	return 1;
}

UKGAbilitySystemComponent* UKGAbilitySystemComponent::GetAbilitySystemComponentFromActor(const AActor* Actor, bool LookForComponent /*= false*/)
{
	return Cast<UKGAbilitySystemComponent>(UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Actor, LookForComponent));
}
