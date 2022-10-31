cmake_minimum_required(VERSION 3.22)
project(2DShooter)

find_package(SFML 2.5 COMPONENTS network graphics audio REQUIRED)

add_library(scrLib scr/Player.cpp scr/Animation.cpp scr/LivingBody.cpp scr/GameObject.cpp scr/Game.cpp scr/UI/Button.cpp scr/UI/MenuWindow.cpp scr/GameLogic.cpp scr/GameLogic.h)

target_link_libraries(scrLib PRIVATE sfml-network sfml-graphics sfml-audio)

add_executable(2DShooter scr/main.cpp)
target_link_libraries(2DShooter scrLib)
