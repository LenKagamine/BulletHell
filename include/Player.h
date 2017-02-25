#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player{
    public:
        double x, y;
        double vx, vy;
        sf::CircleShape shape;
        double radius;

        Player(double x=0, double y=0);

        void update();
        void draw(sf::RenderWindow& window);

        void fire();

        virtual ~Player();
    protected:
    private:
};

#endif // PLAYER_H
