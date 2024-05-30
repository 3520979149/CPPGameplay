// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CPPGameModeBase.generated.h"

class AGameCube;

UENUM(BlueprintType)
/// <summary>
/// 难易程度枚举类型
/// </summary>
enum class EGameDifficulty : uint8
{
	/// <summary>
	/// 简单
	/// </summary>
	Easy,
	/// <summary>
	/// 中等
	/// </summary>
	Medium,
	/// <summary>
	/// 困难
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
	/// 处理被击中的方块是否是消除还是恢复原样
	/// </summary>
	/// <param name="HitCube">被击中的方块的指针</param>
	void HandleCubeBeenHit(AGameCube* HitCube);

	/// <summary>
	/// 生成盒子
	/// </summary>
	/// <param name="Location">矩阵盒子的位置</param>
	/// <param name="Difficulty">难度等级</param>
	void SpaenCubes(FVector Location, EGameDifficulty Difficulty);

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 难度等级对象
		/// </summary>
		EGameDifficulty DefaultDifficulty = EGameDifficulty::Easy;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 盒子的子对象
		/// </summary>
		TSubclassOf<AGameCube> GameCubeClass;


	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 盒子间的间隔
		/// </summary>
		float SpawnSpace = 104.f;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 矩阵，FLinearColor类型对象数组
		/// </summary>
		TArray<FLinearColor> CubeColors;
	/// <summary>
	/// 上一个被击中的盒子的指针
	/// </summary>
	AGameCube* LastHitCube = 0;
};
