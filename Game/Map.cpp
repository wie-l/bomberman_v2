#include "Map.h"
#include <algorithm>

Map::Map()
{
	players = std::vector<Player>();
	bombs = std::vector<Bomb>();
	fires = std::vector<Fire>();
}

void Map::loadMap()
{
}

void Map::render()
{
}

void Map::update()
{
	for (auto& player : players)
	{
		player.update();
		if (isOnFire(player.position))
			removePlayer(player.position);
		else if (isBonus(player.position))
			handleBonus(&player);
	}
}

bool Map::isInMapRange(Position pos)
{
	return false;
}

bool Map::isAccessible(Position pos)
{
	return false;
}

bool Map::isOnFire(Position pos)
{
	return false;
}

bool Map::isWood(Position pos)
{
	return false;
}

bool Map::isBomb(Position pos)
{
	return false;
}

bool Map::isWall(Position pos)
{
	return false;
}

bool Map::isPlayer(Position pos)
{
	return false;
}

bool Map::isBonus(Position pos)
{
	return false;
}

void Map::removePlayer(Position pos)
{
}

void Map::createBomb(Position pos)
{
}

void Map::bomTick()
{
	for (auto& bomb : bombs)
	{
		bomb.tick();
	}
}

void Map::removeBomb(Position pos)
{
	//bombs.erase(std::remove(bombs.begin(), bombs.end(), pos));
}

void Map::setOnFire(Position pos)
{
}

void Map::refreshFire(Position pos)
{
	for (auto& fire : fires)
	{
		if (pos.x == fire.position.x && pos.y == fire.position.y) 
			fire.resetFire();
	}
}

void Map::extinquishFire(Position pos)
{
}

void Map::generateBonus(Position pos)
{
}

void Map::handleBonus(Player* player)
{
}
