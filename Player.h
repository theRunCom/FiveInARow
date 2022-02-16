#pragma once
#include <string>
#include "Panel.h"

class Player
{
public:
	std::string Name;
	Panel* P;
	int Type;

	Player(std::string name, int type, Panel* p);
	~Player();

	// Determines whether a player has won the game, 
	// and returns true to indicate that the player has won the game.
	bool Judgment();
	// Used to set the player's position.
	void set();
};
