#ifndef HEADER_PERSON_H_
#define HEADER_PERSON_H_

#include <string>
using namespace std;
namespace std{

    class Date;
    class Address;
    class Country;
    class PersonImpl;
    
    class Person{
    public:
        Person(const string& name, const Date& date, const Address& address, const Country& country);
        virtual ~Person();

        virtual const string name() const;
        virtual Date birthDate() const;
        virtual Address address() const;
        virtual Country country() const;
    private:
        PersonImpl* personImpl;
    };
}
#endif
