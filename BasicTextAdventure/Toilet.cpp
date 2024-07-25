#include "Toilet.h"
#include <iostream>
Toilet::Toilet()
{
}

Toilet::Toilet(String name) :Item(name)
{
}

Toilet::~Toilet()
{
}

void Toilet::Use(String _playerInput)
{
	if (_playerInput == "use")
	{
		std::cout << "\n\tyou sit on the toilet";
		std::cout << "\n\t[1] [2]\n\t";
		String newInput;
		newInput.ReadFromConsole().ToLower();

		if (newInput == "1")
		{
			std::cout << "\n\tyou piss in the toilet";
		}
		if (newInput == "2")
		{
			std::cout << "\n\tyou poop in the toilet";
		}
	}
	else
	{
		std::cout << "\n\t\tinvalid option" << std::endl;
	}
}

void Toilet::Description() const
{
	std::cout << "\n\tA Golden d20 with a seat on it, a throne... fit for Tom.";
}
