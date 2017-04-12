#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

#include "Entity.h"

class Player: public Entity {
    public:
        sf::CircleShape shape;
        double radius;

        Player(double x=0, double y=0);

        virtual void update();
        virtual void draw(sf::RenderWindow& window);

        void fire();

        virtual ~Player();
    protected:
    private:
};

#endif // PLAYER_H
