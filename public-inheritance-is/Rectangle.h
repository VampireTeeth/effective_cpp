#ifndef HEADER_RECTANGLE_H_
#define HEADER_RECTANGLE_H_

namespace std{
    class RectangleImpl;

    class Rectangle {
    public:
        Rectangle(int height = 0, int width = 0);
        virtual ~Rectangle();
        virtual void height(int);
        virtual void width(int);
        virtual int height() const;
        virtual int width() const;

    private:
        RectangleImpl* impl;

    };
}
#endif
