#include "Bullet.h"
#include <iostream>
using namespace std;

Bullet::Bullet(double x, double y, double vx, double vy){
    this->x = x;
    this->y = y;
    this->vx = vx;
    this->vy = vy;
    shape = sf::CircleShape(10);
    shape.setPosition(x - 10, y - 10);
}

void Bullet::update(){
    x += vx;
    y += vy;
    shape.setPosition(x - 10, y - 10);
}

void Bullet::draw(sf::RenderWindow& window){
    window.draw(shape);
}

sf::Vector2f Bullet::getPosition(){
    return sf::Vector2f(x, y);
}

Bullet::~Bullet(){
    //dtor
}
