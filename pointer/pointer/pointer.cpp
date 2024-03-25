#include <iostream>

using namespace std;

void AddHp(int* hp, int value)
{
	*hp += value;
}

int main()
{
	int hp = 100;

	//[타입]* [이름];
	// - * = 포인터
	// - 주소값을 담는 바구니
	// - 주소값을 타고 가면 -> 무엇이 나오느냐?
	//(*ptr); // 역참조

	// 포인터의 필요성

	int* ptr = &hp;

	int** pptr = &ptr; // 이중 포인터

	int a = 3;

	//8바이트

	//AddHp(&hp, 10);
	//cout << hp << endl;
}