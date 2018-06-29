#include "Circle.h"

void Circle::boundingBox(Vec2& leftBot, Vec2& RightTop) const {
    leftBot.x = position.x - radius;
    RightTop.x = position.x + radius;
    leftBot.y = position.y - radius;
    RightTop.y = position.y + radius;
}
