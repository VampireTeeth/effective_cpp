#ifndef HEADER_COUTNRY_H_
#define HEADER_COUTNRY_H_

#include <string>
using namespace std;

namespace std{
    class Country{
    public:
        Country(const string& );
        virtual ~Country();
        const string name() const;
    private:
        const string& name_;
 
    };
}
#endif
