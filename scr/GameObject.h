#ifndef INC_2DSHOOTER_GAMEOBJECT_H
#define INC_2DSHOOTER_GAMEOBJECT_H

#include <SFML/Graphics.hpp>

class GameObject{
private:
    std::string name;
    sf::Vector2u location;
    sf::Texture texture;
    sf::RectangleShape collider;
public:
    explicit GameObject(std::string& name, sf::Vector2u location, sf::Texture* texture);
};

#endif //INC_2DSHOOTER_GAMEOBJECT_H
