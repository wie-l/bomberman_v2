#include "Fire.h"

Fire::Fire(Position _position)
{
	position = _position;
	timeLeft = defaultDuration;
}

void Fire::resetFire()
{
	timeLeft = defaultDuration;
}
