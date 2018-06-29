#include "Circle.h"

void Circle::boundingBox(Vec2& leftBot, Vec2& rightTop) const {
    leftBot.x = position.x - radius;
    rightTop.x = position.x + radius;
    leftBot.y = position.y - radius;
    rightTop.y = position.y + radius;
}
void Circle::init(const Circle& source) {
    radius = source.radius;
    position = source.position;
}
