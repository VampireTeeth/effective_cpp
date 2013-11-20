#ifndef HEADER_PERSON_IMPL_H_
#define HEADER_PERSON_IMPL_H_

#include <string>
using namespace std;

namespace std{

    class Date{};
    class Address{};
    class Country{};

    class PersonImpl {

    public:
        PersonImpl(const string& name, const Date& date, const Address& address, const Country& country);
        virtual ~PersonImpl();

        virtual const string name() const;
        virtual Date birthDate() const;
        virtual Address address() const;
        virtual Country country() const;

    private:
        const string name_;
        Date date_;
        Address address_;
        Country country_;
    };
}
#endif
