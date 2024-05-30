// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCube.generated.h"

/*
* 标识命名符：
* 标识符的命名是代码书写规范中非常重要的一个环节
* 标识符必须提现其含义，避免出现 abc，xxx，acaic 等意义不不明的标识符。
* 语法规则：
* c++中标识符可以以“_”，$,英文字母和数字组成，其中数字不能放在开头。
* 命名格式：
* 常见的命名格式有“驼峰命名”（camel case），“帕斯卡命名”（Pascal Case）
* 驼峰命名中标识符首字母小写，其余字母大写，帕斯卡命名中所有首单词首字母大写。
*
* 另外有一些约定俗成的命名方式：宏的命名全部为大写，单词之间用“_”链接，某些 C++ 的指令或保留字，用“__”开头。
*/

//声明事件派发器的签名
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAubeBeenHitSignature, AGameCube*, HitCube);


UCLASS()
class CPPGAMEPLAY_API AGameCube : public AActor
{

	GENERATED_BODY()
		/// <summary>
		/// 友元，使ACPPGameModeBase可以访问AGameCube中的所有成员（包括私有成员）
		/// </summary>
		friend class ACPPGameModeBase;

public:
	// Sets default values for this actor's properties
	AGameCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
		/// <summary>
		/// 消除盒子时播放的粒子特效
		/// </summary>
		void DisplayEliminateFX();

	//反射标记，使函数可以在蓝图中调用，且为纯函数。
	UFUNCTION(BlueprintPure)
		/// <summary>
		/// 在蓝图中可以调用的函数，可以得到得到方块的颜色
		/// </summary>
		/// <returns>方块颜色</returns>
		FORCEINLINE FLinearColor GetChangedColor() { return this->ChangedColor; }

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/// <summary>
	/// 设置方块颜色
	/// </summary>
	/// <param name="NewChangeColor">线性颜色变量</param>
	/// <param name="Index">第几个颜色的下标</param>
	void SetColor(FLinearColor NewChangeColor, int Index);

	UPROPERTY(BlueprintAssignable)
		//定义一个委托类型的字段，这样才能通过实例调用
		FAubeBeenHitSignature OnCubeBeenHit;

private:

	UPROPERTY(VisibleAnywhere)
		/// <summary>
		/// 盒子组件对象指针
		/// </summary>
		UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// 要改变的颜色，反射到蓝图细节面板上，动态更改。
		/// </summary>
		FLinearColor ChangedColor;
	/// <summary>
	/// 判断是否要改变颜色的条件
	/// </summary>
	bool bBeenShot = false;
	/// <summary>
	/// 动态材质实例指针
	/// </summary>
	UMaterialInstanceDynamic* CubeMatDynamic;
	/// <summary>
	/// 初始颜色
	/// </summary>
	FLinearColor OriginColor;
	/// <summary>
	/// 将要转换的颜色
	/// </summary>
	FLinearColor TargetColor;
	/// <summary>
	/// 当前颜色
	/// </summary>
	FLinearColor CurrentColor;
	/// <summary>
	/// 颜色的下标
	/// </summary>
	int ColorIndex;
	/// <summary>
	/// 定时器句柄
	/// </summary>
	FTimerHandle DalayRecoverHandle;

	/// <summary>
	/// 消除方块
	/// </summary>
	void Eliminate();
	/// <summary>
	/// 颜色还原
	/// </summary>
	void Recover();
	UFUNCTION()
	void DelayRecover();

	/// <summary>
	/// 重写的父类的造成伤害函数
	/// </summary>
	/// <returns></returns>
	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
};
