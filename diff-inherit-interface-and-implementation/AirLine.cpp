#include <iostream>
#include "AirLine.h"

namespace std{
    Airport::Airport(std::string& name):_name(name) {
        std::cout << "Airport::Airport(const string&) called" << std::endl;
    }

    Airport::~Airport(){
        std::cout << "Airport::~Airport() called" << std::endl;
    }

    const std::string& Airport::name() const{
        return this->_name;
    }

    AirPlane::AirPlane() {
        std::cout << "AirPlane::AirPlane() called" << std::endl;
    }

    AirPlane::~AirPlane() {
        std::cout << "AirPlane::~AirPlane() called" << std::endl;
    }

    void AirPlane::fly(const Airport& destination) {
        std::cout << "Default flying to " << destination.name() << std::endl;
    }

    void ModelA::fly(const Airport& destination) {
        this->AirPlane::fly(destination);
    }

    void ModelB::fly(const Airport& destination) {
        this->AirPlane::fly(destination);
    }

    void ModelC::fly(const Airport& destination) {
        std::cout << "ModelC flying to " << destination.name() << std::endl;
    }

}
