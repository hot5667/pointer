#include <iostream>

using namespace std;

// ������ �����ε�
// - ��� ������ �Լ� ����
// -- a op b ���¿��� ������ �������� ����

// - ���� ������ �Լ� ����


class Pos
{
public:

	Pos operator +(const Pos& b)
	{
		Pos pos;
		pos.x = x + b.x;
		pos.y = x + b.y;
	}

	int x = 0;
	int y = 0;
};

int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;

	Pos pos1;
	Pos pos2;
	Pos pos3 = pos1 + pos2;
}