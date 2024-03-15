#include "tArr.h"
#include "LinkedList.h"

#include <iostream>

using namespace std;

int main()
{
	tArray Arr = { };
	InitArray(&Arr);

	PushBack(&Arr, 100);

	//��� �ߴ� ���� �ʱ�ȭ
	Release(&Arr);

	tList list = { };

	list.pHeadNode;

	PushBack(&list, 100);
	PushBack(&list, 200);
	PushBack(&list, 300);
	PushBack(&list, 400);
	PushBack(&list, 500);
	PushBack(&list, 600);


	return 0;
}

void InitArray(tArray* _Arr)
{

	_Arr->pData = (int*)malloc(sizeof(int) * 2);
	_Arr->MaxCount = 2;
	_Arr->CurCount = 0;

}

void PushBack(tArray* _Arr, int _Data)
{
	// �����Ͱ� ���� �� ������ �Ҵ���� ������ �� ä����.
	if (_Arr->MaxCount <= _Arr->CurCount)
	{
		//�� ������ �Ҵ���� ������ �� �÷���� �Ѵ�.

		// 1, �� ���� ������ Ȱ�� �޴´�.
		// 2. ������ �����ص� �����͸� ���ο� �������� �Ű��ش�.
		// 3. ���� ������  �޸𸮸� ��ü��Ų��,
		// 4. �����迭�� ���ο� ������ ����������� ����Ų��.

		Realloc(_Arr);
	}

	_Arr->pData[_Arr->CurCount++] = _Data;
}

void Realloc(tArray* _Arr)
{
	int* pNew = (int*)malloc(sizeof(int) * _Arr->MaxCount * 2);
	for (int i = 0; i < _Arr->MaxCount; ++i)
	{
		pNew[i] = _Arr->pData[i];
	}

	free(_Arr->pData);

	_Arr->pData = pNew;
	_Arr->MaxCount *= 2;
}

void Release(tArray* _Arr)
{
	free(_Arr->pData);
	_Arr->pData = nullptr;
	_Arr->MaxCount = 0;
	_Arr->CurCount = 0;

}
