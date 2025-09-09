// Copyright (C) 2025 Uriel Ballinas, VOIDWARE Prohibited. All rights reserved.
// This software is licensed under the MIT License (LICENSE.md).

#pragma once

#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ClimaMicroClimateActor.generated.h"

struct FCompressedMicroclimateData;

UCLASS()
class AClimaMicroClimateActor : public AActor
{
	GENERATED_BODY()

public:
	AClimaMicroClimateActor();

	UPROPERTY(VisibleAnywhere)
	UProceduralMeshComponent* MicroclimateMesh = nullptr;

	// Called by the GameState's OnRep function
	void UpdateMeshFromData(const FCompressedMicroclimateData& Data);
};


