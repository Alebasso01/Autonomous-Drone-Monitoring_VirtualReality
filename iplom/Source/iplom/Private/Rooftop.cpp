// Fill out your copyright notice in the Description page of Project Settings.


#include "Rooftop.h"

// Sets default values
ARooftop::ARooftop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARooftop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARooftop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

