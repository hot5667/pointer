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
		cout << "�÷��̾ �׾����ϴ�." << endl;
		return;
	}

	cout << "�÷��̾� ü�� :" << info->Hp << endl;
	
}

int main()
{
	Player();
}