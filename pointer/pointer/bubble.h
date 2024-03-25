#pragma once
#include "sorting.h"

template <class T>
class Bubble : public Sort<T>
{
public:
	Bubble(int Max = 100) : Sort<T>(Max) {}

	void sorting() override {
		int N = this->getSize();
		const T* data = this->getData();

		for (int pass = 1; pass < N; ++pass) {
			bool sorted = true;
			for (int cur = 0; cur < N - pass; ++cur) {
				if (data[cur] > data[cur + 1]) {
					std::swap(const_cast<T&>(data[cur]), const_cast<T&>(data[cur + 1]));
					sorted = false;
				}
			}
			if (sorted) break;
		}
	}
};
