#pragma once
#include "String.h"

class Item
{
public:
	Item();
	Item(String name);
	virtual ~Item();

	String _name;
	String _description;

	virtual void Use();
	virtual void Description() const;
	virtual void Use(String _playerInput);
};
