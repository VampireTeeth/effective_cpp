#include <iostream>
#include "banks.h"

std::ostream& operator<<(std::ostream& os, const std::BankAccount* acct) {
    std::cout << "Account[balance = " << acct->balance() <<
        ", primaryOwner = " << acct->primaryOwner()->name() <<
        ", jointOwner = " << acct->jointOwner()->name() <<
        "]";
    return os;
}

int main(int argc, char **argv)
{
    std::Person* p1 = new std::Person("Steven");
    std::Person* p2 = new std::Person("Andrew");
    std::BankAccount* acct1 = new std::SavingAccount(p1, p2);
    std::SavingAccount* sacct1 = static_cast<std::SavingAccount*>(acct1);//Avoid this in your code!!!
    acct1->deposit(250);
    sacct1->creditInterest();
    std::cout << acct1 << std::endl;
    acct1->withdraw(25);
    std::cout << acct1 << std::endl;
    delete acct1;
    delete p2;
    delete p1;
	return 0;
}
