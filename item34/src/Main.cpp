#include <iostream>
#include "Person.h"
using namespace std;

ostream& operator<<(ostream& os, const Person& person){
    os << "name = " << person.name();
}


int main(int argc, char** argv) {
    string s("Steven");
    Date d;
    Address a;
    Country c;
    Person p(s, d, a, c);
    return 0;
}
