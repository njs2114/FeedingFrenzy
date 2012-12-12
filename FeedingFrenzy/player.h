#ifndef PLAYER_H
#define PLAYER_H

#include "boarditem.h"

class Player : public BoardItem
{
public:
    Player();

private:
    const QString SYMBOL;
};

#endif // PLAYER_H
