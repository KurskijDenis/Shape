#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "IShape.h"
#include <math.h>

class Triangle: public IShape
{
public:
    double area() const override;
    double perimeter() const override;
    void boundingBox(Vec2& leftBot, Vec2& RightTop) const override;
private:
    Vec2 points[3];
};

#endif // TRIANGLE_H
