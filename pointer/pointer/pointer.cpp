#include <iostream>

using namespace std;

void AddHp(int* hp, int value)
{
	*hp += value;
}

int main()
{
	int hp = 100;

	//[Ÿ��]* [�̸�];
	// - * = ������
	// - �ּҰ��� ��� �ٱ���
	// - �ּҰ��� Ÿ�� ���� -> ������ ��������?
	//(*ptr); // ������

	// �������� �ʿ伺

	int* ptr = &hp;

	int** pptr = &ptr; // ���� ������

	int a = 3;

	//8����Ʈ

	//AddHp(&hp, 10);
	//cout << hp << endl;
}