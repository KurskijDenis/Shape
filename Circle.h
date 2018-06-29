#ifndef CIRCLE_H
#define CIRCLE_H
#include "IShape.h"
#include <math.h>
class Circle : public IShape
{
public:
    Circle(double _radius, Vec2 _position): radius(_radius), position(_position) { }
    Circle(const Circle& source) { init(source); }
    double area() const override { return M_PI * pow(radius, 2); }
    double perimeter() const override { return 2 * M_PI * radius; }
    void boundingBox(Vec2& leftBot, Vec2& rightTop) const override;
private:
    void init(const Circle& source);
    double radius = 0;
    Vec2 position;
};

#endif // CIRCLE_H
