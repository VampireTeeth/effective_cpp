#include <iostream>
#include "Person.h"
#include "Address.h"
#include "Date.h"
#include "Country.h"
using namespace std;

ostream& operator<<(ostream& os, const Person& person){
    Address a = person.address();
    os << "name = " << person.name() << "; address = " << 
        a.streetNum() << ", " << a.streetName() << 
        ", " << a.city() << ", " << a.postcode() << 
        "; " << person.country().name();
    return os;
}


int main(int argc, char** argv) {
    string s("Steven");
    string cn("Australia");
    Address a(28, "Gloucester St.", "Rockdale", 2216);
    Date d;
    Country c(cn);
    Person p(s, d, a, c);
    cout << p << endl; 
    return 0;
}
