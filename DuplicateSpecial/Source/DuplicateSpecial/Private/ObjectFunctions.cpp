// Copyright (c) 2019 Isaac Madsen (isaacmadsen.com).  Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt or copy at http://opensource.org/licenses/MIT)

#include "ObjectFunctions.h"
#include "Engine/World.h"

/*
Defines the function for duplicating an actor and all of the relative and world
transform functions for translation, rotation, and scale.
*/


// Spawns and returns a duplicate AActor* of the input AActor*
static AActor* CloneActor(AActor* InputActor)
{
	UWorld * World = InputActor->GetWorld();
	UE_LOG(LogTemp, Log, TEXT("Actor Duplication"));
	FActorSpawnParameters params;
	params.Template = InputActor;

	UClass * ItemClass = InputActor->GetClass();
	AActor* const SpawnedActor = World->SpawnActor<AActor>(ItemClass, params);
	return SpawnedActor;
}

// Adds the offsets to the actor's local location and rotation and multiplies its relative scale by ScaleAmount
static void TransformRelative(AActor* InputActor, FVector LocationOffset, FRotator RotationOffset, FVector ScaleAmount)
{
	InputActor->AddActorLocalOffset(LocationOffset);
	InputActor->AddActorLocalRotation(RotationOffset);
	InputActor->SetActorRelativeScale3D(InputActor->GetActorScale3D() * ScaleAmount);
}

// Adds the offset to the actor's local location
static void TranslateRelative(AActor* InputActor, FVector LocationOffset)
{
	InputActor->AddActorLocalOffset(LocationOffset);
}

// Adds the offset to the actor's local rotation
static void RotateRelative(AActor* InputActor, FRotator RotationOffset)
{
	InputActor->AddActorLocalRotation(RotationOffset);
}

// Multiplies actor's scale by ScaleAmount
static void ScaleRelative(AActor* InputActor, FVector ScaleAmount)
{
	InputActor->SetActorRelativeScale3D(InputActor->GetActorScale3D() * ScaleAmount);
}

// Adds the offset to the actor's world location
static void TranslateWorld(AActor* InputActor, FVector LocationOffset)
{
	InputActor->AddActorWorldOffset(LocationOffset);
}

// Adds the offset to the actor's world rotation
static void RotateWorld(AActor* InputActor, FRotator RotationOffset)
{
	InputActor->AddActorWorldRotation(RotationOffset);
}

// Sets the actor's scale to ScaleAmount
static void ScaleWorld(AActor* InputActor, FVector ScaleAmount)
{
	InputActor->SetActorScale3D(ScaleAmount);
}