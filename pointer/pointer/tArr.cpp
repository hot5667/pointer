#include "tArr.h"

#include <iostream>

using namespace std;


void Test(int* pInt)
{

}

int main()
{
	tArray Arr = { };
	InitArray(&Arr);

	PushBack(&Arr, 100);

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



	}

	_Arr->pData[_Arr->CurCount++] = _Data;
}
