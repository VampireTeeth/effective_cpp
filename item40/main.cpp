#include <iostream>
#include "contacts.h"

int main(int argc, char **argv)
{
    std::PhoneNumber voiceNumber, faxNumber;
    std::Address addr;
    std::Person p("Steven", addr, voiceNumber, faxNumber);
    std::cout << p.name() << std::endl;
    std::string addrEq = (&addr == &(p.address()) ? "yes" : "no");
    std::cout << "Address equals? " << addrEq << std::endl;
	return 0;
}
