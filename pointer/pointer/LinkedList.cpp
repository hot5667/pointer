#include "LinkedList.h"

#include <iostream>

void PushBack(tList* _List, int _Data)
{
	tNode* pNewNode = (tNode*)malloc(sizeof(tNode));
	pNewNode->Data = _Data;
	pNewNode->pNextNode = nullptr;

	//List 가 보유한 데이터 없다면
	if (_List->pHeadNode == nullptr)
	{
		_List->pHeadNode = pNewNode;
	}
	//List 가 보유한 데이터가 1개 이상이라면
	else 
	{
		// List 가 보유한 데이터중 갖아 마지막 노드를 찾는다.
		tNode* pFinalNode = _List->pHeadNode;

		while (pFinalNode->pNextNode)
		{
			pFinalNode = pFinalNode->pNextNode;
		}

		pFinalNode->pNextNode = pNewNode;

		_List->pHeadNode;

		//가장 마지막 노드를 찾았으면, 해당 노드가 이번에 생성된 노드를 가리킨다.

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
