#pragma once
#include "String.h"

class Item
{
public:
	Item();
	Item(String name, String description);
	virtual ~Item();

	String _description;
	String _name;

	virtual void Use();
	virtual void Description();
	virtual void Use(String _playerInput);

private:

};
