#include "EasyBot.h"
#include "Game.h"


Position EasyBot::findTargetPos() 
{
	//find all safe positions & pick one
	return Position();
};

void EasyBot::update()
{
	if (isNearWood() || isNearPlayer())
	{
		this->dropBomb();
	}
	targetPos = findTargetPos();
	this->setDirectionToPos(targetPos);
	this->prevPos = this->position;
	this->move();
};
