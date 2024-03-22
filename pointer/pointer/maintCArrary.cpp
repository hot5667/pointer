#include <iostream>


class Monster
{

public:
	Monster() { std::cout << "Monster()" << std::endl; }
	~Monster() { std::cout << "~Monster()" << std::endl; }

public:
	int _hp = 0;

};


int main()
{
	// malloc + free
	// new + delete

	Monster* m1 = new Monster;
}