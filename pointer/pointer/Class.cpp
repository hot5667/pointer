#include <iostream>

using namespace std;

//class Inventory
//{
//
//};
//
//class Player
//{
//
//public:
//	void Move() {}
//	void Attack() {}
//	void Die() {}
//
//public:
//	int _hp;
//	int _attack;
//	int _defence;
//	Inventory _inventory
//};
//
//class Knight : public Player
//{
//public:
//	int _stmina;
//
//};
//
//class Archer : Player
//{
//
//public:
//	int  _arrCount;
//};
//
//class Mage : public Player
//{
//
//public:
//	int _mp;
//};
//
//void Fight(Player* p1, Player* p2)
//{
//	p1->_hp -= p2->_attack;
//}

//class car
//{
//public:
//	void MoveHandle(){}
//	void pushPedal(){}
//	void OpenDoor(){}
//	void TurnKey(){}
//
//protected:
//	void disassemble(){}
//	void putFuellnEngine(){}
//	void connectCircuit(){}
//
//public:
//
//
//};
//
//class Knight
//{
//public:
//	void SetHp(int hp)
//	{
//		_hp = hp;
//		if (_hp <= 50)
//		{
//			//TODO
//		}
//	}
//
//	int GetHp()
//	{
//		return _hp;
//	}
//
//
//private:
//	int _hp = 100;
//};
//
//oop 3대 요소
// -상속성 << inheritance
// -은닉성 << data hiding (캡슐화 encapsulation)
// -다형성 << polymorephism

//oop 3대 요소
// -상속성 << inheritance
// -은닉성 << data hiding (캡슐화 encapsulation)
// -다형성 << polymorephism
//
// Player 기본 클래스

// ls-A vs Has-A

// 오버로딩 (overLoding)
// 오버라이딩 (overRiding)

// 동물
//   개
//   고양이

// 바이딩 (binding)
// - 정적 바이딩 (Static Binding - 컴파일 시점에 결정)
// - 동적 바이딩 (dynamic Binding - 실행 시점에 결정)

// 동적 바이팅 과 정적 바이딩 의 차이는 실행 시점 이 상이 하다

// virtual - 가상 함수
// vrtTable (virtual function table)
// .vrtTable ( 주소 1 | 주소 2 | 주소 3 )

// 소멸자 virtual ~Player 로 만들어야 한다. ( 상속을 받았을 경우)

class Player
{
public:
	virtual void Move() { cout << "Player Move()" << endl; };

public:
	int _hp = 100;
};

class Knight : public Player
{
public:
	virtual void Move() { cout << "Knight Move()" << endl; };

public:
	int _stamina = 200;
};

void MovePlayer(Player* player)
{
	player->Move();
}

int main()
{
	Knight k1;
	MovePlayer(&k1);
}