#pragma once
#include "String.h"

class Spell
{
public:
	Spell();
	Spell(String name, String description, int damage);
	~Spell();

	String name;
	String description;
	int damage;

private:

protected:

};