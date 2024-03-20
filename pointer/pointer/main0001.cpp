#include "selection.h"

int main()
{
	Selection<int> selectionSort;

	int data[] = { 10, 7, 9, 1, 3, 2, 8, 6, 4, 5 };

	selectionSort.initData(data, 10);
	selectionSort.sorting();
	selectionSort.printAll();

	return 0;
}