// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fluid.h"
#include "Tank.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class IPLOM_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()


	public:
	// TSubclassOf is a template class that provides UClass type safety.
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AFluid> FluidClass;

	// TSubclassOf is a template class that provides UClass type safety.
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ATank> TankClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fluid")
		AFluid* MyFluid;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fluid")
		ATank* MyTank;

	AMyGameMode();

	~AMyGameMode();

	virtual void BeginPlay() override;
};
