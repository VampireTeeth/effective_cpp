
#ifndef HELLWORLD_FUNCTIONS_H_
#define HELLWORLD_FUNCTIONS_H_

#include <iostream>
using namespace std;

namespace std{

    class Dummy{
    friend ostream& operator<<(ostream&, const Dummy&);

    
    public:
        Dummy(string& );
        virtual ~Dummy();
        const string Name() const;
    private:
        string name;
    };

}

#endif
