#include <iostream>


class Monster
{
public:
	Monster() { std::cout << "Monster()" << std::endl; }
	~Monster() { std::cout << "~Monster()" << std::endl; }

public:
	int _hp = 0;
};


class Player
{
public:
	Monster* _terget;
};

Player* FindPlayer(int id)
{

}

int main()
{
	// malloc + free C��� 
	// new + delete C++ ��� ��Ÿ��

	Monster* m1 = new Monster();
	m1->_hp = 100;


	Player* player = new Player();
	player->_terget = m1;

	delete m1;
	//delete[] m1;

	m1 = nullptr;

	//use-After-Free
	m1->_hp = 200;
}