
#include "Rectangle.h"
#include "RectangleImpl.h"

namespace std {
    Rectangle::Rectangle(int height, int width) {
        this->impl = new RectangleImpl(height, width);
    }

    Rectangle::~Rectangle() {
        delete this->impl;
    }
    void Rectangle::height(int height) {
        this->impl->height(height);
    }
    void Rectangle::width(int width) {
        this->impl->width(width);
    }

    int Rectangle::height() const{
        return this->impl->height();
    }
    int Rectangle::width() const{
        return this->impl->width();
    }

}
