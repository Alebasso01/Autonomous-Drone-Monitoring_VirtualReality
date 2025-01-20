// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fluid.h"
#include "Tank.h"
#include "Fountain.h"
#include "Rooftop.h"
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

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ATank> TankClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<AFountain> FountainClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ARooftop> RooftopClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fluid")
		AFluid* MyFluid;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank")
		ATank* MyTank;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fountain")
		AFountain* MyFountain;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Roof")
		ARooftop* MyRoof;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Timer")
		FTimerHandle Timer;


	AMyGameMode();

	~AMyGameMode();

	virtual void BeginPlay() override;

	bool bFountainSpawned;

	void MoveFluid();
	void UpdateFountainVisibility();

	



};
