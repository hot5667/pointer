#include "LinkedList.h"

#include <iostream>

void PushBack(tList* _List, int _Data)
{
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->Data = _Data;
	pNewNode->pNextNode = nullptr;


	//List �� ������ ������ ���ٸ�
	if (_List->pHeadNode = nullptr)
	{
		_List->pHeadNode - pNewNode;
	}
	//List �� ������ �����Ͱ� 1�� �̻��̶��
	else 
	{
		// List �� ������ �������� ���� ������ ��带 ã�´�.

		//���� ������ ��带 ã������, �ش� ��尡 �̹��� ������ ��带 ����Ų��.

	}

	++_List->CurCount;

	_List->CurCount;
}
