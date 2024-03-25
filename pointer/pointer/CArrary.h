#include <iostream>
#include <assert.h>

#pragma once

//Ŭ���� ���ø�
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

	// ���� Ŭ����(Inner class)
	// 1. �����̳� ��, �����̳� Ÿ�Ժ��� ��� Iterator ������ �̸� ���� ����� �����ϴ�.
	// 2. ����Ŭ������ private ���� ������ �����ϴ�.
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
		Resize(m_Capacity * 2); // ���� �뷮�� �� ��� ũ�⸦ ������ŵ�ϴ�.
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

	// 1. ��û�� ũ���� ���ο� ������ �����Ҵ� �Ѵ�.
	T* pNew = new T[_Size];
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
template<typename T>
T& CArrary<T>::GetData(int _idx)
{
	if (m_Size <= _idx || _idx < 0)
	{
		throw std::invalid_argument("�߸��� �����Դϴ�.");
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

// ��ȯŸ���� inner Ŭ���� �ΰ��  typename �� ���δ�.
template<typename T>
typename CArrary<T>::iterator CArrary<T>::begin()
{
	return iterator();
}

// ��ȯŸ���� inner Ŭ���� �ΰ��  typename �� ���δ�.
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
	//new Ű���� ��� �ڷ����� ������ �� Ȱ���� �޾� ���� ����. 

}

template<typename T>
CArrary<T>::~CArrary()
{
	// free(m_pData); == delete m_pData;
	// delete int* �����͸� �־����� ��� �ϳ��� �Ǵ�
	// ���� ������ ��� �Ұ��
	// delete[] m_pData

	delete[] m_pData;
}
