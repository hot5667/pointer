#pragma once
#include <cassert>
#include <iostream>

template <class T>
class Sort {
    T* m_data;
    int m_size;

public:
    Sort(int Max = 100) : m_size(Max), m_data(new T[Max]) {}

    ~Sort() {
        if (m_data) delete[] m_data;
    }

    void initData(const T* data, int size) {
        m_size = size;
        if (m_data) delete[] m_data;
        m_data = new T[m_size];
        assert(m_data != nullptr);
        std::copy(data, data + size, m_data);
    }

    int getSize() const { return m_size; }

    const T* getData() const { return m_data; }

    void printAll() const {
        for (int i = 0; i < m_size; i++)
            std::cout << m_data[i] << " ";
        std::cout << std::endl;
    }

    virtual void sorting() = 0;
};
