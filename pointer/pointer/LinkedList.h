#pragma once

// int 타입 데이터를 저장할 수 있는 연결형 리스트의 데이터 단위(노드)

struct tNode
{
	int	Data;
	tNode* pNextNode;
};

struct tList
{
	tNode* pHeadNode;
	int		CurCount;
};

void PushBack(tList* _List, int _Data);
void _PushFront(tList* _List, int _Data);
void Release(tList* _List);