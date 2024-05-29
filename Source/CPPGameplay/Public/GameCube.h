// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCube.generated.h"

/*
* ��ʶ��������
* ��ʶ���������Ǵ�����д�淶�зǳ���Ҫ��һ������
* ��ʶ�����������京�壬������� abc��xxx��acaic �����岻�����ı�ʶ����
* �﷨����
* c++�б�ʶ�������ԡ�_����$,Ӣ����ĸ��������ɣ��������ֲ��ܷ��ڿ�ͷ��
* ������ʽ��
* ������������ʽ�С��շ���������camel case��������˹����������Pascal Case��
* �շ������б�ʶ������ĸСд��������ĸ��д����˹�������������׵�������ĸ��д��
*
* ������һЩԼ���׳ɵ�������ʽ���������ȫ��Ϊ��д������֮���á�_�����ӣ�ĳЩ C++ ��ָ������֣��á�__����ͷ��
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
	/// ���÷�����ɫ
	/// </summary>
	/// <param name="NewChangeColor">������ɫ����</param>
	/// <param name="Index">�ڼ�����ɫ���±�</param>
	void SetColor(FLinearColor NewChangeColor,int Index);

private:
	//�����������ָ��
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* CubeMesh;
	//Ҫ�ı����ɫ�����䵽��ͼϸ������ϣ���̬���ġ�
	UPROPERTY(EditAnywhere)
		FLinearColor ChangedColor;
	//�ж��Ƿ�ı���ɫ������
	bool bBeenShot = false;
	//��̬����ʵ��ָ��
	UMaterialInstanceDynamic* CubeMatDynamic;
	//��ʼ��ɫ
	FLinearColor OriginColor;
	//��Ҫת������ɫ
	FLinearColor TargetColor;
	//��ǰ��ɫ
	FLinearColor CurrentColor;
	int ColorIndex;


	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
};
