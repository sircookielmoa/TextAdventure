#pragma once

#include "Item.h"

class SmallBoy2 : public Item
{
public:
	SmallBoy2();
	SmallBoy2(String name);
	~SmallBoy2();

	void Use(String _playerInput) override;
	void Description() const override;

private:
	bool boyDancing;
};
