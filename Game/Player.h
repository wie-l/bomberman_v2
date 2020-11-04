#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <cstdint>
#include "Game.h"

class Player 
{
	public:
		std::string name;
		Position position;
		bool isAlive;
		std::uint_fast8_t strength;
		std::uint_fast8_t bombCount;
		game_utils::Direction direction;
		Player(std::string _name, Position _position);
		
		void move();
		virtual void update() { move(); }
		void dropBomb();
};
#endif