#ifndef BULLET_H
#define BULLET_H

#include <SFML/Graphics.hpp>

class Bullet{
    public:
        double x, y;
        double vx, vy;
        sf::CircleShape shape;

        Bullet(double x=0, double y=0, double vx=0, double vy=0);

        void update();
        void draw(sf::RenderWindow& window);

        sf::Vector2f getPosition();

        virtual ~Bullet();
    protected:
    private:
};

#endif // BULLET_H
