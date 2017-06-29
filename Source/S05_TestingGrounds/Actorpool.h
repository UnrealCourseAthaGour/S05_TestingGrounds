// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "Actorpool.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class S05_TESTINGGROUNDS_API UActorpool : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorpool();

	AActor* Checkout();
	void Return(AActor* ActorToReturn);
	void Add(AActor* ActorToAdd);

private:
	TArray<AActor*> Pool;
};
