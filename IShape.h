#ifndef ISHAPE_H
#define ISHAPE_H

struct Vec2 {
    double x = 0, y = 0;
    Vec2() {}
    Vec2(double _x, double _y): x(_x), y(_y) {}
    Vec2(const Vec2& source) { init(source); }
    Vec2& operator=(const Vec2& source) { init(source);  return *this; }
    void init(const Vec2& source) { x = source.x; y = source.y;}
};

class IShape
{
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void boundingBox(Vec2& leftBot, Vec2& rightTop) const = 0;
};

#endif // ISHAPE_H
