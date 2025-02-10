#include "DroneHUD.h"

FString UDroneHUD::GetInclination(int32 ID)
{
    return Inclination[ID];
}

FString UDroneHUD::GetStatus(int32 ID)
{
    return Status[ID];
}

FSlateColor UDroneHUD::GetColor(int32 ID)
{
    return Colors[ID];
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
    // Initialize arrays to hold 5 default values
    Inclination.Init("", 5);
    Status.Init("", 5);
    Colors.Init(FSlateColor(), 5);
}

void UDroneHUD::SetStatusColor(FVector RGB, float A, int32 ID)
{
    FLinearColor NewColor = FLinearColor(RGB.X, RGB.Y, RGB.Z, A);    
    Colors[ID] = ConvertLinearColorToSlateColor(NewColor);
}

void UDroneHUD::SetStatusColor(FVector RGB, int32 ID)
{
    SetStatusColor(RGB, 1.0f, ID);
}



