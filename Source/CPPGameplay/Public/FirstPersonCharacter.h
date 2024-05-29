// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacter.generated.h"

class UNiagaraSystem;

UCLASS()
class CPPGAMEPLAY_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)//表示在蓝图中可以被实现
		/// <summary>
		/// 在蓝图中实现定义，射击播放montage和声音
		/// </summary>
		void PlayShootMontage();

	UFUNCTION(BlueprintImplementableEvent)//表示在蓝图中可以被实现
		/// <summary>
		/// 在蓝图中实现定义，得到武器骨骼枪口插槽的位置
		/// </summary>
		/// <returns>返回一个位置</returns>
		FVector GetMuzzleLocation();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input Character的输入组件（自动生成）
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

private:
	/// <summary>
	///角色射击的函数	
	/// </summary>
	void Shoot();
	/// <summary>
	/// Niagara资产指针
	/// </summary>
	UNiagaraSystem* ShootFX;
	/// <summary>
	/// 流操作指针
	/// </summary>
	struct FStreamableHandle* Handle;

	
	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 碰撞检测通道
		/// </summary>
		TEnumAsByte<ECollisionChannel> ShootTraceChannel;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 模板软对象引用
		/// </summary>
		TSoftObjectPtr<UNiagaraSystem> ShootFXSP;
};
