#ifndef STAGE_H
#define STAGE_H

#include <SFML/Graphics.hpp>

#include "Player.h"

class Stage{
    public:
        Player player;

        Stage();
        virtual ~Stage();

        void update();
        void draw(sf::RenderWindow& window);
    protected:
    private:
};

#endif // STAGE_H
