#include <iostream>
#include <assert.h>

#pragma once

//클래스 템플릿
template<typename T>
class CArrary
{

private:
	T* m_pData;
	unsigned int  m_Capacity;
	unsigned int  m_Size;

public:
	void PushBack(const T& _Data);
	void Resize(int _Size);

	unsigned int Size() { return m_Size; }

	T& GetData(int _idx);
	T& operator[] (unsigned int _idx);

	void Clear();

	class iterator;
	iterator begin();
	iterator end();

public:
	CArrary();
	~CArrary();

	// 내부 클래스(Inner class)
	// 1. 컨테이너 별, 컨테이너 타입별로 모두 Iterator 동일한 이름 으로 사용이 가능하다.
	// 2. 포함클래스의 private 까지 접근이 가능하다.
	class iterator
	{
	private:


		int m_Data;
	};
};

template<typename T>
void CArrary<T>::PushBack(const T& _Data)
{
	if (m_Capacity <= m_Size)
	{
		Resize(m_Capacity * 2); // 현재 용량의 두 배로 크기를 증가시킵니다.
	}
	m_pData[m_Size++] = _Data;
}

template<typename T>
void CArrary<T>::Resize(int _Size)
{
	if (_Size <= m_Capacity)
	{
		assert(nullptr);
	}

	// 1. 요청한 크기의 새로운 공간을 동적할당 한다.
	T* pNew = new T[_Size];
	// 2. 기존 공간에 있던 데이터를 새로운 공으로 옮겨준다.
	//memcpy(pNew, m_pData, sizeof(int) * m_Size);
	for (int i = 0; i < m_Size; ++i)
	{
		pNew[i] = m_pData[i];
	}
	// 3. 기존공간 메모리 해체시킨다.

	delete[] m_pData;
	// 4. 새로운 공간을 m_pData 가 가리킨다.

	m_pData = pNew;
	m_Capacity = _Size;
}
template<typename T>
T& CArrary<T>::GetData(int _idx)
{
	if (m_Size <= _idx || _idx < 0)
	{
		throw std::invalid_argument("잘못된 영역입니다.");
		assert(nullptr);
	}

	return m_pData[_idx];
}

template<typename T>
T& CArrary<T>::operator[](unsigned int _idx)
{
	if (m_Size <= _idx || _idx < 0)
	{
		assert(nullptr);
	}

	return m_pData[_idx];
}

template<typename T>
void CArrary<T>::Clear()
{
	m_Size = 0;
}

// 변환타입이 inner 클래스 인경우  typename 을 붙인다.
template<typename T>
typename CArrary<T>::iterator CArrary<T>::begin()
{
	return iterator();
}

// 변환타입이 inner 클래스 인경우  typename 을 붙인다.
template<typename T>
typename CArrary<T>::iterator CArrary<T>::end()
{
	return iterator();
}

template<typename T>
CArrary<T>::CArrary()
	: m_pData(nullptr)
	, m_Capacity(0)
	, m_Size(0)
{

	//m_pData = (int*)malloc(sizeof(int) * m_Capacity);
	m_pData = new T[m_Capacity];
	//new 키워드 경우 자료형과 사이즈 를 활당을 받아 가져 간다. 

}

template<typename T>
CArrary<T>::~CArrary()
{
	// free(m_pData); == delete m_pData;
	// delete int* 포인터만 넣어줬을 경우 하나만 판단
	// 많은 전달을 줘야 할경우
	// delete[] m_pData

	delete[] m_pData;
}
