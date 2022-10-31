#include "GameObject.h"

GameObject::GameObject(std::string& name, sf::Vector2u location, sf::Texture* texture) : name{name}, location{location}, texture{*texture}{
    collider.setPosition(location.x,location.y);
    collider.setSize(sf::Vector2f(50,50));
    //TODO getting the collider size from the texture
}