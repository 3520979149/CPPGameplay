// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPPGameModeBase.generated.h"

UENUM(BlueprintType)
enum class EGameDifficulty : uint8
{
	Easy,Medium,Hard
};

/**
 *
 */
UCLASS()
class CPPGAMEPLAY_API ACPPGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:
	void BeginPlay() override;

	//生成盒子
	void SpaenCubes(FVector Location, EGameDifficulty Difficulty);

	UPROPERTY(EditAnywhere)
		EGameDifficulty DefaultDifficulty = EGameDifficulty::Easy;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AGameCube> GameCubeClass;
	
	//方块间的间隔
	UPROPERTY(EditAnywhere)
		float SpawnSpace = 104.f;

	UPROPERTY(EditAnywhere)
		TArray<FLinearColor> CubeColors;
};
