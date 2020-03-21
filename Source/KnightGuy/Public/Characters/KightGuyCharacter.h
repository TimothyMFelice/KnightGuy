// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Weapons/KnightGuyWeapon.h"
#include "KightGuyCharacter.generated.h"

UCLASS()
class KNIGHTGUY_API AKightGuyCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

public:

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Weapon For The Character */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Weapon, meta = (AllowPrivateAccess = "true"))
		TSubclassOf<AKnightGuyWeapon> Weapon;

protected:

	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	/** Called for Attack input */
	void AttackPressed();

	/** Called for Attack input */
	void AttackReleased();


	/** Called for side to side input */
	void MoveRight(float Value);

public:
	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

private:

	/** Attack Animation Bool For The Character */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Weapon, meta = (AllowPrivateAccess = "true"))
		bool bDoAttack;

};
