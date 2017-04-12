#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>

#include "Constants.h"
#include "BulletPool.h"
#include "Stage.h"
#include "Bullet.h"
using namespace std;

int main(){
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Danmaku Engine");
    window.setFramerateLimit(60);

    Stage stage = Stage();

    while(window.isOpen()){ //game loop
        sf::Event event;

        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear();

        //Update
        stage.update();
        BulletPool::update();

        //Draw
        stage.draw(window);
        BulletPool::draw(window);

        window.display();
    }

    return 0;
}
