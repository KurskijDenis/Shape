#include "Rectangle.h"

void Rectangle::init(const Rectangle& source) {
    leftBot = source.leftBot;
    rightTop = source.rightTop;
}
void Rectangle::boundingBox(Vec2& leftBot, Vec2& rightTop) const {
    leftBot = this->leftBot;
    rightTop = this->rightTop;
}
