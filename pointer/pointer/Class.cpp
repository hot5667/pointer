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
//oop 3�� ���
// -��Ӽ� << inheritance
// -���м� << data hiding (ĸ��ȭ encapsulation)
// -������ << polymorephism

//oop 3�� ���
// -��Ӽ� << inheritance
// -���м� << data hiding (ĸ��ȭ encapsulation)
// -������ << polymorephism
// 
// Player �⺻ Ŭ����

// ls-A vs Has-A

// �����ε� (overLoding)
// �������̵� (overRiding)

// ����
//   ��
//   �����

// ���̵� (binding)
// - ���� ���̵� (Static Binding - ������ ������ ����)
// - ���� ���̵� (dynamic Binding - ���� ������ ����)

// ���� ������ �� ���� ���̵� �� ���̴� ���� ���� �� ���� �ϴ� 


class Player 
{
public:
	void Move() { cout << "Player Move()" <<  endl; };

public:
	int _hp;

};

class Knight : public Player
{
	 
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
