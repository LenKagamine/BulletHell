#include "Stage.h"
#include <iostream>

Stage::Stage(){
    player = Player(480, 650);

    int enemyNum = 1000;
    enemies = std::vector<Enemy>(enemyNum);
    enemyDelay = std::vector<double>(enemyNum);
    for(int i=0;i<enemies.size();i++){
        enemies[i] = Enemy(rand() % 960, -10, 0, 5);
        enemyDelay[i] = 5000/(i+1);
    }
    enemyStart = 0;
    enemyEnd = 0;
}

void Stage::update(){
    player.update();

    if(enemies.size() > 0){
        double elapsed = enemyClock.getElapsedTime().asMilliseconds();
        while(enemyEnd < enemies.size() && enemyDelay[enemyEnd] < elapsed){
            enemyClock.restart();
            elapsed = 0;
            enemyEnd++;
        }
        for(int i=enemyStart;i<enemyEnd;i++){
            enemies[i].update();
        }
        if(enemies[enemyStart].done == true){
            enemyStart++;
        }
    }
}

void Stage::draw(sf::RenderWindow& window){
    player.draw(window);
    for(int i=0;i<enemies.size();i++){
        enemies[i].draw(window);
    }
}

Stage::~Stage(){
}
