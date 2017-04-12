#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>

class Entity {
    public:
        double x, y;
        double vx, vy;

        virtual void update() = 0;
        virtual void draw(sf::RenderWindow& window) = 0;

        virtual ~Entity() {}
    protected:
    private:
};

#endif // ENTITY_H
