#ifndef GAME_H
#define GAME_H

#include <QRandomGenerator>

class Game
{

private:
    int itsSum;

public:
    Game();
    int addNumber();
    bool equalsThirtySix();
    int getSum();
    void reset();

};

#endif // GAME_H
