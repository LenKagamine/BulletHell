#ifndef STAGE_H
#define STAGE_H

#include <SFML/Graphics.hpp>
#include <vector>

#include "Player.h"
#include "Enemy.h"

class Stage {
    public:
        sf::Clock enemyClock;
        Player player;
        std::vector<Enemy> enemies;
        std::vector<double> enemyDelay;
        int enemyStart, enemyEnd;
        // Background image
        // sf::Texture, sf::Sprite
        // Audio
        // sf::Music bgm;

        Stage();
        //later add parameter to stage data file
        //to load data about stage
        //will prevent having multiple classes
        //for several stages

        void update();
        void draw(sf::RenderWindow& window);

        virtual ~Stage();
    protected:
    private:
};

#endif // STAGE_H
