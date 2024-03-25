#include <iostream>

using namespace std;

class Knight
{
public:
	// 생성자
	// 기본 생성자
	// 리턴 타입 X
	Knight()
	{
		hp = 0;
		attack = 0;
		defence = 0;
		cout << "생성자()" << endl;
	}

	//복사 생성자
	Knight(const Knight& other)
	{
		this->hp = other.hp;
		this->attack = other.attack;
		this->defence = other.defence;

		cout << "Knight(const Knight&)" << endl;
	}

	// 기타 생성자
	Knight(int hp, int attack, int defence)
	{
		this->hp = hp;
	}

	// 소멸자
	~Knight()
	{
		cout << "소멸자()" << endl;
	}

	//멤버 함수
	void Attack() { cout << "Attack" << endl; }
	void Die() { cout << "Die" << endl; }
	void Heal(int Value)
	{
		hp += 10;
	}

public:
	// 멤버 변수
	int hp;
	int attack;
	int defence;
};

int main()
{
	//객체(instance)
	Knight k1(100, 10, 1);

	Knight k2(k1);
}