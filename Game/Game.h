#ifndef GAME_H
#define GAME_H

#include <cstdint>
#include <vector>

namespace game_utils {
	enum class GameState { inProgress, Lost, Won };
	enum class Difficulty { easy, hard};
	enum class Mode { singlePlayer, multiplayer};
	enum class ObjectType { Wood, Empty, Wall, Player, Fire, Bomb, Bonus_strength, Bonus_moreBombs, notDefined };
	enum class Direction { up, right, left, down, none };
};

struct Position
{
	size_t x, y;
	Position();
	Position(size_t _x, size_t _y);
	inline bool operator==(const Position& rhs){return rhs.x == x  && y == rhs.y;}
};

class Game 
{
	public:
		void start();
		void shutdown();
		void tick();
};
#endif