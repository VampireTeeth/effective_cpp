#ifndef HEADER_SHAPES_H_
#define HEADER_SHAPES_H_
namespace std{

    enum ShapeColor{RED, GREEN, BLUE };

    class Shape{
    public:
        virtual void draw(ShapeColor color = RED) const = 0;
        virtual ~Shape();
    };

    class Rectangle : public Shape{
    public:
        virtual void draw(ShapeColor color = GREEN) const;
        virtual ~Rectangle();
    };

    class Square : public Shape {
    public:
        virtual void draw(ShapeColor color = BLUE) const;
        virtual ~Square();
    };
}
#endif
