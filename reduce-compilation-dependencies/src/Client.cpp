

#include <iostream>
#include "Dep1.h"
#include "BadDesignHeader.h"
#include "GoodDesignHeader.h"

using namespace std;


ostream& operator<<(ostream& os, const Dep1& dep1) {
    os << "Dep1[value = " << dep1.value() << ", doubleValue = " 
        << dep1.doubleValue() << "]";
    return os;
}

ostream& operator<<(ostream& os, const A& a) {
    os << "A[" << a.dep1() << "]";
    return os;
}

int main(int argc, char** argv) {
    Dep1 dep1(2);
    A a(dep1);
    cout << a << endl;
    return 0;
}
