#include "Triangle.h"
#include <algorithm>
using namespace std;

double Triangle::area() const {
    return abs(points[0].x * points[1].y + points[1].x * points[2].y + points[0].y * points[2].x -
            points[2].x * points[1].y - points[1].x * points[0].y - points[0].x * points[2].y) / 2.0;
}
double Triangle::perimeter() const {
    double p = 0;
    for (int i1 = 0, i2 = 1; i1 < 3; i1++, i2 = (i2 + 1) % 3 ) {
        p += sqrt(pow(points[i2].x - points[i1].x, 2) + pow(points[i2].y - points[i1].y, 2));
    }
    return p;
}
void Triangle::boundingBox(Vec2& leftBot, Vec2& RightTop) const {
    leftBot.x = min(points[0].x, min(points[1].x, points[2].x));
    RightTop.x = max(points[0].x, max(points[1].x, points[2].x));
    leftBot.y = min(points[0].y, min(points[1].y, points[2].y));
    RightTop.y = max(points[0].y, max(points[1].y, points[2].y));
}
