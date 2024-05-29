// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPGameModeBase.h"
#include"EngineUtils.h"
#include"GameCube.h"

void ACPPGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FVector Location;
	//����world�е�Actor
	for (FActorIterator It(GetWorld()); It; ++It) {
		//�ж�ÿ��Actor��tag��ǩ���Ƿ�������Ҫ���õ����ĵ�λ�õ��Ǹ����Ǿͻ�ȡλ�ã�����λ�û������
		if ((*It)->ActorHasTag(TEXT("StartLocation")))
		{
			//�õ�λ��
			Location = (*It)->GetActorLocation();
			//��ʼ���ɱ��
			SpaenCubes(Location, DefaultDifficulty);
			break;
		}
	}
}

void ACPPGameModeBase::SpaenCubes(FVector Location, EGameDifficulty Difficulty)
{
	//�����к���
	int RowNumber = 0, ColumnNumber = 0, ColorNumber = 0;

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

	checkf(RowNumber * ColumnNumber % 2 == 0, TEXT("The final number of cubes should be even!"));

	TArray<AGameCube*> GameCubes;

	//��
	for (size_t Row = 0; Row < RowNumber; Row++)
	{
		//��
		for (size_t Column = 0; Column < ColumnNumber; Column++)
		{
			//���ÿһ�����ӵ�λ��
			auto SpawnLocation = Location + FVector::LeftVector * SpawnSpace * ColumnNumber * 0.5f +
				FVector::UpVector * SpawnSpace * 0.5f + FVector::RightVector * SpawnSpace * 0.5f +
				Row * FVector::UpVector * SpawnSpace + Column * FVector::RightVector * SpawnSpace;
			//����λ�����ɺ���,���ŵ�������
			GameCubes.Add(GetWorld()->SpawnActor<AGameCube>(GameCubeClass, SpawnLocation, FRotator::ZeroRotator));
		}
	}

	for (size_t i = 0; i < GameCubes.Num()/2; i++)
	{
		auto Rand = FMath::RandRange(i, GameCubes.Num() - 1);
		if (Rand != i) {
			auto Temp = GameCubes[i];
			GameCubes[i] = GameCubes[Rand];
			GameCubes[Rand] = Temp;
		}
	}

	for (size_t i = 0; i < GameCubes.Num()/2; i++)
	{
		int Index = i % ColorNumber;
		GameCubes[i * 2]->SetColor(CubeColors[Index],Index);
		GameCubes[i * 2 + 1]->SetColor(CubeColors[Index], Index);
	}
}
