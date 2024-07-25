#pragma once

#include "../Item.h"

class SmallBoy : public Item
{
public:
	SmallBoy();
	SmallBoy(String name);
	~SmallBoy();

	void Use(String _playerInput) override;
	String Description() override;
};

