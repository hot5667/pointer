#pragma once

//int 를 저장하는 자료형
struct tArray
{
	int* pData;		//데이터를
	int  MaxCount;
	int	 CurCount;
};

void InitArray(tArray* _Arr);
void PushBack(tArray* _Arr, int Data);
void Realloc(tArray* _Arr);
void Release(tArray* _Arr);