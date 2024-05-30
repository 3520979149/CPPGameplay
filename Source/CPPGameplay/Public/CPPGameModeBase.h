// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPPGameModeBase.generated.h"

class AGameCube;

UENUM(BlueprintType)
/// <summary>
/// ���׳̶�ö������
/// </summary>
enum class EGameDifficulty : uint8
{
	/// <summary>
	/// ��
	/// </summary>
	Easy,
	/// <summary>
	/// �е�
	/// </summary>
	Medium,
	/// <summary>
	/// ����
	/// </summary>
	Hard
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

	UFUNCTION()
	/// <summary>
	/// �������еķ����Ƿ����������ǻָ�ԭ��
	/// </summary>
	/// <param name="HitCube">�����еķ����ָ��</param>
	void HandleCubeBeenHit(AGameCube* HitCube);

	/// <summary>
	/// ���ɺ���
	/// </summary>
	/// <param name="Location">������ӵ�λ��</param>
	/// <param name="Difficulty">�Ѷȵȼ�</param>
	void SpaenCubes(FVector Location, EGameDifficulty Difficulty);

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// �Ѷȵȼ�����
		/// </summary>
		EGameDifficulty DefaultDifficulty = EGameDifficulty::Easy;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// ���ӵ��Ӷ���
		/// </summary>
		TSubclassOf<AGameCube> GameCubeClass;


	UPROPERTY(EditAnywhere)
		/// <summary>
		/// ���Ӽ�ļ��
		/// </summary>
		float SpawnSpace = 104.f;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// ����FLinearColor���Ͷ�������
		/// </summary>
		TArray<FLinearColor> CubeColors;
	/// <summary>
	/// ��һ�������еĺ��ӵ�ָ��
	/// </summary>
	AGameCube* LastHitCube = 0;
};
