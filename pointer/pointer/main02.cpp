#include <iostream>

using namespace std;

struct Status
{
	int Hp;
	int Mp;
	int Def;
	int Atk;
	int Spd;
	int Lck;
};

Status* info;

void Player()
{
	info->Hp = 100;
	info->Mp = 50;
	info->Atk = 10;
	info->Def = 5;
	info->Lck = 0;
	info->Spd = 3;

	
	if (info->Hp == 0)
	{	while (true)
		cout << "플레이어가 죽었습니다." << endl;
		return;
	}

	cout << "플레이어 체력 :" << info->Hp << endl;
	
}

int main()
{
	Player();
}