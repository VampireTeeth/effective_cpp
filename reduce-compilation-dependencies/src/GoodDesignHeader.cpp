#include "GoodDesignHeader.h"
#include "Dep1.h"
using namespace std;

namespace std{
    B::B(Dep1& dep1) : _dep1(dep1){}
    B::~B() {}
    Dep1& B::dep1() const {
        return this->_dep1;
    }
    void B::dep1(Dep1& dep1) {
        this->_dep1 = dep1;
    }
}
