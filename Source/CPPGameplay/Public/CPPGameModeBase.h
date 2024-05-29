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

	//���ɺ���
	void SpaenCubes(FVector Location, EGameDifficulty Difficulty);

	UPROPERTY(EditAnywhere)
		EGameDifficulty DefaultDifficulty = EGameDifficulty::Easy;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AGameCube> GameCubeClass;
	
	//�����ļ��
	UPROPERTY(EditAnywhere)
		float SpawnSpace = 104.f;

	UPROPERTY(EditAnywhere)
		TArray<FLinearColor> CubeColors;
};
