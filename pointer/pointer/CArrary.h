#pragma once

#include <iostream>
#include <assert.h>

typedef unsigned int UINT;

// 클래스 템플릿
template<typename T>
class CArray
{
private:
	T* m_pData;
	UINT	m_Capacity;
	UINT	m_Size;

public:
	void PushBack(const T& _Data);
	void erase(cosnt iterator& _iter);
	void Resize(UINT _Size);

	UINT Size() { return m_Size; }

	T& GetData(UINT _idx);
	T& operator[] (UINT _idx);

	void Clear();

	class iterator;
	iterator begin();
	iterator end();


public:
	CArray();
	~CArray();

	// 내부 클래스(Inner class)
	// 1. 컨테이너 별, 컨테이늬 타입별로 모두 iterator 동일한 이름으로 반복자 클래스명을 통일시킬 수 있다.
	// 2. 포함클래스의 private 까지 접근이 가능하다.
	class iterator
	{
	private:
		CArray<T>* m_Container;
		int			m_Idx;			// -1 인 경우, End Iterator 로 간주

	public:
		iterator& operator = (const iterator& _otheriter)
		{
			m_Container = _otheriter.m_Container;
			m_Idx = _otheriter.m_Idx;
			return *this;
		}

		bool operator == (const iterator& _otheriter)
		{
			if (m_Container == _otheriter.m_Container
				&& m_Idx == _otheriter.m_Idx)
			{
				return true;
			}

			return false;
		}

		bool operator != (const iterator& _otheriter)
		{
			return !((*this) == _otheriter);
		}

		// ++ 을 연달아서 호출하는 기능이 가능하려면 자기 자신을 다시 리턴시켜야 한다.
		iterator& operator ++ ()
		{
			// End Iterator 에 ++ 을 호출한 경우
			if (-1 == m_Idx)
				assert(nullptr);

			// 컨테이너가 보유하고 있는 데이터를 가리키는 인덱스를 증가시킨다.
			++m_Idx;

			// 마지막 데이터에서 그다음로 증가한 경우
			if (m_Container->m_Size <= m_Idx)
			{
				m_Idx = -1;
			}

			return *this;
		}

		iterator& operator --()
		{
			--m_Idx;

			if (m_Idx == -1)
			{
				m_Idx = m_Container->m_Size;
			}
			else if (m_Idx < 0 || m_Idx >= m_Container->m_Size)
			{
				assert(nullptr);
			}

			return *this;
		}

		iterator operator -- (int _Data)
		{
			return iterator();
		}

		iterator operator ++ (int _Data)
		{

			return iterator();
		}



		T& operator * ()
		{
			return m_Container->GetData(m_Idx);
		}

	public:
		iterator()
			: m_Container(nullptr)
			, m_Idx(0)
		{}

		iterator(CArray<T>* _Container, int _Idx)
			: m_Container(_Container)
			, m_Idx(_Idx)
		{}
	};
};


template<typename T>
CArray<T>::CArray()
	: m_pData(nullptr)
	, m_Capacity(2)
	, m_Size(0)
{
	//m_pData = (T*)malloc(sizeof(T) * m_Capacity);
	m_pData = new T[m_Capacity];
}

template<typename T>
CArray<T>::~CArray()
{
	//free(m_pData);
	delete[] m_pData;

	// delete 포인터; -> 포인터가 가리키는 공간에 해당 자료형 1개어치 만큼만 메모리가 있을 경우
	// delete[] 포인터; -> 포인터가 가리키는 공간에 해당 포인터자료형 단위로 연달아 연속적으로 할당받은 경우
}


template<typename T>
void CArray<T>::PushBack(const T& _Data)
{
	if (m_Capacity <= m_Size)
	{
		Resize(m_Capacity * 2);
	}

	m_pData[m_Size++] = _Data;
}

template<typename T>
typename CArray<T>::erase(cosnt iterator& _iter)
{


}

template<typename T>
void CArray<T>::Resize(UINT _Size)
{
	// 재조정하려는 크기가 기존 크기보다 작거나 같다면(무의미 or 데이터 소실 위험성)
	if (_Size <= m_Capacity)
	{
		assert(nullptr);
	}

	// 1. 요청한 크기의 새로운 공간을 동적할당한다.
	//T* pNew = (T*)malloc(sizeof(T) * _Size);
	T* pNew = new T[_Size];

	// 2. 기존 공간에 있던 데이터를 새로운 공간으로 옮겨준다.
	// memcpy(pNew, m_pData, sizeof(int) * m_Size);
	for (int i = 0; i < m_Size; ++i)
	{
		pNew[i] = m_pData[i];
	}

	// 3. 기존공간 메모리 해제시킨다.
	delete[] m_pData;

	// 4. 새로운 공간을 m_pData 가 가리킨다.
	m_pData = pNew;
	m_Capacity = _Size;
}

template<typename T>
T& CArray<T>::GetData(UINT _idx)
{
	// 입력되지 않은 위치의 인덱스를 요청한 경우
	if (m_Size <= _idx)
		assert(nullptr);

	return m_pData[_idx];
}

template<typename T>
T& CArray<T>::operator[] (UINT _idx)
{
	// 입력되지 않은 위치의 인덱스를 요청한 경우
	if (m_Size <= _idx)
		assert(nullptr);

	return m_pData[_idx];
}

template<typename T>
void CArray<T>::Clear()
{
	m_Size = 0;
}

// 반환타입이 Inner 클래스인 경우 앞에 typename 키워드를 붙인다.
template<typename T>
typename CArray<T>::iterator CArray<T>::begin()
{
	return iterator(this, 0);
}

// 반환타입이 Inner 클래스인 경우 앞에 typename 키워드를 붙인다.
template<typename T>
typename CArray<T>::iterator CArray<T>::end()
{
	return iterator(this, -1);
}
