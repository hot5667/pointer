#include <iostream>

using namespace std;

void Swap(void* a, void* b)
{
	//int temp = a;
	//
	//a = b;
	//b = temp;
}

int main()
{
	void* ptr; //���� ������ �ּ�

	int a = 10;
	int b = 20;

	Swap(&a, &b);

}