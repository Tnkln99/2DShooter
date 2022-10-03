#ifndef INC_2DSHOOTER_ANIMATION_H
#define INC_2DSHOOTER_ANIMATION_H

#include <SFML/Graphics.hpp>


class Animation{
private:
    sf::Vector2u imageCount;
    sf::Vector2u currentImage;

    float totalTime;
    float switchTime;
public:
    sf::IntRect uvRect;

    Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);

    void Update(int row, float deltaTime);
};


#endif //INC_2DSHOOTER_ANIMATION_H
