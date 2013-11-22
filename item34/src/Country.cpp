#include "Country.h"
using namespace std;

namespace std{
    Country::Country(const string& name):name_(name){}

    Country::~Country(){}

    const string Country::name() const {
        return this->name_;
    }

}
