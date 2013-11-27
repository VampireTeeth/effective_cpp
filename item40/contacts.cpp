#include "contacts.h"

namespace std{

    Person::Person(const string& name, Address& address, 
            PhoneNumber& voiceNumber, PhoneNumber& faxNumber):
        _name(name), _address(address),
        _voiceNumber(voiceNumber),
        _faxNumber(faxNumber){}

    Person::~Person(){}

    void Person::name(const string& name){
        this->_name = name;
    }

    const string Person::name() const {
        return this->_name;
    }

    void Person::address(Address& address) {
        this->_address = address;
    }

    const Address& Person::address() const {
        return this->_address;
    }

    void Person::voiceNumber(PhoneNumber& voiceNumber) {
        this->_voiceNumber = voiceNumber;
    }

    const PhoneNumber& Person::voiceNumber() const {
        return this->_voiceNumber;
    }

    void Person::faxNumber(PhoneNumber& faxNumber){
        this->_faxNumber = faxNumber;
    }

    const PhoneNumber& Person::faxNumber() const {
        return this->_faxNumber;
    }

}
