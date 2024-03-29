#pragma once

template<typename T>
struct TListNode
{
private:
	T			   Data;
	TListNode<T>* pNext;
	TListNode<T>* pPrev;

public:
	TListNode()
		: Data()
		, pNext(nullptr)
		, pPrev(nullptr)
	{}

	TListNode(cosnt T& _Data, TListNode* _Next = nullptr, TListNode* _Prev = nullptr)
		: Data()
		, pNext(nullptr)
		, pPrev(nullptr)
	{}

	~TListNode()
	{

	}

	//CList Ŭ���� ���ø��� ���� Friend ��� �̹� ���漱���� �Ǿ� �ֱ� ������ ���漱���� ���ʿ䰡 ����.
	template<typename T>
	friend class CList;
};

//class �� sturct �� ���� 
//sturct �� ��� �⺻ ������ ��� Public ������ class �� Private �� �����ڰ� �Ǿ� �ִ�.


template<typename T>
class Clist
{
private:
	TListNode<T>* m_pHead;	// ù��° ������ ��帣 ����Ű�� ������
	TListNode<T>* m_pTail;	// �ι�° ������ ��带 ����Ű�� ������
	int			  m_Size;

public:
	void push_back(const T& _Data);

public:
	CList()
		: m_pHead(nullptr)
		, m_pTail(nullptr)
		, m_Size(0)
	{}

	~CList()
	{
		TListNode<T> pNode = m_pHead;
		while (true)
		{
			TListNode<T>* pNext = pNode->pNext;
			delete pNode;
			pNode = pNext;
		}
	}
};

template<typename T>
void Clist<T>::push_back(const T& _Data)
{
	TListNode<T> pnewNode = new TListNode<T>(_Data);

	// ù��° �����Ͱ� �Էµ� ��Ⱦ
	if (nullptr == m_pHead)
	{
		m_pHead = pnewNode;
		m_pTail = pnewNode;
	}
	// �����Ͱ� 1�� �̻��� ���
	else
	{
		m_pTail->pNext = pnewNode;
		pnewNode->pPrev = m_pTail;
		m_pTail = pnewNode;
	}

	++m_Size;
}
