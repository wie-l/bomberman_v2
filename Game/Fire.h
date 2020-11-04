#ifndef FIRE_H
#define FIRE_H

#include "Game.h"

class Fire 
{
	public: 
		std::uint_fast8_t timeLeft;
		Position position;
		Fire(Position _position);
		void resetFire();
	private:
		const std::uint_fast8_t defaultDuration = 5;

};

#endif