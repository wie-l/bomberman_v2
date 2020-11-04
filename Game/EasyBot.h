#ifndef EASYBOT_H
#define EASYBOT_H

#include "Game.h"
#include "Player.h"
#include "Bot.h"


class EasyBot : public Bot
{
	public:
		EasyBot(std::string _name, Position _pos) : Bot(_name, _pos) {};
		void update() override;
		
	protected:
		Position findTargetPos() override;
		

};

#endif