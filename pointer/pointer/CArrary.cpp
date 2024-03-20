#include "CArrary.h"

#include <iostream>

// 동적 배열 



int main()
{
	CArrary arr;

	return 0;
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
}
