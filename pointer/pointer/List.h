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

	//CList 클래스 템플릿에 대한 Friend 경우 이미 전방선언이 되어 있기 때문에 전방선언을 할필요가 없다.
	template<typename T>
	friend class CList;
};

//class 와 sturct 의 차이 
//sturct 의 경우 기본 제한자 경우 Public 이지만 class 는 Private 로 제한자가 되어 있다.


template<typename T>
class Clist
{
private:
	TListNode<T>* m_pHead;	// 첫번째 데이터 노드르 가리키는 포인터
	TListNode<T>* m_pTail;	// 두번째 데이터 노드를 가리키는 포인터
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

	// 첫번째 데이터가 입력된 상횡
	if (nullptr == m_pHead)
	{
		m_pHead = pnewNode;
		m_pTail = pnewNode;
	}
	// 데이터가 1개 이상인 경우
	else
	{
		m_pTail->pNext = pnewNode;
		pnewNode->pPrev = m_pTail;
		m_pTail = pnewNode;
	}

	++m_Size;
}
