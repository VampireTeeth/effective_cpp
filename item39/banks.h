#ifndef HEADER_BANKS_H_
#define HEADER_BANKS_H_
#include <iosfwd>
namespace std{
    class Person{
    public:
        Person(const string& name);
        virtual ~Person();
        string name() const;
    private:
        string _name;

    };

    class BankAccount {
    public:
        BankAccount(const Person* primaryOwner, 
                const Person* jointOwner);
        virtual ~BankAccount();
        virtual void deposit(double amount) = 0;
        virtual void withdraw(double amount) = 0;
        virtual double balance() const = 0;
        virtual const Person* primaryOwner() const;
        virtual const Person* jointOwner() const;
    protected:
        const Person* _primaryOwner;
        const Person* _jointOwner;
    };


    class SavingAccount : public BankAccount {
    public:
        SavingAccount(const Person* primaryOwner,
                const Person* jointOwner);
        ~SavingAccount();

        void deposit(double amount);
        void withdraw(double amount);
        double balance() const;

        void creditInterest();

    private:
        double _balance;

    
    };

}
#endif
