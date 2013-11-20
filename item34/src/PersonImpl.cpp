#include "PersonImpl.h"
using namespace std;

namespace std {

    PersonImpl::PersonImpl(const string& name, const Date& date, const Address& address, const Country& country):
        name_(name), date_(date), address_(address), country_(country){}
    PersonImpl::~PersonImpl(){}

    const string PersonImpl::name() const{
        return name_;
    }

    Date PersonImpl::birthDate() const {
        return date_;
    }

    Address PersonImpl::address() const {
        return address_;
    }

    Country PersonImpl::country() const {
        return country_;
    }

}
