#pragma once

#include "Item.h"

class Stick : public Item
{
public:
	Stick();
	Stick(String name);
	~Stick();

	void Use(String _playerInput) override;
	void Description() const override;
};

