// Copyright (C) 2025 Uriel Ballinas, VOIDWARE Prohibited. All rights reserved.
// This software is licensed under the MIT License (LICENSE.md).

#include "Actors/ClimaMicroclimateActor.h"
#include "Data/ClimaMicroClimateStructs.h"

AClimaMicroClimateActor::AClimaMicroClimateActor()
{
	
}

void inline AClimaMicroClimateActor::UpdateMeshFromData(const FCompressedMicroclimateData& Data)
{
	// 1. Decompress the vertex and index data
	// TArray<FVector> Vertices = DecompressData(Data.MicroclimateShapeData.CompressedVertexData);
	// TArray<int32> Indices = DecompressData(Data.MicroclimateShapeData.CompressedIndexData);
    
	// 2. Generate the mesh section
	// MicroclimateMesh->CreateMeshSection_LinearColor(0, Vertices, Indices, TArray<FVector>(), TArray<FVector2D>(), TArray<FLinearColor>(), TArray<FProcMeshTangent>(), true);
}
