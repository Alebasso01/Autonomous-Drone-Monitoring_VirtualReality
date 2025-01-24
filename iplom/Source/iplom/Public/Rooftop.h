// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fluid.h"
#include "Rooftop.generated.h"

UCLASS()
class IPLOM_API ARooftop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARooftop();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Rooftop Movement")
	float MaxRotation;

	UPROPERTY(EditAnywhere, Category = "Rooftop Movement")
	float OriginalRotation;

	UPROPERTY(EditAnywhere, Category = "Rooftop Movement")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, Category = "Rooftop Movement")
	float MovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Rooftop Movement")
	AFluid* FluidReference;


	UPROPERTY(EditAnywhere, Category = "Rooftop Movement")
	float ScaleRoof;

	FVector OriginPosition;

	void MoveAndRotate(bool bFluidMovingUp);
	void SetScaleRoof(float scale);
	void SetMovementSpeed(float speed);

};

