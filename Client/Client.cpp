#include "Client.h"

Client::Client()
{

};

Client::~Client()
{
    if (getConnectionState() == ConnectionState::Open) {
        disconnect();
    }
}

void Client::tick()
{
}

void Client::disconnect()
{
    if (connectionState != ConnectionState::Closed)
    {
        //TODO: Close conenction
        
        connectionState = ConnectionState::Closed;
    }
}

ConnectionState Client::getConnectionState() const
{
    return connectionState;
}
