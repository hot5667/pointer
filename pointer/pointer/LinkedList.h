#pragma once

// int Ÿ�� �����͸� ������ �� �ִ� ������ ����Ʈ�� ������ ����(���)

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