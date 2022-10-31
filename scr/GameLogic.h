//
// Created by tanku on 30.10.2022.
//

#ifndef INC_2DSHOOTER_GAMELOGIC_H
#define INC_2DSHOOTER_GAMELOGIC_H


class LivingBody;

class GameLogic {
private:
    LivingBody* player;
public:
    GameLogic();

    void update();
};


#endif //INC_2DSHOOTER_GAMELOGIC_H
