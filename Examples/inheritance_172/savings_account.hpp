#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "account.hpp"

class SavingsAccount : public Account {

    public:
    double interest_rate;
    SavingsAccount();
    ~SavingsAccount();
    void Deposit(double amount);
    void Withdraw(double amount);
};



#endif // _SAVINGS_ACCOUNT_H_