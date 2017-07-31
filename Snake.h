//
// Created by jacob on 31/07/17.
//

#ifndef SNAKE_CPP_SNAKE_H
#define SNAKE_CPP_SNAKE_H

enum Direction { North, East, South, West };

class Snake {
public:
    Snake(int startX, int startY);
    void move(Direction direction);

private:
    int positionX;
    int positionY;
};


#endif //SNAKE_CPP_SNAKE_H
