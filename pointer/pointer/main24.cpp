#include <iostream>

#include "CArrary.h"

int main()
{
	CArrary<int> arrInt;
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);
	arrInt.PushBack(10);

	CArrary<int>::iterator iter = arrInt.begin();

	for (; iter != arrInt.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
}