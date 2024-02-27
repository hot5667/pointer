#include <iostream>

using namespace std;

void AddHp(int hp, int value)
{

}


int main()
{
	int hp = 100;

	//[타입]* [이름];
	// - * = 포인터
	// - 주소값을 담는 바구니
	// - 주소값을 타고 가면 -> 무엇이 나오느냐?
	int* ptr = &hp;

	//(*ptr); // 역참조
	*ptr = 200;
	cout << *ptr << endl;

	AddHp(hp, 10);
}

