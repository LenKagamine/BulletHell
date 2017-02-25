#include "BulletPool.h"
#include <iostream>

#include "Constants.h"
using namespace std;
std::vector<int> BulletPool::valid(5, 0);
std::vector<Bullet> BulletPool::bullets(5);

void BulletPool::update(){
    for(int i=0;i<bullets.size();i++){
        if(valid[i]){
            sf::Vector2f pos = bullets[i].getPosition();
            if(pos.x < -5 || pos.x > WINDOW_WIDTH+5 || pos.y < -5 || pos.y > WINDOW_HEIGHT+5) valid[i] = false;
            else bullets[i].update();
        }
    }
}

void BulletPool::draw(sf::RenderWindow& window){
    for(int i=0;i<bullets.size();i++){
        if(valid[i]) bullets[i].draw(window);
    }
}

void BulletPool::addBullet(double x, double y){
    for(int i=0;i<bullets.size();i++){
        if(!valid[i]){
            valid[i] = 1;
            bullets[i] = Bullet(x, y, 0, -10);
            return;
        }
    }
    valid.push_back(1);
    bullets.push_back(Bullet(x, y, 0, -10));
}
