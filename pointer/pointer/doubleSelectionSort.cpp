#include <iostream>

#include "doubleSelectionSort.h"

void doubleSelectionSort(int arr[], int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		int minIndex = 0;
		int maxIndex = 0;

		for (int j = i + 1; j < n - 1; ++j)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
			else if (arr[j] < arr[maxIndex])
			{
				maxIndex = j;
			}
		}

		std::swap(arr[i], arr[minIndex]);

		int lastIndex = n - i - 1;

		std::swap(arr[lastIndex], arr[maxIndex]);
	}
}
