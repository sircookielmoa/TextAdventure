#pragma once

#include "Item.h"

class Toilet : public Item
{
public:
	Toilet();
	Toilet(String name);
	~Toilet();

	void Use(String _playerInput) override;
	void Description() const override;

};

