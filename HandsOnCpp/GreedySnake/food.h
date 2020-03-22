//
// Created by liyangling on 3/22/20.
//
#include "utils.h"
#include <vector>
using namespace std;

#ifndef GREEDYSNAKE_FOOD_H
#define GREEDYSNAKE_FOOD_H

class Food {
public:
    Food();
    Food(vector<Coordinate> & positions);
    Food& operator=(const Food&) = delete ;

    void generatePosition();
    void drawFood();
    Coordinate getPosition();

private:
    Coordinate pos;
};

#endif //GREEDYSNAKE_FOOD_H
