#ifndef HEADER_BAD_DESIGN_H_
#define HEADER_BAD_DESIGN_H_

#include "Dep1.h"
using namespace std;

namespace std{
    class A{

    public:
        A(const Dep1&);
        virtual ~A();
        Dep1 dep1() const;
    private:
        Dep1 _dep1;

    };
}
#endif
