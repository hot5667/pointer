#include "CArrary.h"

#include <iostream>

// ���� �迭 



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
	//new Ű���� ��� �ڷ����� ������ �� Ȱ���� �޾� ���� ����. 

}

CArrary::~CArrary()
{
}
