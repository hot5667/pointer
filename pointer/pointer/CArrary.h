#pragma once

#include <iostream>
#include <assert.h>

typedef unsigned int UINT;

// Ŭ���� ���ø�
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

	// ���� Ŭ����(Inner class)
	// 1. �����̳� ��, �����̴� Ÿ�Ժ��� ��� iterator ������ �̸����� �ݺ��� Ŭ�������� ���Ͻ�ų �� �ִ�.
	// 2. ����Ŭ������ private ���� ������ �����ϴ�.
	class iterator
	{
	private:
		CArray<T>* m_Container;
		int			m_Idx;			// -1 �� ���, End Iterator �� ����

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

		// ++ �� ���޾Ƽ� ȣ���ϴ� ����� �����Ϸ��� �ڱ� �ڽ��� �ٽ� ���Ͻ��Ѿ� �Ѵ�.
		iterator& operator ++ ()
		{
			// End Iterator �� ++ �� ȣ���� ���
			if (-1 == m_Idx)
				assert(nullptr);

			// �����̳ʰ� �����ϰ� �ִ� �����͸� ����Ű�� �ε����� ������Ų��.
			++m_Idx;

			// ������ �����Ϳ��� �״����� ������ ���
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

	// delete ������; -> �����Ͱ� ����Ű�� ������ �ش� �ڷ��� 1����ġ ��ŭ�� �޸𸮰� ���� ���
	// delete[] ������; -> �����Ͱ� ����Ű�� ������ �ش� �������ڷ��� ������ ���޾� ���������� �Ҵ���� ���
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
	// �������Ϸ��� ũ�Ⱑ ���� ũ�⺸�� �۰ų� ���ٸ�(���ǹ� or ������ �ҽ� ���輺)
	if (_Size <= m_Capacity)
	{
		assert(nullptr);
	}

	// 1. ��û�� ũ���� ���ο� ������ �����Ҵ��Ѵ�.
	//T* pNew = (T*)malloc(sizeof(T) * _Size);
	T* pNew = new T[_Size];

	// 2. ���� ������ �ִ� �����͸� ���ο� �������� �Ű��ش�.
	// memcpy(pNew, m_pData, sizeof(int) * m_Size);
	for (int i = 0; i < m_Size; ++i)
	{
		pNew[i] = m_pData[i];
	}

	// 3. �������� �޸� ������Ų��.
	delete[] m_pData;

	// 4. ���ο� ������ m_pData �� ����Ų��.
	m_pData = pNew;
	m_Capacity = _Size;
}

template<typename T>
T& CArray<T>::GetData(UINT _idx)
{
	// �Էµ��� ���� ��ġ�� �ε����� ��û�� ���
	if (m_Size <= _idx)
		assert(nullptr);

	return m_pData[_idx];
}

template<typename T>
T& CArray<T>::operator[] (UINT _idx)
{
	// �Էµ��� ���� ��ġ�� �ε����� ��û�� ���
	if (m_Size <= _idx)
		assert(nullptr);

	return m_pData[_idx];
}

template<typename T>
void CArray<T>::Clear()
{
	m_Size = 0;
}

// ��ȯŸ���� Inner Ŭ������ ��� �տ� typename Ű���带 ���δ�.
template<typename T>
typename CArray<T>::iterator CArray<T>::begin()
{
	return iterator(this, 0);
}

// ��ȯŸ���� Inner Ŭ������ ��� �տ� typename Ű���带 ���δ�.
template<typename T>
typename CArray<T>::iterator CArray<T>::end()
{
	return iterator(this, -1);
}
