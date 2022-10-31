#include "LivingBody.h"
#include "Animation.h"

LivingBody::LivingBody(std::string& name, sf::Vector2u location,sf::Texture* texture, float health, float speed) : GameObject(name, location, texture) {
    animation = new Animation(texture, sf::Vector2u(4,10), 0.2f);
}


const Animation *LivingBody::getAnimation() {
    return animation;
}

float LivingBody::getHealth() {
    return health;
}

float LivingBody::getSpeed() {
    return speed;
}

void LivingBody::setHealth(int health) {
    this->health = health;
}

void LivingBody::setSpeed(int speed) {
    this->speed = speed;
}


