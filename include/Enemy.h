#ifndef ENEMY_H
#define ENEMY_H

#include <SFML/Graphics.hpp>

#include "Entity.h"

class Enemy: public Entity {
    public:
        bool done;
        sf::CircleShape shape;

        Enemy(double x=0, double y=0, double vx=0, double vy=0);

        virtual void update();
        virtual void draw(sf::RenderWindow& window);

        virtual ~Enemy();
    protected:
    private:
};

#endif // ENEMY_H
