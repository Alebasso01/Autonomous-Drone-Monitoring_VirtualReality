// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fluid.h"
#include "Tank.h"
#include "Fountain.h"
#include "Rooftop.h"
#include "CesiumCameraManager.h"
#include "Camera/CameraComponent.h"
#include "Vehicles/Multirotor/FlyingPawn.h"
#include "HAL/PlatformProcess.h"
#include "GameFramework/Actor.h"
#include "OilRefinery.generated.h"

UCLASS()
class IPLOM_API AOilRefinery : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOilRefinery();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AFlyingPawn* Drone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	APIPCamera* DroneBottomCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UCameraComponent* DroneBottomCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ACesiumCameraManager* CesiumCameraManager;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FCesiumCamera CesiumCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 CameraID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool UpdateCamera;

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


	bool bFountainSpawned;
	float speed;

	void MoveFluid();
	void SpawnFountainForFluid(AFluid* Fluid);
	void CallPythonScript();
	void RunTerminalCommand(const FString& Command);
	int GetTankID(AFountain* Fountain);
	void SetDrone(APawn* DronePtr);
	void setCesiumCamera();
	void UpdateCesiumCamera();
	void LaunchDroneScript();
	bool RunPythonScript();
};
