#include <iostream>
#include "AirLine.h"

int main(int argc, char **argv)
{
    std::string s("Kings smith sydney international airport");
    std::AirPlane* a1 = new std::ModelA();
    std::AirPlane* b1 = new std::ModelB();
    std::AirPlane* c1 = new std::ModelC();
    std::Airport* dest = new std::Airport(s);
    a1->fly(*dest);
    b1->fly(*dest);
    c1->fly(*dest);
    delete dest;
    delete c1;
    delete b1;
    delete a1;
	return 0;
}
