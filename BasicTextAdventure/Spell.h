#pragma once
#include "String.h"

class Spell
{
public:
	Spell();
	Spell(String name, String description, int damage);
	~Spell();

	String GetName();
	String GetDescription();
	int GetDamage();

private:

	String name;
	String description;
	int damage;
};