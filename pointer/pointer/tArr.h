#pragma once

//int �� �����ϴ� �ڷ���
struct tArray
{
	int* pData;		//�����͸�
	int  MaxCount;
	int	 CurCount;
};

void InitArray(tArray* _Arr);
void PushBack(tArray* _Arr, int Data);
void Realloc(tArray* _Arr);
void Release(tArray* _Arr);