#include "LinkedList.h"

#include <iostream>

void PushBack(tList* _List, int _Data)
{
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->Data = _Data;
	pNewNode->pNextNode = nullptr;

	//List �� ������ ������ ���ٸ�
	if (_List->pHeadNode == nullptr)
	{
		_List->pHeadNode = pNewNode;
	}
	//List �� ������ �����Ͱ� 1�� �̻��̶��
	else 
	{
		// List �� ������ �������� ���� ������ ��带 ã�´�.
		tNode* pFinalNode = _List->pHeadNode;

		while (pFinalNode->pNextNode)
		{
			pFinalNode = pFinalNode->pNextNode;
		}

		pFinalNode->pNextNode = pNewNode;

		_List->pHeadNode;

		//���� ������ ��带 ã������, �ش� ��尡 �̹��� ������ ��带 ����Ų��.

	}

	++_List->CurCount;

	_List->CurCount;
}

void _PushFront(tList* _List, int _Data)
{
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->Data = _Data;
	pNewNode->pNextNode = nullptr;

	if (nullptr == _List->pHeadNode)
	{
		_List->pHeadNode = pNewNode;
	}
	else
	{
		pNewNode->pNextNode = _List->pHeadNode;

		_List->pHeadNode = pNewNode;
	}

	++_List->CurCount;
}

void Release(tList* _List)
{
	tNode* pNode = _List->pHeadNode;

	while (pNode)
	{
		tNode* pNextNode = pNode->pNextNode;

		free(pNode);
		pNode = pNextNode;
	}

}
