#ifndef BOT_H
#define BOT_H

#include "Player.h"
#include "Game.h"

class Bot : public Player 
{
	public:
		Bot(std::string _name, Position _pos) : Player(_name, _pos) {};
		~Bot() {};
	protected:
		Position prevPos;
		Position targetPos;
		void setDirectionToPos(Position _targetPos);
		//void findPosAndMove();
		virtual Position findTargetPos()= 0;
		bool isNearWood();
		bool isNearPlayer();
};

#endif