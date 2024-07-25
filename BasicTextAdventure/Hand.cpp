#include "Hand.h"
#include <iostream>
Hand::Hand()
{
}

Hand::Hand(String name) :Item(name)
{
}

Hand::~Hand()
{
}

void Hand::Use(String _playerInput)
{
	if (_playerInput == "use")
	{
		std::cout << "\n\t\tyou hi-five the hand" << std::endl;
	}
}

void Hand::Description() const
{
	std::cout << "\n\tA gross severed hand... I wonder whos this is. ";
}
