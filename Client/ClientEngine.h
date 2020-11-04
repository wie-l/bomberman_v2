#ifndef CLIENTENGINE_H
#define CLIENTENGINE_H

//class rendering gui and handling user input
class ClientEngine 
{
	public:
		bool init();
		void runClient();	
	private:
		void update();
		void render();
};

#endif