#include <iostream>

using namespace std;

void AddHp(int hp, int value)
{

}


int main()
{
	int hp = 100;

	//[Ÿ��]* [�̸�];
	// - * = ������
	// - �ּҰ��� ��� �ٱ���
	// - �ּҰ��� Ÿ�� ���� -> ������ ��������?
	int* ptr = &hp;

	//(*ptr); // ������
	*ptr = 200;
	cout << *ptr << endl;

	AddHp(hp, 10);
}

