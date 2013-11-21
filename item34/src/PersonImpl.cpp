#include "PersonImpl.h"
#include "Address.h"
#include "Date.h"
#include "Country.h"
using namespace std;

namespace std {

    PersonImpl::PersonImpl(const string& name, const Date& date, const Address& address, const Country& country):
        name_(name), date_(date), address_(address), country_(country){}

    PersonImpl::~PersonImpl(){}

    const string PersonImpl::name() const{
        return this->name_;
    }

    Date PersonImpl::birthDate() const {
        return this->date_;
    }

    Address PersonImpl::address() const {
        return this->address_;
    }

    Country PersonImpl::country() const {
        return this->country_;
    }

}
