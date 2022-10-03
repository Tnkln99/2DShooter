#include "../headers/LivingBody.h"

const sf::Texture &LivingBody::getTexture() {
    return texture;
}

const Animation &LivingBody::getAnimation() {
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
