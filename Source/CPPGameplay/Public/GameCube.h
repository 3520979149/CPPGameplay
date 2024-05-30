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

//�����¼��ɷ�����ǩ��
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAubeBeenHitSignature, AGameCube*, HitCube);


UCLASS()
class CPPGAMEPLAY_API AGameCube : public AActor
{

	GENERATED_BODY()
		/// <summary>
		/// ��Ԫ��ʹACPPGameModeBase���Է���AGameCube�е����г�Ա������˽�г�Ա��
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
		/// ��������ʱ���ŵ�������Ч
		/// </summary>
		void DisplayEliminateFX();

	//�����ǣ�ʹ������������ͼ�е��ã���Ϊ��������
	UFUNCTION(BlueprintPure)
		/// <summary>
		/// ����ͼ�п��Ե��õĺ��������Եõ��õ��������ɫ
		/// </summary>
		/// <returns>������ɫ</returns>
		FORCEINLINE FLinearColor GetChangedColor() { return this->ChangedColor; }

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/// <summary>
	/// ���÷�����ɫ
	/// </summary>
	/// <param name="NewChangeColor">������ɫ����</param>
	/// <param name="Index">�ڼ�����ɫ���±�</param>
	void SetColor(FLinearColor NewChangeColor, int Index);

	UPROPERTY(BlueprintAssignable)
		//����һ��ί�����͵��ֶΣ���������ͨ��ʵ������
		FAubeBeenHitSignature OnCubeBeenHit;

private:

	UPROPERTY(VisibleAnywhere)
		/// <summary>
		/// �����������ָ��
		/// </summary>
		UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditAnywhere)
		/// <summary>
		/// Ҫ�ı����ɫ�����䵽��ͼϸ������ϣ���̬���ġ�
		/// </summary>
		FLinearColor ChangedColor;
	/// <summary>
	/// �ж��Ƿ�Ҫ�ı���ɫ������
	/// </summary>
	bool bBeenShot = false;
	/// <summary>
	/// ��̬����ʵ��ָ��
	/// </summary>
	UMaterialInstanceDynamic* CubeMatDynamic;
	/// <summary>
	/// ��ʼ��ɫ
	/// </summary>
	FLinearColor OriginColor;
	/// <summary>
	/// ��Ҫת������ɫ
	/// </summary>
	FLinearColor TargetColor;
	/// <summary>
	/// ��ǰ��ɫ
	/// </summary>
	FLinearColor CurrentColor;
	/// <summary>
	/// ��ɫ���±�
	/// </summary>
	int ColorIndex;
	/// <summary>
	/// ��ʱ�����
	/// </summary>
	FTimerHandle DalayRecoverHandle;

	/// <summary>
	/// ��������
	/// </summary>
	void Eliminate();
	/// <summary>
	/// ��ɫ��ԭ
	/// </summary>
	void Recover();
	UFUNCTION()
	void DelayRecover();

	/// <summary>
	/// ��д�ĸ��������˺�����
	/// </summary>
	/// <returns></returns>
	float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
};
