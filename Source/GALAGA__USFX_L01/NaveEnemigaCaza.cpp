// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	////Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
	static FVector PosicionActual = GetActorLocation();

	static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.X + 200.0f;
	static float MovimientoY = 0.0f;

	//FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

	//FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime,0.0f);

	/*FVector ReaparicionPosicion = GetActorLocation() + Desplazamiento;
	if (ReaparicionPosicion.X < TopeAbajo)
	{
		ReaparicionPosicion.X = Reaparicion;
	}
	SetActorLocation(ReaparicionPosicion);*/
}



void ANaveEnemigaCaza::Disparar()
{

}

void ANaveEnemigaCaza::Destruirse()
{

}

void ANaveEnemigaCaza::Escapar()
{

}

void ANaveEnemigaCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}


