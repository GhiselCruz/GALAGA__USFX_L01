// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaEspia.h"

ANaveEnemigaEspia::ANaveEnemigaEspia()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'Shapes_WideCapsule.Shape_WideCapsule'"));

	mallaNaveEnemiga->SetStaticMesh(ShipMesh.Object);

}

void ANaveEnemigaEspia::Mover(float DeltaTime)
{
	/*FVector PosicionActual = GetActorLocation();
	
	float NuevaX = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaY = FMath::RandRange(-1000.0f, 1000.0f) * (DeltaTime / 1000.0f);
	float NuevaZ = FMath::RandRange(-1000.0f, 1000.0f) * DeltaTime;

	FVector NuevaPosicion = FVector(PosicionActual.X + NuevaX, PosicionActual.Y + NuevaY, PosicionActual.Z + NuevaZ);

	SetActorLocation(NuevaPosicion);*/
	static FVector PosicionActual = GetActorLocation();

	static float TopeAbajo = PosicionActual.X - 1300.0f;
	static float Reaparicion = PosicionActual.Y + 200.0f;
	static float MovimientoY = 0.0f;


	FVector Desplazamiento = FVector(-75.0f * DeltaTime, MovimientoY * DeltaTime, FMath::RandRange(-500.0f, 500.0f) * DeltaTime);

	FVector ReaparicionPosicion = GetActorLocation() + Desplazamiento;
	if (ReaparicionPosicion.X < TopeAbajo)
	{
		ReaparicionPosicion.X = Reaparicion;
	}
	SetActorLocation(ReaparicionPosicion);
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
