#include "Dummy.h"
using namespace std;

namespace std{

    ostream& operator<<(ostream& os, const Dummy& dummy){
        cout << "Dummy[name=" << dummy.name << "]";
        return os;
    }

    Dummy::Dummy(string& name):name(name) {
        cout << "Dummy::Dummy(string&) called" << endl;
    }

    Dummy::~Dummy() {
        cout << "Dummy::~Dummy() called" << endl;
    }

    const string Dummy::Name() const {
        return name;
    }

}
