// Dynamic polymorphism 
// Virtual functions
// override keyword

#include <iostream>
#include <vector>

class Account {
    public:
    virtual void Display(double amount) const {
        std::cout << "Account withdraw" << std::endl;
    }
    virtual ~Account() {
        std::cout << "Account Destructor" << std::endl;
    }
};

class SavingsAccount : public Account {
    public:
    virtual void Display(double amount) {
        std::cout << "Savings Account withdraw" << std::endl;
    }

    // Signature is not matching - but still no error - statically binded - redefined
    // virtual void Display(double amount) {
    //     std::cout << "Savings Account withdraw" << std::endl;
    // }

    // Error - cannot be overloaded
    virtual void Display(double amount) const override {
        std::cout << "Savings Account withdraw" << std::endl;
    }

    // virtual void Display(double amount) const override {
    //     std::cout << "Savings Account withdraw" << std::endl;
    // }

    virtual ~SavingsAccount() {
        std::cout << "Savings Account Destructor" << std::endl;
    }
};

int main() {

    std::cout << "Account Details" << std::endl;

    Account *p1 = new Account();
    Account *p2 = new SavingsAccount();

    p1->Display(100);
    p2->Display(300);

    std::cout << "Delete pointers" << std::endl;
    delete p1;
    delete p2;

    return 0;
}