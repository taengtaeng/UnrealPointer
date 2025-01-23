// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	int32 Number = 42;
	int32* NumberPtr = &Number;

	// 42 (12345)
	// NumberPtr = 12345
	//*NumberPtr = 42

	

	//
	//NumberPtr -= 1;
	//NumberPtr += 1;

	//NumberPtr += 1;

	UE_LOG(LogTemp, Warning, TEXT("Number의 값 : %d"), Number);//42
	UE_LOG(LogTemp, Warning, TEXT("Number의 주소 : %d"), &Number); //Number의 주소
	UE_LOG(LogTemp, Warning, TEXT("Pointer가 가리키는 값 : %d"), *NumberPtr);//42
	UE_LOG(LogTemp, Warning, TEXT("Pointer에 할당 된 주소 : %d"), NumberPtr);//넘버의 주소

	//int32 StaticArray[5] = { 10,20,30,40,50 };
	//int32* FirstStaticAraayPtr = &StaticArray[0];

	//for (int32 i = 0; i < 5; i++)
	//{
	//	C//넘버의 주소
	//}
	//for (int32 i = 0;1 < size; i++)
	//{

	//}


	////int32* FirstStaticAraayPtr

	//	TArray<int32> List;
	//	List.Add(10);
	//	List.Add(10);
	//	List.Add(10);
	//	List.Add(10);
	//	List.Add(10);
	//	in32* FirstlistPtr =

		//int32 ValueA = 1;
		//int32 ValueB = 2;
		//UE_LOG(LogTemp, Warning, TEXT("ValueA = %d ValueB = %d"), ValueA, ValueB);//넘버의 주소
		//
		//
		//int32* Value = &ValueA;


		//	/*Swap(C,D)*/

		//	

		//UE_LOG(LogTemp, Warning, TEXT("ValueA = %d ValueB = %d"), ValueA, ValueB);
		//


		//int32 NumberA = 10;
		//int32& NumberARef = NumberA;

		//UE_LOG(LogTemp, Warning, TEXT("Pointer에 할당 된 주소 : %d"), NumberARef);//넘버의 주소

		//int32 NumberB = 20;
		//int32* NumberBPtr = nullptr;
		//int32& NumberBRef = NumberB;

		//int32 TestA = 100;

		//UE_LOG(LogTemp, Warning, TEXT("TestA의 원래 값 : %d"), TestA); //TestA의 원래 값:100, changeValue(인자값):500
		//ChangeValue(&TestA);
		//UE_LOG(LogTemp, Warning, TEXT("TestA의 포인터로 변환 값 : %d"), TestA);//TestA의 포인터로 변환 값:500, ChangeValueRef(인자값):12345
		//ChangeValueRef(TestA);
		//UE_LOG(LogTemp, Warning, TEXT("TestA의 참조로 변환값 : %d"), TestA);//TestA의 참조로 변환값:12345

		int32 LottoSize = 5;
		TArray<int32> LottoNumbers;
		TArray<int32> NumberPool;
		LottoNumbers.Empty();
		for (size_t i = 1; i <= 45; i++)
		{
			NumberPool.Add(i);
		}
		LottoNumbers.Empty();

		for (size_t i = 0; i <5 ; i++)
		{
			int32 A = FMath::RandRange(1, 45);
			int32 B = NumberPool[A];
			LottoNumbers.Add(B);
			NumberPool.RemoveAt(A);

		}
		for (size_t i = 0; i < LottoNumbers.Num(); i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("Lotto Numbers.Num %d : %d"), (i + 1), LottoNumbers[i]);
		}


}

				

void UMyGameInstance::Swap(int32* A, int32* B)
{
	int32 Temp = *B;
	*A = *B;
	*B = Temp;
}

void UMyGameInstance::ChangeValue(int32* A)
{
	*A = 500;
}

void UMyGameInstance::ChangeValueRef(int32& A)
{
	A = 12345;
}



/*

	int32 Number = 42;
	int32* NumberPtr = &Number;

	void UMyGameInstance::Swap(int32* A, int32* B)

A
\================
\	    C 		\ 12345
\================

B
\================
\	     D		\ 54312
\================


Number 
\================
\	     42		\ 12345
\================


NumberPtr
\================
\		12345	\  
\================



B(x2
\================
\		1		\   54321
\================


*/