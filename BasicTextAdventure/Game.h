#pragma once

#include "Player.h"
#include "Room.h"

class Game
{
public:
	Game();
	~Game();

	void Run();

	Item** collectionItems;

private:
	Player* mainPlayer;
	Room* castle[3][3];
};

