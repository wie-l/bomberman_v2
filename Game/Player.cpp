#include "Player.h"
#include <iostream>

Player::Player(std::string _name, Position _position)
{
	name = _name;
	position = _position;
	direction = game_utils::Direction::none;
	isAlive = true;
	bombCount = 1; 
	strength = 1;
};

void Player::move() {
	Position targetPosition;
	switch(direction) 
	{
		case game_utils::Direction::up: 
		{
			targetPosition = Position(position.x, position.y - 1);
			/*
			//if(isAccessible(targetPosition) - move  -> is accessible - update position 
				position.y -= 1;
			*/
			break;
		}
		case game_utils::Direction::down:
		{ 
			targetPosition = Position(position.x, position.y + 1);
			break; 
		}
		case game_utils::Direction::left: 
		{ 
			targetPosition = Position(position.x - 1, position.y);
			break; 
		}
		case game_utils::Direction::right: 
		{ 
			targetPosition = Position(position.x + 1, position.y);
			break; 
		}
		default: break;
	}

};

void Player::dropBomb() {
	if (bombCount > 0) //&& !map.isBomb(position)
	{
		// map.createBomb(&this);
	}
}