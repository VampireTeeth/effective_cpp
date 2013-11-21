#ifndef HEADER_ADDRESS_H_
#define HEADER_ADDRESS_H_

#include <string>
using namespace std;

namespace std{
    class Address{
    public:
        Address(const int streetNum, const string& streetName, const string& city, const int postcode);
        ~Address();

        int streetNum() const {
            return streetNum_;
        }

        string streetName() const {
            return streetName_;
        }

        string city() const {
            return city_;
        }

        int postcode() const{
            return postcode_;
        }
    private:
        int streetNum_;
        string streetName_;
        string city_;
        int postcode_;
    };
}
#endif
