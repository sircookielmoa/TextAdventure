#pragma once
#include "Item.h"

class Hand : public Item
{
public:
	Hand();
	Hand(String name);
	~Hand();

	void Use(String _playerInput) override;
	void Description() const override;
};

