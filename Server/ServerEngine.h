#ifndef SERVERENGINE_H
#define SERVERENGINE_H

class ServerEngine
{
public:
	ServerEngine();
	~ServerEngine();
	void run();
	void stop();
private:
	void tick();
	bool isRunning;
};

#endif#pragma once
