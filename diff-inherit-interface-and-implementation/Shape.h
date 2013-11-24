#ifndef HEADER_SHAPE_H_
#define HEADER_SHAPE_H_

namespace std{
    class Shape{
    public:
        virtual void draw() const = 0;
        virtual void error(const string& msg);
        int objectID() const;
    };

    class Rectangle : public Shape{};
    class Ellipse : public Shape{};
}
#endif
