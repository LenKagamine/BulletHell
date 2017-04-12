#include "Enemy.h"

#include <iostream>

#include "Constants.h"

Enemy::Enemy(double x, double y, double vx, double vy){
    this->x = x;
    this->y = y;
    this->vx = vx;
    this->vy = vy;
    shape = sf::CircleShape(10);
    shape.setPosition(x - 10, y - 10);
    shape.setFillColor(sf::Color(100, 250, 50));
    done = false;
}

void Enemy::update(){
    x += vx;
    y += vy;
    shape.setPosition(x - 10, y - 10);

    if(x+5 < 0 || x-5 > WINDOW_WIDTH ||
       y+5 < 0 || y-5 > WINDOW_HEIGHT){
        done = true;
    }
}

void Enemy::draw(sf::RenderWindow& window){
    window.draw(shape);
}

Enemy::~Enemy()
{
    //dtor
}
