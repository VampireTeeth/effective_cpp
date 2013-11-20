#include "Student.h"
using namespace std;


namespace std{

    Student::Student(string& name, int age):Dummy(name), age(age){
        cout << "Student::Student(string&, int) called" << endl;
    }

    Student::~Student(){
        cout << "Student::~Student() called" << endl;
    }

    ostream& operator<<(ostream& os, const Student& s) {
        os << "Student[name = " << s.Name() << ", age = " << 
            s.age << "]";
        return os;
    }

    const int Student::Age() const {
        return age;
    }
}
