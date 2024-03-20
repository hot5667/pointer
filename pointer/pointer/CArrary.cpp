#include "CArrary.h"

#include <iostream>
#include <assert.h>

// 동적 배열 



int main()
{
	CArrary arr;
	arr.Resize(20);

	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);
	arr.PushBack(10);



	return 0;
}

void CArrary::PushBack(int _Data)
{
	if (m_Capacity <= m_Size)
	{
		Resize(m_Capacity * 2); // 현재 용량의 두 배로 크기를 증가시킵니다.
	}
	m_pData[m_Size++] = _Data;
}


void CArrary::Resize(int _Size)
{
	if (_Size <= m_Capacity)
	{
		assert(nullptr);
	}

	// 1. 요청한 크기의 새로운 공간을 동적할당 한다.
	int* pNew = new int[_Size];
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

int CArrary::GetData(int _idx)
{
	if (m_Size <= _idx || _idx < 0)
	{
		assert(nullptr);
	}

	return m_pData[_idx];
}

int CArrary::operator[](unsigned int _idx)
{
	if (m_Size <= _idx || _idx < 0)
	{
		assert(nullptr);
	}

	return m_pData[_idx];
}

CArrary::CArrary()
	: m_pData(nullptr)
	, m_Capacity(0)
	, m_Size(0)
{

	//m_pData = (int*)malloc(sizeof(int) * m_Capacity);
	m_pData = new int[m_Capacity];
	//new 키워드 경우 자료형과 사이즈 를 활당을 받아 가져 간다. 

}

CArrary::~CArrary()
{
	// free(m_pData); == delete m_pData;
	// delete int* 포인터만 넣어줬을 경우 하나만 판단
	// 많은 전달을 줘야 할경우
	// delete[] m_pData

	delete[] m_pData;
}
