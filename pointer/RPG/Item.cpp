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
		std::cout << "[희귀도] 일반" << std::endl;
		break;
	case IR_Rare:
		std::cout << "[희귀도] 레어" << std::endl;
		break;
	case IR_Unique:
		std::cout << "[희귀도] 유니크" << std::endl;
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
	std::cout << "[아이템 타입] : 무기" << std::endl;
	std::cout << "[공격력] : " << _damage << std::endl;
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
	std::cout << "[아이템 타입] : 무기" << std::endl;
	std::cout << "[방어력] : " << _defence << std::endl;
	Item::PrintInfo();
	std::cout << "****************************" << std::endl;

}


// 값 타입 변환
// 특징) 의미를 유지하기 위해서 원본 객체와 다른 비트열 재구성
//{
//	int a = 123456789;
//	float b = (float)a;
//	int c = 0;
//}


//참조 타입 변환
//{
//	int a = 123456789;
//	float b = (float&)a;
//	int c = 0;
//}

// 안전환 변환 (의미가 100% 일치)
//{
//	int a = 13465789;
//	__int64 b = (__int64)a;
//	int c = 0;
//}

// 불안전환 변환 (의미가 가 불안전하게 전달)
//{
//	int a = 13465789;
//	short b = (short)a;
//	int c = 0;
//}
