#ifndef HEADER_STUDENT_H_
#define HEADER_STUDENT_H_

#include <iostream>
#include "Dummy.h"
using namespace std;

namespace std{

    class Student : public Dummy{
        friend ostream& operator<<(ostream&, const Student&);

    public:
        Student(string&, int);
        virtual ~Student();

        const int Age() const;
    private:
        int age;

    };
}

#endif
