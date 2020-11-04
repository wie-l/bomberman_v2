#include "Hardbot.h"

void HardBot::update()
{
	if (isNearWood() || isNearPlayer() && isSafePlant())
	{
		this->dropBomb();
	}
	targetPos = findTargetPos();
	this->setDirectionToPos(targetPos);
	this->prevPos = this->position;
	this->move();
}

Position HardBot::findTargetPos()
{
	return Position();
}

bool HardBot::isSafePlant()
{
	return false;
}
