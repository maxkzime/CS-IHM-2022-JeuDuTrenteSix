#include "game.h"

Game::Game() : itsSum(0)
{}

int Game::addNumber()
{
    int randVal = QRandomGenerator::global()->bounded(1,7);

    itsSum += randVal;

    if(itsSum > 36)
        reset();

    return randVal;
}

bool Game::equalsThirtySix()
{
    return itsSum == 36;
}

int Game::getSum()
{
    return itsSum;
}

void Game::reset()
{
    itsSum = 0;
}
