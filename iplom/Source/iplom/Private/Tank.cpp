// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"

// Sets default values
ATank::ATank()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATank::Move()
{
	const FVector StartPosition = this->GetActorLocation();
	const FVector EndPosition = StartPosition + FVector(0.0f, 0.0f, 400.0f);
	const auto Position = FMath::VInterpConstantTo(StartPosition, EndPosition, GetWorld()->GetDeltaSeconds(), 100.0f);

	this->SetActorLocation(Position);
}

