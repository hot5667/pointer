#include <iostream>

using namespace std;

class Knight
{
public:
	//��� �Լ�
	void Attack() { cout << "Attack" << endl; }
	void Die() { cout << "Die" << endl; }
	void Heal(int Value) 
	{	
		hp += 10;	
	}

public:
	// ��� ����
	int _hp;
	int _attack;
	int _defence;
};

int main()
{
	//��ü(instance)
	Knight k1;

	k1._hp = 100;
	k1._attack = 10;

	k1.Attack();
	k1.Die();

}