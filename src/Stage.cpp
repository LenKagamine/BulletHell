#include "Stage.h"

Stage::Stage(){
    player = Player(480, 650);
}

void Stage::update(){
    player.update();
}

void Stage::draw(sf::RenderWindow& window){
    player.draw(window);
}

Stage::~Stage(){
}
