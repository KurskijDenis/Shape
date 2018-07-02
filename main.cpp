#include <QCoreApplication>
#include "ShapeFactory.h"
#include <memory>
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Vec2 points[3] = { Vec2(0, 0), Vec2(5, 0),  Vec2(0, 5) };
    std::vector<std::shared_ptr<IShape>> shapes = { std::shared_ptr<IShape>(ShapeFactory::createCircle(5, Vec2(10, 11))),
                                                    std::shared_ptr<IShape>(ShapeFactory::createRectangle(Vec2(-1, -2), Vec2(10, 11))),
                                                    std::shared_ptr<IShape>(ShapeFactory::createTriangle(points)),
                                                    std::shared_ptr<IShape>(ShapeFactory::createSquare(Vec2(0, 0), 5))
                                                  };


    for (size_t i = 0; i < shapes.size(); i++)
    {
        auto& sh = shapes[i];
        std::cout << "Shape "<< i + 1 << std::endl;
        std::cout << "Area " << sh->area() << std::endl;
        std::cout << "Perimeter " << sh->perimeter() << std::endl;
        Vec2 lb, rt;
        sh->boundingBox(lb, rt);
        std::cout << "BoundingBox x1=" << lb.x << " y1=" << lb.y <<
               " x2=" << rt.x << " y2=" << rt.y << std::endl;

    }

    return a.exec();
}
