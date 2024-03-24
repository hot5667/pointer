#include "Item.h"
#include <iostream>

Item::Item()
{
	int randValue = rand() % 100;

	if (randValue < 50)
	{
		_rarity = IR_Noraml;
	}
	else if (randValue < 80)
	{
		_rarity = IR_Rare;
	}
	else
	{
		_rarity = IR_Unique;
	}
}

Item::~Item()
{
}

void Item::PrintInfo()
{
	switch (_rarity)
	{
	case IR_Noraml:
		std::cout << "[��͵�] �Ϲ�" << std::endl;
		break;
	case IR_Rare:
		std::cout << "[��͵�] ����" << std::endl;
		break;
	case IR_Unique:
		std::cout << "[��͵�] ����ũ" << std::endl;
		break;
	}
}


Weapon::Weapon()
{
	switch (_rarity)
	{
	case IR_Noraml:
		_damage = 1 + rand() % 5;
		break;
	case IR_Rare:
		_damage = 10 + rand() % 20;
		break;
	case IR_Unique:
		_damage = 50 + rand() % 40;
		break;
	}
}

Weapon::~Weapon()
{
}

void Weapon::PrintInfo()
{
	std::cout << "****************************" << std::endl;
	std::cout << "[������ Ÿ��] : ����" << std::endl;
	std::cout << "[���ݷ�] : " << _damage << std::endl;
	Item::PrintInfo();
	std::cout << "****************************" << std::endl;
}


Armor::Armor()
{
	switch (_rarity)
	{
	case IR_Noraml:
		_defence = 1 + rand() % 3;
		break;
	case IR_Rare:
		_defence = 2 + rand() % 4;
		break;
	case IR_Unique:
		_defence = 3 + rand() % 5;
		break;
	}
}

Armor::~Armor()
{
}

void Armor::PrintInfo()
{
	std::cout << "****************************" << std::endl;
	std::cout << "[������ Ÿ��] : ����" << std::endl;
	std::cout << "[����] : " << _defence << std::endl;
	Item::PrintInfo();
	std::cout << "****************************" << std::endl;

}


// �� Ÿ�� ��ȯ
// Ư¡) �ǹ̸� �����ϱ� ���ؼ� ���� ��ü�� �ٸ� ��Ʈ�� �籸��
//{
//	int a = 123456789;
//	float b = (float)a;
//	int c = 0;
//}


//���� Ÿ�� ��ȯ
//{
//	int a = 123456789;
//	float b = (float&)a;
//	int c = 0;
//}

// ����ȯ ��ȯ (�ǹ̰� 100% ��ġ)
//{
//	int a = 13465789;
//	__int64 b = (__int64)a;
//	int c = 0;
//}

// �Ҿ���ȯ ��ȯ (�ǹ̰� �� �Ҿ����ϰ� ����)
//{
//	int a = 13465789;
//	short b = (short)a;
//	int c = 0;
//}
