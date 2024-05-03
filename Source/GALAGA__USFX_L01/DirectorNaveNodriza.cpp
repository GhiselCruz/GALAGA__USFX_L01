// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNaveNodriza.h"
#include "InterfaceBuilderNodriza.h"
#include "NodrizaActorBuilder.h"

// Sets default values
ADirectorNaveNodriza::ADirectorNaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADirectorNaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


ANodrizaActorBuilder* ADirectorNaveNodriza::SetNodrizaActorBuilder(IInterfaceBuilderNodriza* builder)
{
	if (builder)
	{
		builder->builArmamento();
		builder->builProteccion();
		builder->builApariencia();
		builder->builMovimiento();


		return builder->GetNodrizaActorBuilder();
	}

	return nullptr;
}

