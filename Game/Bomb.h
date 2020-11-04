#ifndef BOMB_H
#define BOMB_H

#include "Game.h"
#include <cstdint>

class Bomb
{
	public:
		Position position;

		std::uint_fast8_t strength;
		std::uint_fast8_t timeTillExplosion;

		Bomb(Position _pos, std::uint_fast8_t _strength);

		void tick();
		void explode();

		inline bool operator==(const Bomb& rhs) { return rhs.position.x == position.x && position.y == rhs.position.y; }
	private: 
		const std::uint_fast8_t defaultDuration = 20;
};
#endif