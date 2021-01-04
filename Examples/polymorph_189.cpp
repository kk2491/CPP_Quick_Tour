// Base Classes references

#include <iostream>

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

void MasterWithdraw(Account &account, double amount) {

    account.Withdraw(amount);

    return;
}

int main() {

    std::cout << "Account Details" << std::endl;

    Account a;
    Account &a_ref = a;
    a_ref.Withdraw(2000);    

    SavingsAccount sa;
    Account &sa_ref = sa;
    sa_ref.Withdraw(200);

    CheckingAccount ca;
    Account &ca_ref = ca;
    ca_ref.Withdraw(40);

    TrustAccount ta;
    Account &ta_ref = ta;
    ta_ref.Withdraw(4000);

    Account aa;
    SavingsAccount saa;
    CheckingAccount caa;
    TrustAccount taa;

    std::cout << "=== 2nd list of test cases ===" << std::endl;

    MasterWithdraw(aa, 1000);
    MasterWithdraw(saa, 1000);
    MasterWithdraw(caa, 1000);
    MasterWithdraw(taa, 1000);

    return 0;
}