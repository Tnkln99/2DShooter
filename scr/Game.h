#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H

#include "UI/MenuWindow.h"
#include <iostream>
#include <SFML/Graphics.hpp>


class Game {
private:
    bool gameRunning = true;
    MenuWindow menu;
public:
    explicit Game();

    void Run();
};

#endif //MINESWEEPER_GAME_H
