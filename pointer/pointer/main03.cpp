#include <iostream>

using namespace std;

#define MAX_SZIE 10

int num[MAX_SZIE] = { 10,9,1,5,3,4,2,5,6,7 };

void test(int a[])
{
	int temp;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 9 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}


int main()
{
	test(num);

	for (int i = 0; i < 10; ++i)
	{
		cout << num[i] << " ";
	}

	return 0;

}