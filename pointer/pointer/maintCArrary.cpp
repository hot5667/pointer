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
	void* ptr = malloc(4);

	Monster* m = (Monster*)ptr;
	m->_hp = 100;

	free(ptr);
}