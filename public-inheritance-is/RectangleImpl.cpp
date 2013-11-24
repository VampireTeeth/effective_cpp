#include "RectangleImpl.h"

namespace std{
    RectangleImpl::RectangleImpl(int height, int width) :
        _height(height), _width(width) {}

    RectangleImpl::~RectangleImpl(){}

    void RectangleImpl::height(int height) {
        this->_height = height;
    }

    void RectangleImpl::width(int width) {
        this->_width = width;
    }

    int RectangleImpl::height() const {
        return this->_height;
    }

    int RectangleImpl::width() const {
        return this->_width;
    }
}
