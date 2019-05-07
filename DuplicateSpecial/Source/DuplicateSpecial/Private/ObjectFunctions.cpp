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
static void ScaleRelative(AActor* InputActor, FVector ScaleAmount, FVector BaseScale)
{
	// When new BPs are spawned, scale defaults to it's BP, so when new objects are spawned they need to be based off the former object's scale
	InputActor->SetActorRelativeScale3D(BaseScale * ScaleAmount);
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

// Recursively checks for an attached parent actor, returns the highest level actor that is found
static AActor* GetHighestAttachedParent(AActor* InputActor)
{
	AActor* parentActor = InputActor->GetAttachParentActor();
	if (parentActor != nullptr)
	{
		parentActor = GetHighestAttachedParent(parentActor);
		return parentActor;
	}
	else {
		return InputActor;
	}
}

// Finds what number is at the end of the given actor's label, increments that number, that returns the incremented FString
static FString GetIncrementedNumberLabel(FString ActorLabel, int incrementBy) 
{
	int i = ActorLabel.Len();
	bool stillGettingNums = true;
	FString actorNum = "";
	TArray<TCHAR> numbers = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int incrementedNum = 1;

	while (i > 0 && stillGettingNums == true)
	{
		TCHAR temp = ActorLabel[i - 1];

		for (int j = 0; j < numbers.Num(); j++)
		{
			// If this character is equal to a number, insert it at the front of actorNum and remove it from the label string
			if (temp == numbers[j])
			{
				actorNum.InsertAt(0, temp);
				ActorLabel.RemoveAt(ActorLabel.Len() - 1, 1, true);
			}
			else {
				// If this character is not equal to a number, all digits at the end of the label have been found
				if (j == (numbers.Num() - 1))
				{
					stillGettingNums = false;
				}
			}

		}
	}

	// Leaves incrementedNum set to 1 if no numbers are found, else set incrementedNum to the found numbers as an integer
	if (actorNum.IsEmpty() != true)
	{
		incrementedNum = FCString::Atoi(*actorNum);
	}

	// Increment
	incrementedNum += incrementBy;

	// Append the incremented number back into the label
	ActorLabel.Append(FString::FromInt(incrementedNum));

	return ActorLabel;
}