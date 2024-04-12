// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ExamenLABGameMode.generated.h"

class ANaveEnemiga; // declaramos la clase ANaveEnemiga
class ABomba; // declaramos la clase ABomba

UCLASS(MinimalAPI)
class AExamenLABGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<ANaveEnemiga* > TNavesEnemigas; // lista de naves enemigas

protected:
	void LanzarBombasAleatorias(); // función para lanzar bombas aleatorias

	FTimerHandle BombasAleatorias; // temporizador para lanzar bombas aleatorias

public:
	AExamenLABGameMode(); // constructor
};



