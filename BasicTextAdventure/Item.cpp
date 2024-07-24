
#include "Item.h"

#include <iostream>

Item::Item() {}

Item::Item(String name, String description)
{
	_name = name;
	_description = description;
}


Item::~Item() {}

void Item::Use()
{
}

String Item::Description()
{
	return String();
}

void Item::Use(String _playerInput)
{
}

