// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorApariencia.h"

// Sets default values
AMyActorApariencia::AMyActorApariencia()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//malla para la nave
	mallaApariencia = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMeh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Nodriza3.Nodriza3'"));
	mallaApariencia->SetStaticMesh(ShipMesh.Object);
	//mallaArmas->SetupAttachment(RootComponent);
	RootComponent = mallaApariencia;

}

// Called when the game starts or when spawned
void AMyActorApariencia::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorApariencia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

