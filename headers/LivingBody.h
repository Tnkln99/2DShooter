#ifndef INC_2DSHOOTER_LIVINGBODY_H
#define INC_2DSHOOTER_LIVINGBODY_H

#include "Animation.h"
#include "Transformable.h"

class LivingBody : Transformable{
private:
    sf::Texture texture;
    Animation animation;

    float health;
    float speed;
public:
    //getters:
    const sf::Texture & getTexture();
    const Animation & getAnimation();
    float getHealth();
    float getSpeed();

    //setters
    void setHealth(int health);
    void setSpeed(int speed);

};


#endif //INC_2DSHOOTER_LIVINGBODY_H
