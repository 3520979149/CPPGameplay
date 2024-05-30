// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPGameModeBase.h"
#include"EngineUtils.h"
#include"GameCube.h"

void ACPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FVector Location;
	//遍历world中的Actor
	for (FActorIterator It(GetWorld()); It; ++It) {
		//判断每个Actor的tag标签，是否是我们要设置的中心点位置的那个，是就获取位置，根据位置画出表格
		if ((*It)->ActorHasTag(TEXT("StartLocation")))
		{
			//得到位置
			Location = (*It)->GetActorLocation();
			//开始生成表格
			SpaenCubes(Location, DefaultDifficulty);
			break;
		}
	}
}


//注：数组中保存的是盒子的地址，打乱数组没有改变地址位置等信息，对打乱的数组进行有序颜色设置，达到随机颜色的效果
void ACPPGameModeBase::SpaenCubes(FVector Location, EGameDifficulty Difficulty)
{
	//矩阵表格的列
	int RowNumber = 0;
	//矩阵表格的行
	int	ColumnNumber = 0;
	//盒子颜色的种类数量
	int ColorNumber = 0;

	//暴露到蓝图中的字段，根据switch选择难度等级，设置盒子相应的数量和颜色
	switch (Difficulty)
	{
	case EGameDifficulty::Easy:
		ColumnNumber = 8;
		RowNumber = 8;
		ColorNumber = 4;
		break;
	case EGameDifficulty::Medium:
		ColumnNumber = 16;
		RowNumber = 8;
		ColorNumber = 6;
		break;
	case EGameDifficulty::Hard:
		ColumnNumber = 24;
		RowNumber = 16;
		ColorNumber = 12;
		break;
	default:
		ColumnNumber = 8;
		RowNumber = 8;
		break;
	}
	//断言：第一个参数为false，则终止程序并爆出错误信息
	checkf(RowNumber * ColumnNumber % 2 == 0, TEXT("The final number of cubes should be even!"));

	//AGameCube类型指针数组，保存了矩阵中每个盒子的指针
	TArray<AGameCube*> GameCubes;

	//行
	for (size_t Row = 0; Row < RowNumber; Row++)
	{
		//列
		for (size_t Column = 0; Column < ColumnNumber; Column++)
		{
			//算出每一个盒子的位置
			auto SpawnLocation = Location + FVector::LeftVector * SpawnSpace * ColumnNumber * 0.5f +
				FVector::UpVector * SpawnSpace * 0.5f + FVector::RightVector * SpawnSpace * 0.5f +
				Row * FVector::UpVector * SpawnSpace + Column * FVector::RightVector * SpawnSpace;
			//根据位置生成盒子,并放到数组中
			auto NewCube = GetWorld()->SpawnActor<AGameCube>(GameCubeClass, SpawnLocation, FRotator::ZeroRotator);
			GameCubes.Add(NewCube);
			//方块被击中派发过来的的事件
			NewCube->OnCubeBeenHit.AddDynamic(this,&ACPPGameModeBase::HandleCubeBeenHit);

		}
	}

	for (size_t i = 0; i < GameCubes.Num() / 2; i++)
	{
		//随机数 当前数组元素到最后一个元素中间的随机数
		auto Rand = FMath::RandRange(i, GameCubes.Num() - 1);
		//随机到不是当前元素时进行交换
		if (Rand != i) {
			auto Temp = GameCubes[i];
			GameCubes[i] = GameCubes[Rand];
			GameCubes[Rand] = Temp;
		}
	}
	//设置盒子的颜色，每两个盒子颜色相同
	for (size_t i = 0; i < GameCubes.Num() / 2; i++)
	{
		int Index = i % ColorNumber;
		GameCubes[i * 2]->SetColor(CubeColors[Index], Index);
		GameCubes[i * 2 + 1]->SetColor(CubeColors[Index], Index);
	}
}

void ACPPGameModeBase::HandleCubeBeenHit(AGameCube* HitCube)
{
	if (IsValid(LastHitCube))//上一个被击中的方块是否有效（存在，也就是是否不是第一次点击方块）
	{
		if (HitCube->ColorIndex == LastHitCube->ColorIndex) //判断颜色下标是否相等，相等即为颜色相同，可以消除
		{
			//消除方块
			HitCube->Eliminate();
			LastHitCube->Eliminate();
		}
		else
		{
			//恢复默认颜色
			HitCube->Recover();
			LastHitCube->Recover();
		}
		//不相等就把上一个置空，就可以继续进行下一次的颜色比较
		LastHitCube = 0;
	}
	else
	{
		//上一个无效就把当前的给覆盖上去变成上一个，然后就可以和下一个进行比较
		LastHitCube = HitCube;
	}
}