#include <iostream>

using namespace std;

class Marine
{
public:
	void TakeDamage(int damage)
	{
		hp -= damage;
	}

public:
	int hp;
	int attack;
};


int main()
{
	Marine m1;
	m1.hp = 20;

	Marine m2;
	m1.hp = 30;
}