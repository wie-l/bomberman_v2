# CMakeList.txt : CMake project for Bmb, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("bomberman_v2")

# Add source to this project's executable.
add_executable (Bmb "main.cpp" "main.h"   "Client/ClientEngine.cpp" "Client/ClientEngine.h" "Game/Game.cpp" "Game/Game.h" "Game/Bomb.cpp" "Game/Bomb.h" "Game/Bot.cpp" "Game/Bot.h" "Game/Player.cpp" "Game/Player.h" "Game/Fire.cpp" "Game/Fire.h" "Game/EasyBot.cpp" "Game/EasyBot.h" "Game/Hardbot.h" "Game/HardBot.cpp" "Game/Map.cpp" "Game/Map.h"  "Client/Client.cpp" "Client/Client.h" "Server/ServerEngine.cpp" "Server/ServerEngine.h")

# TODO: Add tests and install targets if needed.
