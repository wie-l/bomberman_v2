#include "Bot.h"

void Bot::setDirectionToPos(Position _targetPos)
{
	if (_targetPos.x > position.x) direction = game_utils::Direction::right;
	else if (_targetPos.x < position.x)  direction = game_utils::Direction::left;
	else if (_targetPos.y > position.y)  direction = game_utils::Direction::down;
	else if (_targetPos.y < position.y)	direction = game_utils::Direction::up;
	else direction = game_utils::Direction::none;
}

bool Bot::isNearWood()
{
	return false;
}


bool Bot::isNearPlayer()
{
	return false;
}
