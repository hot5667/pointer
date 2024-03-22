#include <iostream>

#include "CArrary.h"
#include <vector>

using std::vector;

int main()
{
	vector<int> vec;

	for (int i = 0; i < 100; ++i)
	{
		vec.push_back(i + 1);
	}


	vector<int>::iterator iter;
}