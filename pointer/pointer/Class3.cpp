//#include <iostream>
//
//using namespace std;
//
//// ������ �����ε�
//// - ��� ������ �Լ� ����
//// -- a op b ���¿��� ������ �������� ����
//
//// - ���� ������ �Լ� ����
//// - a op b ���¶��, a/b ��θ� ������ �Լ��� �ǿ����ڷ� ���
//
class Pos
{
public:

	Pos operator +(const Pos& b)
	{
		Pos pos;
		pos.x = x + b.x;
		pos.y = x + b.y;
	}

	bool operator==(const Pos& b)
	{
		return x == b.x && y == b.x;
	}

	// ���� ������
	void operator=(int b)
	{


	}

	int x = 0;
	int y = 0;
};


Pos operator+(int a, const Pos& b)
{
	Pos pos;
	pos.x = a + b.x;
	pos.y = a + b.y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = a + b;

	Pos pos1;
	Pos pos2;
	Pos pos3 = pos1 + pos2;
}