#include <iostream>

class Inventory
{

};

class Player
{

public:
	void Move() {}
	void Attack() {}
	void Die() {}

public:
	int _hp;
	int _attack;
	int _defence;
	Inventory _inventory
};

class Knight : public Player
{


};

class Archer : Player
{

public:
	int  _arrCount;
};

class Mage : Player
{

public:
	int _mp;
};

void Fight(Knight& k1, Knight& k2)
{

}

int main()
{
	Knight k1;
	Mage m1;
	m1._mp;
	

}

//oop 3�� ���
// -��Ӽ� << inheritance
// -���м�
// -������

// Player �⺻ Ŭ����

// ls-A vs Has-A