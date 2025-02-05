// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneHUD.h"

FString UDroneHUD::GetInclination(int32 ID)
{
	return Inclination[ID];
}

FString UDroneHUD::GetStatus(int32 ID)
{
	return Status[ID];
}

void UDroneHUD::SetInclination(FString NewInclination, int32 ID)
{
	Inclination[ID] = NewInclination;
}

void UDroneHUD::SetStatus(FString NewStatus, int32 ID)
{
	Status[ID] = NewStatus;
}

void UDroneHUD::InitializeArrays()
{
	Inclination.Init("", 5);
	Status.Init("", 5);
}
