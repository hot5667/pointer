#include <iostream>

using namespace std;

//class Marine
//{
//public:
//	void TakeDamage(int damage)
//	{
//		hp -= damage;
//
//		attack = 10;
//	}
//
//	//Ư�� ��ü�� ���� 
//	// ���� �Լ��� ��� �����ϸ� ����
//	static void SetAttack(int value)
//	{
//
//	}
//
//public:
//	// Ư�� ��ü�� ����
//	int hp;
//	static int attack; //Ư�� ��ü�� ����
//};

//class Player
//{
//public:
//	Player()
//	{
//		id = s_idGenerator++;
//	}
//
//public:
//	int id;
//	static int s_idGenerator;
//};
//
//int GeneratorID()
//{
//	static int s_id = 1;
//	return s_id++;
//}

//�ڷᱸ��&�˰���
//������ ���� 
// -�̱���, ������, ���۳�Ʈ

class UserManger
{
public:
	static UserManger* GetInstance()
	{
		static UserManger um;
		return &um;
	}

public:
	void AddUesr() { _userCount++; }
	int GetUserCount() { return _userCount; }

private:
	int _userCount;
};

#define Get_Manger (UserManger::GetInstance())

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		Get_Manger->AddUesr();
	}

	cout << Get_Manger->GetUserCount() << endl;
}