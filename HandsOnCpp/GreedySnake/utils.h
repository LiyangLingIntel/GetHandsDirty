//
// Created by liyangling on 3/22/20.
//

#ifndef GREEDYSNAKE_UTILS_H
#define GREEDYSNAKE_UTILS_H

typedef struct {
    int x;
    int y;
} Coordinate;

class GameSettings {
public:
    static void gameInit();

    static const int window_height;
    static const int window_width;
};

class Info {
public:
    static void drawChoiceInfo();
    static void drawMap();
    static void drawScore();
    static void drawHelp();
    static void drawEnding();
};


#endif //GREEDYSNAKE_UTILS_H
