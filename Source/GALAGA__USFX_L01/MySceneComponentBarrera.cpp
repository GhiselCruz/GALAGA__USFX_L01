// Fill out your copyright notice in the Description page of Project Settings.


#include "MySceneComponentBarrera.h"

// Sets default values for this component's properties
UMySceneComponentBarrera::UMySceneComponentBarrera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

}

void UMySceneComponentBarrera::CrearBarrera()
{
	UWorld* TheWorld = GetWorld();
	if (TheWorld != nullptr)
	{
		FTransform ComponentTransform(this->GetComponentTransform());
		TheWorld->SpawnActor(BarreraToSpawn, &ComponentTransform);
	}
}


// Called when the game starts
void UMySceneComponentBarrera::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMySceneComponentBarrera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

