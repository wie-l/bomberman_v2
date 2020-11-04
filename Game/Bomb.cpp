#include "Bomb.h"

Bomb::Bomb(Position _pos, std::uint_fast8_t _strength)
{
	position = _pos;
	strength = _strength;
	timeTillExplosion = defaultDuration;
}

void Bomb::tick()
{
	timeTillExplosion--;
	if (timeTillExplosion == 0) explode();
};

void Bomb::explode()
{
	//player.bombCount++;

	Position p;

	//spread to all directions
	for (size_t i = 0; i < 4; i++)
	{
		p = position;
		for (int j = 0; j < strength; j++)
		{
			//alternations to p - position

			/*
			if (map.isWall(p))
			{
				break;
			}
			
			*/
		};
	};
};
