#pragma once
#include "Spell.h"
#include "String.h"

#include <vector>
#include <algorithm>
#include <iostream>

class Player
{
public:

	Player();

	~Player();

	void setPlayerLocation(int _xpos, int _ypos);

	String MovePlayer();

	void OpenBook();

	bool FindSpell(String spell);

	//Player location.
	int xpos = 0;
	int ypos = 0;

private:
	Spell* grimoire[7];
};

