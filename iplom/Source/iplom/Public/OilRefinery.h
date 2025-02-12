// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fluid.h"
#include "Tank.h"
#include "Fountain.h"
#include "Rooftop.h"
#include "DroneHUD.h"
#include "CesiumCameraManager.h"
#include "Camera/CameraComponent.h"
#include "Vehicles/Multirotor/FlyingPawn.h"
#include "HAL/PlatformProcess.h"
#include "Misc/Paths.h"
#include "Sound/SoundCue.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
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

	// Called when the game ends or when removed
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

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

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDroneHUD> DroneHUDClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AFlyingPawn* Drone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	APIPCamera* DroneBottomCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UDroneHUD* DroneHUD;

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
	FTimerHandle CesiumCameraTimer;

	FProcHandle PowerShellProcessHandle;

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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Position")
	TArray<FVector> PositionArrayFluid;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Position")
	TArray<FVector> PositionArrayRoof;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Position")
	TArray<FVector> PositionArrayFountain;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Position")
	TArray<FRotator> RotationArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scale")
	TArray<FVector> ScaleTankArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scale")
	TArray<FVector> ScaleFluidArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Size")
	TArray<FVector> FluidSizeArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USoundCue* AlarmSound;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FTimerHandle AlarmTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float AlarmDuration;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UAudioComponent* CurrentSound;

	// Easy to access property in Editor to select how many tanks to spawn
	// Select a number less than 5 if your PC doesn't handle fluently the complete facility
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Tank")
	int32 NumberOfTanks;


	bool bFountainSpawned;
	float speed;

	void MoveFluid();
	void SpawnFountainForFluid(AFluid* Fluid);
	//void CallPythonScript();
	//void RunTerminalCommand(const FString& Command);
	int32 GetTankID(AFountain* Fountain);
	void SetDrone(APawn* DronePtr);
	void setCesiumCamera();
	void UpdateCesiumCamera();
	void LaunchPythonDroneScript();
	void StopPythonDroneScript();
	//bool RunPythonScript();
	void CreateDroneHUD();
	void UpdateDroneHUD();
	void PlayAlarmSound();
	void StopAlarmSound();
};
