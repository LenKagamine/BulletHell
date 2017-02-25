#ifndef BULLETPOOL_H
#define BULLETPOOL_H

#include <vector>
#include <SFML/Graphics.hpp>

#include "Bullet.h"

class BulletPool{
    public:
        static int a;
        static std::vector<int> valid;
        static std::vector<Bullet> bullets;

        static void update();
        static void draw(sf::RenderWindow& window);

        static void addBullet(double x, double y);
    protected:
    private:
        BulletPool() {
            std::vector<Bullet> bullets();
        }
};

#endif // BULLETPOOL_H
