#include "tArr.h"
#include "LinkedList.h"

#include <iostream>

using namespace std;

int main()
{
	tArray Arr = { };
	InitArray(&Arr);

	PushBack(&Arr, 100);

	//사용 했던 공간 초기화
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
	// 데이터가 현재 힙 영여겡 할당받으 공간을 다 채웠다.
	if (_Arr->MaxCount <= _Arr->CurCount)
	{
		//힙 영역에 할당받은 공간을 더 늘려줘야 한다.

		// 1, 더 넓은 공간을 활당 받는다.
		// 2. 기존에 저장해둔 데이터를 새로운 공간으로 옮겨준다.
		// 3. 원래 공간을  메모리를 해체시킨다,
		// 4. 동적배열이 새로운 공간을 저장공간으로 가리킨다.

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
