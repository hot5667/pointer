#include <iostream>

using namespace std;

struct StatInfo // 이부분은 스텟 자료형 영역입니다.
{
	int hp;
	int attack;
	int defence;
};

StatInfo CreatePlayer()
{
	StatInfo info;

	cout << "플레이어 생성" << endl;

	info.hp = 100;
	info.attack = 10;
	info.defence = 2;

	return info;
}

void CreateMonSter(StatInfo* info)
{
	cout << "몬스터  생성" << endl;

	info->hp = 40;
	info->attack = 8;
	info->defence = 1;
}

void Battle(StatInfo* player, StatInfo* monster)
{
	while (true)
	{
		int damage = player->attack - monster->defence;

		if (damage < 0)
			damage = 0;

		monster->hp -= damage;
		if (monster->hp < 0)
			monster->hp = 0;

		cout << "몬스터 HP : " << monster->hp << endl;

		if (monster->hp == 0)
		{
			return;
		}

		damage = monster->attack - player->defence;
		if (damage < 0)
		{
			damage = 0;
		}

		cout << "플레이어 HP : " << player->hp << endl;
		player->hp -= damage;
		if (player->hp < 0)
		{
			player->hp = 0;
		}

		if (player->hp == 0)
		{
			return;
		}
	}
}


int main()
{
	//void* ptr; //렘의 가상의 주소

	// 포인터 연산
	// - 주소 연산자 (&)
	// - 산술 연산자 (+-)
	// - 간접 연산자 (*)
	// - 간접 멤버 연산자 (->)

	// (*ptr).hp == ptr->hp;

	StatInfo player;
	player = CreatePlayer();
	StatInfo monster;
	CreateMonSter(&monster);

	Battle(&player, &monster);
}

