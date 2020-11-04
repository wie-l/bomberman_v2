#ifndef CLIENT_H
#define CLIENT_H

enum class ConnectionState { Connecting, Open, Closed };

class Client 
{
	public:
		Client();
		~Client();

		void tick();
		void disconnect();

		ConnectionState getConnectionState() const;

		void sendStartRequest();
		void sendPlayerMove();
	private:
		ConnectionState connectionState = ConnectionState::Closed;
};

#endif
