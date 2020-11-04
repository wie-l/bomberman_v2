#include "ServerEngine.h"

ServerEngine::ServerEngine()
{
	isRunning = false;
}

ServerEngine::~ServerEngine()
{
   stop();
}

void ServerEngine::run()
{
    isRunning = true;

    while (isRunning) {
        tick();
    }
}

void ServerEngine::stop()
{
    isRunning = false;
}

void ServerEngine::tick()
{
    //handle events
    //+update clients
}
