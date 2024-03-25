#pragma once

#include <memory>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <cstring> // memcpy�� ����ϱ� ����

template <class T>
class Sort
{
	std::unique_ptr<T[]> m_data;
	int m_size;

public:
	Sort(int Max = 100) : m_size(Max), m_data(new T[Max]) {}

	// �迭���� �����͸� �ʱ�ȭ�ϴ� ������
	Sort(T* data, int size) : m_size(size), m_data(new T[size]) {
		assert(data != nullptr);
		std::memcpy(m_data.get(), data, sizeof(T) * m_size);
	}

	// �Ҹ��ڴ� unique_ptr�� ����ϱ� ������ �ʿ����� �ʽ��ϴ�.

	void initData(T* data, int size) {
		m_size = size;
		m_data.reset(new T[size]);
		assert(m_data != nullptr);
		std::memcpy(m_data.get(), data, sizeof(T) * m_size);
	}

	int getSize() const { return m_size; }
	const T* getData() const { return m_data.get(); }

	void printAll() const {
		for (int i = 0; i < m_size; i++)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}

	virtual void sorting() = 0;
};
