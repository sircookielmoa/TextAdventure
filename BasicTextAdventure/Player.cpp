#include "Player.h"

#include <iostream>

Player::Player()
{
	//spells: flame of the fell god, Scourging black flame, lightning spear, frenzied burst
	//scarlet aeonia, placidusax's ruin, greyoll's roar
	grimoire[0] = new Spell("black flame", "Sweeps area before caster with black flame", 38);
	grimoire[1] = new Spell("flame blast", "Summons raging fireball that explodes and sets the area ablaze", 74);
	grimoire[2] = new Spell("frenzied burst", "Emits concentrated blast of yellow flame of frenzy from eyes", 42);
	grimoire[3] = new Spell("lightning spear", "Hurls lightning spear before caster", 30);
	grimoire[4] = new Spell("roar", "Emits the roar of Elder Dragon Greyoll", 67);
	grimoire[5] = new Spell("ruin", "Spews golden breath of Dragonlord Placidusax", 85);
	grimoire[6] = new Spell("scarlet aeonia", "Creates a giant flower that explodes with scarlet rot", 90);

}

Player::~Player()
{
	//delete all spells
	for (int i = 0; i < 7; i++)
	{
		delete grimoire[i];
	}
}

void Player::setPlayerLocation(int _xpos, int _ypos)
{
	xpos = _xpos;
	ypos = _ypos;
}

String Player::MovePlayer()
{
	String movementInput;
	std::cout << "\tInput direction.\n\t>";
	movementInput.ReadFromConsole().ToLower();

	//north
	if(movementInput.EqualTo("north") == true)
		if (ypos == 0)
		{
			return "\tyou cannot pass through a wall...";
		}
		else
		{
			setPlayerLocation(xpos, ypos - 1);

			return "\tmoved north.";
		}
	//east
	if (movementInput.EqualTo("east") == true)
	{
		if (xpos == 2)
		{
			return "\tyou cannot pass through a wall...";
		}
		else
		{
			setPlayerLocation(xpos + 1, ypos);
			return "\tYou have gone east";
		}
	}
	//south
	if (movementInput.EqualTo("south") == true)
	{
		if (ypos == 2)
		{
			return "\tyou cannot pass through a wall...";
		}
		else
		{
			setPlayerLocation(xpos, ypos + 1);
			return "\tYou have gone south";
		}
	}
	//west
	if (movementInput.EqualTo("west") == true)
	{
		if (xpos == 0)
		{
			return "\tyou cannot pass through a wall...";
		}
		else
		{
			setPlayerLocation(xpos - 1, ypos);
			return "\tYou have gone west";
		}
	}
	else
	{
		return "\tinvalid input";
	}
}



void Player::OpenBook()
{
	std::cout << "\n\tyou open your grimoire, it emits a powerful aura\n";
	//std::cout << "\n-----Spells------\nflame blast\nblack flame\nlightning spear\nfrenzied burst\nscarlet aeonia\nruin\nroar\n";
	for (int i = 0; i < 7; i++)
	{
		std::cout << "\t[" << this->grimoire[i]->GetName() << "]\n";
	}
}

bool Player::FindSpell(String spell)
{
	int low = 0;
	int high = 6;
	int middle;

	while (low <= high)
	{
		middle = ((high + low) / 2);

		String currentName = grimoire[middle]->GetName();

		if (spell == currentName)
		{
			return true;
		}
		else if (spell < currentName)
		{
			high = middle - 1;
		}
		else if (currentName < spell)
		{
			low = middle + 1;
		}
		
	}
	return false;
}
