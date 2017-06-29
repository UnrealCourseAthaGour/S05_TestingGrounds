// Fill out your copyright notice in the Description page of Project Settings.

#include "S05_TestingGrounds.h"
#include "Actorpool.h"


// Sets default values for this component's properties
UActorpool::UActorpool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

AActor * UActorpool::Checkout()
{
	if (Pool.Num() == 0)
	{
		return nullptr;
	}
	return Pool.Pop();
}

void UActorpool::Return(AActor * ActorToReturn)
{
	Add(ActorToReturn);
}

void UActorpool::Add(AActor * ActorToAdd)
{
	Pool.Push(ActorToAdd);
}
