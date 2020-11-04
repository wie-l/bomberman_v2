#ifndef MAP_H
#define MAP_H

#include <array>
#include <vector>
#include "Game.h"
#include "Player.h"
#include "Bomb.h"
#include "Fire.h"

class Map 
{
	public: 
		//direction LEFT, DOWN, RIGHT,UP
		const std::array<Position, 4> allDirections = { Position(-1, 0), Position(0, 1), Position(1, 0), Position(0, -1) };
		const std::uint8_t mapSquareSize = 50;

		std::vector<Player> players; 
		std::vector<Bomb> bombs; 
		std::vector<Fire> fires;

		Map();
		void loadMap();
		void render();
		void update();
		bool isInMapRange(Position pos);
		bool isAccessible(Position pos);
		bool isOnFire(Position pos);
		bool isWood(Position pos);
		bool isBomb(Position pos);
		bool isWall(Position pos);
		bool isPlayer(Position pos);
		bool isBonus(Position pos);
		void removePlayer(Position pos);
		void createBomb(Position pos);
		void removeBomb(Position pos);
		void setOnFire(Position pos);
		//refreshes fire if there is another explosion on the same position
		void refreshFire(Position pos);
		void extinquishFire(Position pos);
		void generateBonus(Position pos);
		void handleBonus(Player* player);
		void bomTick();


};
#endif
