#include <iostream>

int main()
{
	


}

//oop 3�� ���
// -��Ӽ� << inheritance
// -���м�
// -������


class Player
{
public:
	void Move(){}
	void Attack(){}
	void Die(){}

public:
	int _hp;
	int _attack;
	int _defence;
};

class Knight : Player 
{

};

class Archer : Player 
{

public:
	int  _arrCount;
};

class Mage : Player
{

};