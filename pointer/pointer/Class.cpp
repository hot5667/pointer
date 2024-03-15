#include <iostream>

int main()
{
	


}

//oop 3대 요소
// -상속성 << inheritance
// -은닉성
// -다형성


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