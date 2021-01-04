// Dynamic polymorphism 
// Virtual functions
// With virtual destructors (not virtual destructors)

#include <iostream>
#include <vector>

class Account {
    public:
    virtual void Withdraw(double amount) {
        std::cout << "Account withdraw" << std::endl;
    }
    virtual ~Account() {
        std::cout << "Account Destructor" << std::endl;
    }
};

class SavingsAccount : public Account {
    public:
    virtual void Withdraw(double amount) {
        std::cout << "Savings Account withdraw" << std::endl;
    }
    virtual ~SavingsAccount() {
        std::cout << "Savings Account Destructor" << std::endl;
    }
};

class CheckingAccount : public Account {
    public:
    virtual void Withdraw(double amount) {
        std::cout << "Checking Account withdraw" << std::endl;
    }
    virtual ~CheckingAccount() {
        std::cout << "Checking Account Destructor" << std::endl;
    }
};

class TrustAccount : public Account {
    public:
    virtual void Withdraw(double amount) {
        std::cout << "Trust Account withdraw" << std::endl;
    }
    virtual ~TrustAccount() {
        std::cout << "Trust Account Destructor" << std::endl;
    }
};

int main() {

    std::cout << "Account Details" << std::endl;

    Account *p1 = new Account();
    Account *p2 = new SavingsAccount();
    Account *p3 = new CheckingAccount();
    Account *p4 = new TrustAccount();

    p1->Withdraw(100);
    p2->Withdraw(300);
    p3->Withdraw(200);
    p4->Withdraw(500);

    std::cout << "Delete pointers" << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}