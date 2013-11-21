#include <string>
#include "Address.h"
using namespace std;


namespace std{
    Address::Address(const int streetNum, const string& streetName, 
            const string& city, const int postcode):
        streetNum_(streetNum), streetName_(streetName), 
        city_(city), postcode_(postcode){}

    Address::~Address() {}

}
