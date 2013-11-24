#ifndef HEADER_RECTANGLE_IMPL_H_
#define HEADER_RECTANGLE_IMPL_H_

namespace std{

    class RectangleImpl {
    public:
        RectangleImpl(int height=0, int width=0);
        virtual ~RectangleImpl();
        virtual void height(int);
        virtual void width(int);
        virtual int height() const;
        virtual int width() const;

    private:
        int _height;
        int _width;

    };
}
#endif
