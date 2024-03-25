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

	virtual void PrintInfo();

protected:
	int _itemId = 0;
	int _itemCount = 0;
	ItemRarity _rarity = IR_Noraml;
};

class Weapon : public Item
{
public:
	Weapon();
	virtual ~Weapon();

	virtual void PrintInfo() override;

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

	virtual void PrintInfo() override;

	void SetDefence(int defence) { _defence = defence; }
	int GetDefence() { return _defence; }

private:
	int _defence = 0;
};

class Potion : public Item
{
public:
	Potion();
	virtual ~Potion();

	virtual void PrintInfo() override;

	void setHeal(int heal) { _heal = heal; }
	int GetHeal() { return _heal; }


private:
	int _heal = 0;
};
