#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

enum class ShapeType { Circle = 0, Rectangle, Triangle, Square };
class ShapeFactory
{
public:
    static IShape* createCircle(double radius, Vec2 position) { return new Circle(radius, position); }
    static IShape* createRectangle(const Vec2& leftBot, const Vec2& rightTop) { return new Rectangle(leftBot, rightTop); }
    static IShape* createSquare(const Vec2& position, double length) { return new Square(position, length); }
    static IShape* createTriangle(Vec2 points[3]) { return new Triangle(points); }
};

#endif // SHAPEFACTORY_H
