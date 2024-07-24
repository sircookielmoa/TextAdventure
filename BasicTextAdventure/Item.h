#pragma once
#include "String.h"

class Item
{
public:
	Item();
	Item(String name, String description);
	virtual ~Item();

	String _name;
	String _description;

	virtual void Use();
	virtual String Description();
	virtual void Use(String _playerInput);
};
