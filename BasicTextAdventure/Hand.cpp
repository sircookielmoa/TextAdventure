#include "Hand.h"
#include <iostream>
Hand::Hand()
{
}

Hand::Hand(String name, String description) :Item(name, description)
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
