#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(const Vec2 _leftBot, const Vec2 _rightTop): leftBot(_leftBot), rightTop(_rightTop) {}
    Rectangle(const Rectangle& source) { init(source); }
    double area() const { return (rightTop.x - leftBot.x) * (rightTop.y - leftBot.y); }
    double perimeter() const { return 2 * ((rightTop.x - leftBot.x) + (rightTop.y - leftBot.y)); }
    void boundingBox(Vec2& leftBot, Vec2& rightTop) const;
private:
    void init(const Rectangle& source);
    Vec2 leftBot, rightTop;
};

#endif // RECTANGLE_H
