#include "CArrary.h"

#include <iostream>
#include <assert.h>

// ���� �迭 



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
		Resize(m_Capacity * 2); // ���� �뷮�� �� ��� ũ�⸦ ������ŵ�ϴ�.
	}
	m_pData[m_Size++] = _Data;
}


void CArrary::Resize(int _Size)
{
	if (_Size <= m_Capacity)
	{
		assert(nullptr);
	}

	// 1. ��û�� ũ���� ���ο� ������ �����Ҵ� �Ѵ�.
	int* pNew = new int[_Size];
	// 2. ���� ������ �ִ� �����͸� ���ο� ������ �Ű��ش�.
	//memcpy(pNew, m_pData, sizeof(int) * m_Size);
	for (int i = 0; i < m_Size; ++i)
	{
		pNew[i] = m_pData[i];
	}
	// 3. �������� �޸� ��ü��Ų��.

	delete[] m_pData;
	// 4. ���ο� ������ m_pData �� ����Ų��.

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
	//new Ű���� ��� �ڷ����� ������ �� Ȱ���� �޾� ���� ����. 

}

CArrary::~CArrary()
{
	// free(m_pData); == delete m_pData;
	// delete int* �����͸� �־����� ��� �ϳ��� �Ǵ�
	// ���� ������ ��� �Ұ��
	// delete[] m_pData

	delete[] m_pData;
}
