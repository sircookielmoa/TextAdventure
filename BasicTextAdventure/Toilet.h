#pragma once

#include "Item.h"

class Toilet : public Item
{
public:
	Toilet();
	Toilet(String name, String description);
	~Toilet();

	void Use(String _playerInput) override;

private:

};

