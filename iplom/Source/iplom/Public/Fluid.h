// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fluid.generated.h"

class AOilRefinery;

UCLASS()
class IPLOM_API AFluid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFluid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    AOilRefinery* OilRefinery;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    bool bMovingUp;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    bool bStopMoving;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    FVector OriginPosition;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    FVector EndPositionUp;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    FVector EndPositionDown;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    bool bLeacking;

    UPROPERTY(EditAnywhere, Category = "Fluid")
    int32 RandomID;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Timer")
    FTimerHandle LeakageTimer;

    float MovementSpeed;

    void SetStopMoving(bool NewMovingState);
    void CheckForFountainSpawn();
    void SetOilRefinery(AOilRefinery* InputOilRefinery);
    void MoveUp(float DeltaTime);
    void MoveDown(float DeltaTime);
    void SetMovementSpeed(float speed);
    void SpawnFountainSelf();
    

};
