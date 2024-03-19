#include <iostream>

using namespace std;

class Player 
{
public:
	Player() 
	{
		cout << "Player()" << endl;
	}
	~Player()
	{
		cout << "~Player()" << endl; 
	}

};

class Knight : public Player 
{

public:
	Knight() : _hp(0)
		// 선처리 영역
	{
		cout << "Knight()" << endl;

	}

	~Knight()
	{
		cout << "~Knight()" << endl;
	}

public:
	int _hp;

};


int main()
{
	Knight k1;
}