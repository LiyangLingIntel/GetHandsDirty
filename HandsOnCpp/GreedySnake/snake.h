//
// Created by liyangling on 3/22/20.
//

#include "utils.h"
#include "food.h"
#include <vector>
using namespace std;

#ifndef GREEDYSNAKE_SNAKE_H
#define GREEDYSNAKE_SNAKE_H

class Snake {
public:
    Snake();

    void move();

    void drawSnake();

    void clearSnake();
    bool isSelfCollision();

    bool isAlive();
    bool isFindFood();

    int getLength();
    bool getMode();

    void listenToKeyboard();
    void setMode(bool mode);

    void aiFindPath(const Food& food);
    void aiSpeed();
    void aiMove();

private:
    vector<Coordinate> body;
    int direction;
    bool is_alive;
    bool is_AI;
};

#endif //GREEDYSNAKE_SNAKE_H
