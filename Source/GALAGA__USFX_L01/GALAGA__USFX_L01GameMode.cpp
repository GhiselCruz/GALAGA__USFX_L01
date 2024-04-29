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

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	int a = 100;  //posicion en x
	int b = -100;   //posicion en y
	int c = 0;  //contador

	if (World != nullptr)
	{
		TArray<TSubclassOf<ANaveEnemiga>> claseNave = { ANaveEnemigaCazaG1::StaticClass(), ANaveEnemigaEspiaG1::StaticClass(),
		ANaveEnemigaNodrizaG1::StaticClass(),ANaveEnemigaReabastecimientoG1::StaticClass(), ANaveEnemigaTransporteG1::StaticClass() };

		FVector InicialSpawnLocation = FVector(100.f, -500.f, 100.0f);

		for (int i = 0; i < 15; i++)
		{
			TSubclassOf<ANaveEnemiga> ClaseRandom = claseNave[FMath::RandRange(0, claseNave.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocation + FVector(a, b, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveEnemiga* NuevaNaveSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom, SpawnLocation, SpawnRotation);
			b = b + 200;
			c = c + 1;
			if (c==5)
			{
				a = a + 200;
				b = -100;
				c = 0;
			}
		}

		/*int d = 100;  //posicion en x
		int e = -100;   //posicion en y
		int f = 0;  //contador
		TArray<TSubclassOf<ANaveEnemiga>> claseNaves = { ANaveEnemigaCazaG2::StaticClass(), ANaveEnemigaEspiaG2::StaticClass(),
		ANaveEnemigaNodrizaG2::StaticClass(),ANaveEnemigaReabastecimientoG2::StaticClass(), ANaveEnemigaTransporteG2::StaticClass() };

		FVector InicialSpawnLocation2 = FVector(100.f, -500.f, 100.0f);

		for (int j = 0; j < 15; j++)
		{
			TSubclassOf<ANaveEnemiga> ClaseRandom1 = claseNaves[FMath::RandRange(0, claseNaves.Num() - 1)];

			FVector SpawnLocation = InicialSpawnLocation + FVector(d, -e, 0.f);

			FRotator SpawnRotation = FRotator::ZeroRotator;
			ANaveEnemiga* NuevasNavesSpawn = GetWorld()->SpawnActor<ANaveEnemiga>(ClaseRandom1, SpawnLocation, SpawnRotation);
			e = e + 200;
			f = f + 1;
			if (f == 5)
			{
				d = d + 200;
				e = -100;
				f = 0;
			}
		}*/
	}
}


void AGALAGA__USFX_L01GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

