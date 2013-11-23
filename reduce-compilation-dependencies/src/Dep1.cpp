#include "Dep1.h"


namespace std{

    Dep1::Dep1(int value) : _value(value){}

    Dep1::~Dep1(){}

    int Dep1::value() const {
        return this->_value;
    }

    double Dep1::doubleValue() const {
        return this->_value;
    }
}
