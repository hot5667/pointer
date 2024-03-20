#include "bubble.h"

int main()
{
	int data[] = { 10, 7, 9, 1, 3, 2, 8, 6, 4, 5 };
	Bubble<int> bubbleSort;
	bubbleSort.initData(data, 10);
	bubbleSort.sorting();
	bubbleSort.printAll();
	return 0;
}