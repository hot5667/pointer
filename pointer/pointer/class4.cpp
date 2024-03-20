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
//	//특정 객체와 무관 
//	// 전역 함수로 라고 생각하면 쉬움
//	static void SetAttack(int value)
//	{
//
//	}
//
//public:
//	// 특정 객체와 연관
//	int hp;
//	static int attack; //특정 객체와 무관
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

//자료구조&알고리즘
//디자인 패턴 
// -싱글톤, 옵저버, 컴퍼넌트

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