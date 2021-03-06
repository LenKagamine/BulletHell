#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>

#include "Entity.h"

class Bullet: public Entity {
    public:
        sf::CircleShape shape;

        Bullet(double x=0, double y=0, double vx=0, double vy=0);

        virtual void update();
        virtual void draw(sf::RenderWindow& window);

        sf::Vector2f getPosition();

        virtual ~Bullet();
    protected:
    private:
};

#endif // BULLET_H
