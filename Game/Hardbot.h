#ifndef HARDBOT_H
#define HARDBOT_H

#include "Game.h"
#include "Player.h"
#include "Bot.h"

class HardBot : public Bot 
{
	public:
		HardBot(std::string _name, Position _pos) : Bot(_name, _pos) {};
		void update() override;

	protected:
		Position findTargetPos() override;
		bool isSafePlant();
};

#endif
