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

//oop 3대 요소
// -상속성 << inheritance
// -은닉성
// -다형성

// Player 기본 클래스

// ls-A vs Has-A