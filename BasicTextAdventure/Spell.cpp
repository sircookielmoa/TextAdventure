#include "Spell.h"

Spell::Spell()
{
}

Spell::Spell(String _name, String _description, int _damage)
{
	name = _name;
	description = _description;
	damage = _damage;
}

Spell::~Spell()
{
}

int Spell::GetDamage()
{
	return damage;
}

String Spell::GetDescription()
{
	return description;
}

String Spell::GetName()
{
	return name;
}



