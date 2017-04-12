#include "Player.h"

#include <iostream>

#include "BulletPool.h"

Player::Player(double x, double y){
    this->x = x;
    this->y = y;
    radius = 50;
    shape = sf::CircleShape(radius);
    shape.setPosition(x - radius, y - radius);
}

void Player::update(){
    vx = vy = 0;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        vx += -5;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        vx += 5;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
        vy += -5;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
        vy += 5;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z)){
        fire();
    }

    x += vx;
    y += vy;

    shape.setPosition(x - radius, y - radius);
}

void Player::draw(sf::RenderWindow& window){
    window.draw(shape);
}

void Player::fire(){
    BulletPool::addBullet(x, y);
}

Player::~Player(){
}
