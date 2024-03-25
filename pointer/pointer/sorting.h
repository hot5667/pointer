#pragma once

#include <memory>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <cstring> // memcpy를 사용하기 위해

template <class T>
class Sort
{
	std::unique_ptr<T[]> m_data;
	int m_size;

public:
	Sort(int Max = 100) : m_size(Max), m_data(new T[Max]) {}

	// 배열에서 데이터를 초기화하는 생성자
	Sort(T* data, int size) : m_size(size), m_data(new T[size]) {
		assert(data != nullptr);
		std::memcpy(m_data.get(), data, sizeof(T) * m_size);
	}

	// 소멸자는 unique_ptr을 사용하기 때문에 필요하지 않습니다.

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
