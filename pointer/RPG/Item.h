#pragma once

// item
// - Weapom
// - Armor
// - Cinsumable

enum ItemRarity
{
	IR_None,
	IR_Noraml,
	IR_Rare,
	IR_Unique
};

class Item
{
public:
	Item();
	virtual ~Item();


private:
	int _itemId = 0;
	int _itemCount = 0;
	ItemRarity _rarity = IR_Noraml;
};

class Weapom : public Item
{
public:
	Weapom();
	virtual ~Weapom();

	void SetDamage(int damage) { _damage = damage; }
	int GetDamage() { return  _damage; }


private:
	int _damage = 0;
};


class Armor :public Item
{
public:
	Armor();
	virtual ~Armor();

	void SetDefence(int defence) { _defence = defence; }
	int GetDefence() { return _defence; }

private:
	int _defence = 0;
};
