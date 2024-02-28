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
	void* ptr; //렘의 가상의 주소

	int a = 10;
	int b = 20;

	Swap(&a, &b);

}