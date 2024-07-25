#pragma once

#include "Item.h"

class Room
{
public:
	Room();
	Room(Item& _itemSlot);
	~Room();
	
	void GetDescription() const; 
	void SetDescription(const String _other);

	Item* item;

private:

	String description;
};