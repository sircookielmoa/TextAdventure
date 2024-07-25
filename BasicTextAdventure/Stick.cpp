#include "Stick.h"
#include <iostream>
Stick::Stick()
{
}

Stick::Stick(String name) :Item(name)
{
}

Stick::~Stick()
{
}

void Stick::Use(String _playerInput)
{
	if (_playerInput == "use")
	{
		std::cout << "\n\t\tyou hold the stick firmly, not sure whether to swing it or wave it";
		std::cout << "\n\t\t[swing]\t[wave]\n\t>";
		String newInput;
		newInput.ReadFromConsole().ToLower();

		if (newInput == "swing")
		{
			std::cout << "\n\t\tyou swing the stick around like a sword, its a good stick, but you look stupid";
		}
		if (newInput == "wave")
		{
			std::cout << "\t\n\nyou wave the stick like a magical staff. a bright spark flies out and a loud explosion can be heard somewhere in the castle";
		}
	}
	else
	{
		std::cout << "\n\t\tinvalid option" << std::endl;
	}
}

void Stick::Description() const
{
	std::cout << "\n\tThis is a stick... Its brown and sticky. ";
}
