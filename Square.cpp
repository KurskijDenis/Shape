#include "Square.h"

void Square::init(const Square& source)
{
    center = source.center;
    sideL = source.sideL;
}
void Square::boundingBox(Vec2& leftBot, Vec2& rightTop) const
{
    leftBot.x = center.x - sideL / 2;
    rightTop.x = center.x + sideL / 2;
    leftBot.y = center.y - sideL / 2;
    rightTop.y = center.y + sideL / 2;
}
