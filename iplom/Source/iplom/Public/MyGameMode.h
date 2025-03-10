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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Timer")
		FTimerHandle Timer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tank")
		TArray<ATank*> TankArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fluid")
		TArray<AFluid*> FluidArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Roof")
		TArray<ARooftop*> RoofArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Fountain")
		TArray<AFountain*> FountainArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Position")
		TArray<FVector> PositionArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scale")
		TArray<FVector> ScaleTankArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scale")
		TArray<FVector> ScaleFluidArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Size")
		TArray<FVector> FluidSizeArray;

	// Easy to access property in Editor to select how many tanks to spawn
	// Select a number less than 5 if your PC doesn't handle fluently the complete facility
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank")
		int32 NumberOfTanks;


	AMyGameMode();
	~AMyGameMode();

	virtual void BeginPlay() override;

	bool bFountainSpawned;
	float speed;

	void MoveFluid();
	void UpdateFountainVisibility(AFluid* Fluid);

};
