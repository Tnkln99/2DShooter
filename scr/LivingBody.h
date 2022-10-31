#ifndef INC_2DSHOOTER_LIVINGBODY_H
#define INC_2DSHOOTER_LIVINGBODY_H

#include "GameObject.h"

class Animation;

class LivingBody : GameObject{
private:
    Animation* animation;

    float health;
    float speed;
public:
    LivingBody(std::string& name, sf::Vector2u location,sf::Texture* texture, float health, float speed);
    //getters:
    const Animation * getAnimation();
    float getHealth();
    float getSpeed();

    //setters
    void setHealth(int health);
    void setSpeed(int speed);

};


#endif //INC_2DSHOOTER_LIVINGBODY_H
