#include "BadDesignHeader.h"
using namespace std;

namespace std{
    A::A(const Dep1& dep1) : _dep1(dep1){}
    A::~A() {}
    Dep1 A::dep1() const {
        return this->_dep1;
    }
}
