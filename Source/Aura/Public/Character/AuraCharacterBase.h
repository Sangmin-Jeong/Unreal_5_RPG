// Copyright_Sangmin_Jeong

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual void BeginPlay() override;

	// TObjectPtr = To Use New Unreal Features [Access Tracking, Lazy Loading]
	// Access Tracking = Track How Often we access it
	// Lazy Loading = Asset is not loaded unless we don't need it
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

};
