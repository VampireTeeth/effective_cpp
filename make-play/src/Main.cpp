#include "Dummy.h"
#include "Student.h"
using namespace std;

int main(int argc, char** argv) {
    string name("steven");
    Dummy d(name);

    Student s(name, 28);

    cout << d << endl;
    cout << s << endl;
    cout << "Hello, world!" << endl;
    return 0;
}

