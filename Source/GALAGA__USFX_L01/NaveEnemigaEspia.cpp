// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{

	static FVector PosicionActual = GetActorLocation();

	static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.Y + 200.0f;
	static float MovimientoY = 0.0f;

	//FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

	//FVector Desplazamiento = FVector(-100.0f * DeltaTime, MovimientoY * DeltaTime, 0.0f);

	/*FVector ReaparicionPosicion = GetActorLocation() + Desplazamiento;
	if (ReaparicionPosicion.X < TopeAbajo)
	{
		ReaparicionPosicion.X = Reaparicion;
	}
	SetActorLocation(ReaparicionPosicion);*/
}

void ANaveEnemigaEspia::Disparar()
{

}

void ANaveEnemigaEspia::Destruirse()
{

}

void ANaveEnemigaEspia::Escapar()
{

}

void ANaveEnemigaEspia::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Mover(DeltaTime);
}

