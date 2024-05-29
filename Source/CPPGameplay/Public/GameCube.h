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

UCLASS()
class CPPGAMEPLAY_API AGameCube : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGameCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/// <summary>
	/// 设置方块颜色
	/// </summary>
	/// <param name="NewChangeColor">线性颜色变量</param>
	/// <param name="Index">第几个颜色的下标</param>
	void SetColor(FLinearColor NewChangeColor,int Index);

private:
	//盒子组件对象指针
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CubeMesh;
	//要改变的颜色，反射到蓝图细节面板上，动态更改。
	UPROPERTY(EditAnywhere)
		FLinearColor ChangedColor;
	//判断是否改变颜色的条件
	bool bBeenShot = false;
	//动态材质实例指针
	UMaterialInstanceDynamic* CubeMatDynamic;
	//初始颜色
	FLinearColor OriginColor;
	//将要转换的颜色
	FLinearColor TargetColor;
	//当前颜色
	FLinearColor CurrentColor;
	int ColorIndex;


	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
};
