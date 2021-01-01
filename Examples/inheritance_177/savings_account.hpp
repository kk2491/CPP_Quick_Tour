#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "account.hpp"

class SavingsAccount : public Account {

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &saving_account);

    protected:
    double interest_rate;

    public:
    SavingsAccount();
    SavingsAccount(double balance, double interest_rate);
    ~SavingsAccount();
    void Deposit(double amount);
    // void Withdraw(double amount);    // withdraw is inherited
};



#endif // _SAVINGS_ACCOUNT_H_