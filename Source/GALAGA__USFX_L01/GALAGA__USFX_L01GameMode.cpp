// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA__USFX_L01GameMode.h"
#include "GALAGA__USFX_L01Pawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaCazaG1.h"
#include "NaveEnemigaCazaG2.h"
#include "NaveEnemigaEspia.h"
#include "NaveEnemigaEspiaG1.h"
#include "NaveEnemigaEspiaG2.h"
#include "NaveEnemigaNodriza.h"
#include "NaveEnemigaNodrizaG1.h"
#include "NaveEnemigaNodrizaG2.h" 
#include "NaveEnemigaReabastecimiento.h"
#include "NaveEnemigaReabastecimientoG1.h"
#include "NaveEnemigaReabastecimientoG2.h"
#include "NaveEnemigaTransporte.h"
#include "NaveEnemigaTransporteG1.h"
#include "NaveEnemigaTransporteG2.h"


AGALAGA__USFX_L01GameMode::AGALAGA__USFX_L01GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = AGALAGA__USFX_L01Pawn::StaticClass();

	//NaveEnemiga01 = nullptr;
}

void AGALAGA__USFX_L01GameMode::BeginPlay()
{
	Super::BeginPlay();
	//set the game satate to playing
	FVector ubicaccionInicioNavesEnemigasCaza = FVector(-500.0f, 500.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(-500.0f, 500.0f, 200.0f);
	FVector ubicacionInicioNavesEnemigasTransporte = FVector(1000.0f, 500.0f, 200.0f);
	
	/*FVector ubicacionNave01 = FVector(0.0f, 1000.0f, 200.0f);
	FVector ubicacionNave02 = FVector(0.0f, 700.0f, 200.0f);
	FVector ubicacionNave03 = FVector(0.0f, 400.0f, 200.0f);
	FVector ubicacionNave04 = FVector(0.0f, 100.0f, 200.0f);
	FVector ubicacionNave05 = FVector(0.0f, -200.0f, 200.0f);
	FVector ubicacionNave06 = FVector(-250.0f, 700.0f, 200.05f);
	FVector ubicacionNave07 = FVector(-500.0f, 700.0f, 200.0f);
	FVector ubicacionNave08 = FVector(-250.0f, 1000.0f, 200.05f);
	FVector ubicacionNave09 = FVector(-500.0f, 1000.0f, 200.0f);
	FVector ubicacionNave10 = FVector(-250.0f, 400.0f, 200.05f);
	FVector ubicacionNave11 = FVector(-500.0f, 400.0f, 200.0f);
	FVector ubicacionNave12 = FVector(-250.0f, 100.0f, 200.05f);
	FVector ubicacionNave13 = FVector(-500.0f, 100.0f, 200.0f);
	FVector ubicacionNave14 = FVector(-250.0f, -200.0f, 200.05f);
	FVector ubicacionNave15 = FVector(-500.0f, -200.0f, 200.0f);*/

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();

	if (World != nullptr)
	{
		TArray<TSubclassOf<ANaveEnemiga>> claseNave = { ANaveEnemigaCazaG1::StaticClass(), ANaveEnemigaCazaG2::StaticClass(), ANaveEnemigaEspiaG1::StaticClass(), ANaveEnemigaEspiaG2::StaticClass(),
		ANaveEnemigaNodrizaG1::StaticClass(), ANaveEnemigaNodrizaG2::StaticClass(), ANaveEnemigaReabastecimientoG1::StaticClass(), ANaveEnemigaReabastecimientoG2::StaticClass(),
		ANaveEnemigaTransporteG1::StaticClass(), ANaveEnemigaTransporteG2::StaticClass() };

		FVector InicialSpawnLocation = FVector(100.f, -500.f, 200.f);

		for (int i = 0; i < 30; i++)
		{
			TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocation + FVector(0.f, i * 80.f, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);

			if (NuevaNaveSpawn)
			{

			}

			/*FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasCaza.X, ubicacionInicioNavesEnemigasCaza.Y + i * 300, ubicacionInicioNavesEnemigasCaza.Z);
			ANAveEnemigaCaza* NaveEnemigaCazaTemporal = World->SpawnActor<ANaveEnemigaCaza>(PosicionNaveActual, rotacionNave);
			TANavesEnemigas.Push(NaveEnemigaCazaTemporal);*/

			//FVector PosicionNaveTransActual = FVector(ubicacionInicioNavesEnemigasTransporte.X, ubicacionInicioNavesEnemigasTransporte.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
			//ANAveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
			//TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}

		/*float nuevaPosicion.X = ubicacionInicioNavesEnemigasTransporte.X - 300.0f;
		
		for (int j = 0; j < 4, j++)
		{
		  FVector PosicionNaveActual = FVector(ubicacionInicioNavesEnemigasTransporte.X, ubicacionInicioNavesEnemigasTransporte.Y + i * 300, ubicacionInicioNavesEnemigasTransporte.Z);
	      ANAveEnemigaTransporte* NaveEnemigaTransporteTemporal = World->SpawnActor<ANaveEnemigaTransporte>(PosicionNaveActual, rotacionNave);
		  TANavesEnemigas.Push(NaveEnemigaTransporteTemporal);
		}*/

		//spawn the proyectile
		/*NaveEnemigaTransporte01 = World->SpawnActor<ANaveEnemigaTransporte>(ubicacionNave01, rotacionNave);
		NaveEnemigaCaza01 = World->SpawnActor<ANaveEnemigaCaza>(ubicacionNave02, rotacionNave);
		NaveEnemigaEspia01 = World->SpawnActor<ANaveEnemigaEspia>(ubicacionNave03, rotacionNave);
		NaveEnemigaNodriza01 = World->SpawnActor<ANaveEnemigaNodriza>(ubicacionNave04, rotacionNave);
		NaveEnemigaReabastecimiento01 = World->SpawnActor<ANaveEnemigaReabastecimiento>(ubicacionNave05, rotacionNave);
		NaveEnemigaCazaG101 = World->SpawnActor<ANaveEnemigaCazaG1>(ubicacionNave06, rotacionNave);
		NaveEnemigacazaG201 = World->SpawnActor<ANaveEnemigaCazaG2>(ubicacionNave07, rotacionNave);
		NaveEnemigaTransporteG101 = World->SpawnActor<ANaveEnemigaTransporteG1>(ubicacionNave08, rotacionNave);
		NaveEnemigaTransporteG201 = World->SpawnActor<ANaveEnemigaTransporteG2>(ubicacionNave09, rotacionNave);
		NaveEnemigaEspiaG101 = World->SpawnActor<ANaveEnemigaEspiaG1>(ubicacionNave10, rotacionNave);
		NaveEnemigaEspiaG201 = World->SpawnActor<ANaveEnemigaEspiaG2>(ubicacionNave11, rotacionNave);
		NaveEnemigaNodrizaG101 = World->SpawnActor<ANaveEnemigaNodrizaG1>(ubicacionNave12, rotacionNave);
		NaveEnemigaNodrizaG201 = World->SpawnActor<ANaveEnemigaNodrizaG2>(ubicacionNave13, rotacionnave);
		NaveEnemigaReabastecimientoG101 = World->SpawnActor<ANaveEnemigaReabastecimientoG1>(ubicacionNave14, rotacionNave);
		NaveEnemigaReabastecimientoG201 = World->SpawnActor<ANaveEnemigaReabastecimientoG2>(ubicacionNave15, ubicacionNave);*/
	}

	/*NaveEnemigaCaza01->SetPosicion(FVector(-500.0f, 500.0f, 200.0f));
	NaveEnemigaTransporte01->SetPosicion(FVector(500.0f, 500.0f, 200.0f));
	NaveEnemigaEspia01->SetPosicion(FVector(0.0f, 500.0f, 200.0f));
	NaveEnemigaNodriza01->SetPosicion(FVector(1000.0f, 0.0f, 130.0f));
	NaveEnemigaReabastecimiento01->SetPosicion(FVector(3000.0f, 100.0f, 500.0f));
	NaveEnemigaCazaG101->SetPosicion(FVector(200.0f, 0.0f, 200.0f));
	NaveEnemigaCazaG201->SetPosicion(FVector(600.0f, 250.0f, 200.0f));
	NaveEnemigaTransporteG101->SetPosicion(FVector(200.0f, 0.0f, 200.0f));
	NaveEnemigaTransporteG201->SetPosicion(FVector(600.0f, 250.0f, 200.0f));
	NaveEnemigaEspiaG101->SetPosicion(Fvector(200.0f, 0.0f, 200.0f));
	NaveEnemigaEspiaG201->SetPosicion(FVector(600.0f, 250.0f, 200.0f));
	NaveEnemigaNodrizaG101->SetPosicion(FVector(200.0f, 0.0f, 200.0f));
	NaveEnemigaNodrizaG201->SetPosicion(FVector(600.0f, 250.0f, 200.0f));
	NaveEnemigaReabastecimientoG101->SetPosicion(FVector(200.0f, 0.0f, 200.0f));
	NaveEnemigaReabastecimientoG201->SetPosicion(FVector(600.0f, 250.0f, 200.0f));*/

	TMapPowerUp.Add(3000, "escudo");
	TMapPowerUp.Add(200, "doble tiro");
	TMapPowerUp.Add(1000, "vida extra");
	TMapPowerUp.Add(1500, "invulnerable");
	TMapPowerUp.Add(500, "velocidad");

	PowerUpStatusMap.Add(3000, false);
	PowerUpStatusMap.Add(200, false);
	PowerUpStatusMap.Add(1000, false);
	PowerUpStatusMap.Add(1500, false);
	PowerUpStatusMap.Add(500, false);
	score = 0;
}

void AGALAGA__USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido++;
	if (TiempoTranscurrido >= 100)
	{
		int numeroEnemigo = FMath::RandRange(0, 9);
		if (GEngine)
		{

		}
		score = score + 50;
		TiempoTranscurrido = 0;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("score: %d"), score));
	}
	for (const auto& par : TMapPowerUp)
	{
		int scoreMap = par.Key;
		FString PowerUp = par.Value;
		if (scoreMap == score)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("PowerUp:: %s"), *PowerUp));
		}
		for (auto& par2 :PowerUpStatusMap)
		{
			int PowerUpScore = par2.Key;
			bool& bPowerUpStatus = par2.Value;

			if (score >= PowerUpScore && !bPowerUpStatus)
			{
				bPowerUpStatus = true;
				FString StatusMessage = FString::Printf(TEXT("PowerUp with score %d is now active: %s"), PowerUpScore, bPowerUpStatus ? TEXT("True") : TEXT("False"));
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, StatusMessage);
			}
		}
	}
}

