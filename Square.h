#ifndef SQUARE_H
#define SQUARE_H
#include "IShape.h"

class Square : public IShape
{
public:
    Square(Vec2 _center, double _sideL): center(_center), sideL(_sideL) {}
    Square(const Square& source) { init(source); }
    double area() const { return sideL * sideL; }
    double perimeter() const { return 4 * sideL; }
    void boundingBox(Vec2& leftBot, Vec2& rightTop) const;
private:
    void init(const Square& source);
    Vec2 center;
    double sideL = 0;
};

#endif // SQUARE_H
