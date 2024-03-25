#include <iostream>

using namespace std;

class Knight
{
public:
	// ������
	// �⺻ ������
	// ���� Ÿ�� X
	Knight()
	{
		hp = 0;
		attack = 0;
		defence = 0;
		cout << "������()" << endl;
	}

	//���� ������
	Knight(const Knight& other)
	{
		this->hp = other.hp;
		this->attack = other.attack;
		this->defence = other.defence;

		cout << "Knight(const Knight&)" << endl;
	}

	// ��Ÿ ������
	Knight(int hp, int attack, int defence)
	{
		this->hp = hp;
	}

	// �Ҹ���
	~Knight()
	{
		cout << "�Ҹ���()" << endl;
	}

	//��� �Լ�
	void Attack() { cout << "Attack" << endl; }
	void Die() { cout << "Die" << endl; }
	void Heal(int Value)
	{
		hp += 10;
	}

public:
	// ��� ����
	int hp;
	int attack;
	int defence;
};

int main()
{
	//��ü(instance)
	Knight k1(100, 10, 1);

	Knight k2(k1);
}