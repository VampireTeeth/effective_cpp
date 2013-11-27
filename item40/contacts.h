#ifndef HEADER_CONTACTS_H_
#define HEADER_CONTACTS_H_
#include <string>

namespace std{
    class Address{

    };
    class PhoneNumber{};

    class Person{
        public:
            Person(const string&, Address&, PhoneNumber&, PhoneNumber&);
            virtual ~Person();
            void name(const string&);
            const string name() const;
            void address(Address&);
            const Address& address() const; 
            void voiceNumber(PhoneNumber&);
            const PhoneNumber& voiceNumber() const;
            void faxNumber(PhoneNumber&);
            const PhoneNumber& faxNumber() const;

        private:
            string _name;
            Address& _address;
            PhoneNumber& _voiceNumber;
            PhoneNumber& _faxNumber;
    };

}
#endif
