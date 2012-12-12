#ifndef FRENZY_H
#define FRENZY_H

#include "boarditem.h"
#include "enemy.h"
#include "player.h"

class Frenzy
{
public:
    Frenzy();
    Frenzy(int width, int height);
    ~Frenzy();
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();

private:



};

#endif // FRENZY_H
