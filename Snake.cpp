//
// Created by jacob on 31/07/17.
//

#include "Snake.h"

Snake::Snake(int startX, int startY) {
    positionX = startX;
    positionY = startY;
}

void Snake::move(Direction direction) {
    switch (direction) {
        case North:
            positionY += 1;
            break;
        case East:
            positionX += 1;
            break;
        case South:
            positionY -= 1;
            break;
        case West:
            positionX -= 1;
            break;
    }
}
