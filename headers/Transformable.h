#ifndef INC_2DSHOOTER_TRANSFORMABLE_H
#define INC_2DSHOOTER_TRANSFORMABLE_H

#include <SFML/Graphics.hpp>

class Transformable{
private:
    sf::Vector2u location = sf::Vector2u(0,0);

public:
    explicit Transformable(sf::Vector2u location);
};

#endif //INC_2DSHOOTER_TRANSFORMABLE_H
