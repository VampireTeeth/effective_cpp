#include "Person.h"
#include "PersonImpl.h"
#include "Address.h"
#include "Country.h"
#include "Date.h"
using namespace std;

namespace std{

        Person::Person(const string& name, const Date& date, const Address& address, const Country& country) {
            personImpl = new PersonImpl(name, date, address, country);
        }

        Person::~Person(){
            delete personImpl;
        }

        const string Person::name() const {
            return personImpl->name();
        }
        Date Person::birthDate() const {
            return personImpl->birthDate();
        }
        Address Person::address() const {
            return personImpl->address();
        }
        Country Person::country() const {
            return personImpl->country();
        }

    
}
