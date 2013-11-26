
#include <iostream>
#include "banks.h"

namespace std{

    Person::Person(const string& name):_name(name){
        cout << "Person::Person() called" << endl;
    }

    Person::~Person(){
        cout << "Person::~Person() called" << endl;
    }

    string Person::name() const {
        return this->_name;
    }

    BankAccount::BankAccount(const Person* primaryOwner, const Person* jointOwner):
        _primaryOwner(primaryOwner), _jointOwner(jointOwner){
        cout << "BankAccount::BankAccount() called" << endl;
    }

    BankAccount::~BankAccount(){
        cout << "BankAccount::~BankAccount() called" << endl;
    }

    const Person* BankAccount::primaryOwner() const {
        return this->_primaryOwner;
    }

    const Person* BankAccount::jointOwner() const {
        return this->_jointOwner;
    }

    SavingAccount::SavingAccount(const Person* primaryOwner, const Person* jointOwner):
        BankAccount::BankAccount(primaryOwner, jointOwner),
        _balance(0){
        cout << "SavingAccount::SavingAccount() called" << endl;
    }

    SavingAccount::~SavingAccount(){
        cout << "SavingAccount::~SavingAccount() called" << endl;
    }

    void SavingAccount::deposit(double amount) {
        this->_balance += amount;
        cout << "SavingAccount::depeosit() called on object[" << this <<"]" << endl;
    }

    void SavingAccount::withdraw(double amount) {
        if(amount > this->_balance) {
            cerr << "You cannot withdraw amount that is more than your balance" << endl;
            return;
        }
        this->_balance -= amount;
        cout << "SavingAccount::withdraw() called on object[" << this <<"]" << endl;
    }

    double SavingAccount::balance() const {
        cout << "SavingAccount::balance() called on object[" << this <<"]" << endl;
        return this->_balance;
    }

    void SavingAccount::creditInterest() {
        this->_balance += this->_balance * 0.05;
        cout << "SavingAccount::creditInterest() called on object[" 
            << this <<"]" << endl;
    }
}
