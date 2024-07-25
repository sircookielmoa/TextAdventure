#pragma once

#include "Item.h"

class SmallBoy : public Item
{
public:
	SmallBoy();
	SmallBoy(String name);
	~SmallBoy();

	void Use(String _playerInput) override;
	void Description() const override;

private:
	bool boyDancing;
};
