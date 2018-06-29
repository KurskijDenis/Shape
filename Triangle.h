#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "IShape.h"
#include <math.h>

class Triangle: public IShape
{
public:
    Triangle(const Vec2 points[3]);
    Triangle(const Triangle& source) { init(source); }
    double area() const override;
    double perimeter() const override;
    void boundingBox(Vec2& leftBot, Vec2& rightTop) const override;
private:
    void init(const Triangle& source);
    Vec2 points[3];
};

#endif // TRIANGLE_H
