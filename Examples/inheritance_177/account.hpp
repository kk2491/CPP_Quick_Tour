#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

    friend std::ostream &operator<<(std::ostream &os, const Account &account);

    protected:
    double balance;

    public:
    Account();
    Account(double balance);
    ~Account();
    void Deposit(double amount);
    void Withdraw(double amount);
};

#endif // _ACCOUNT_H_
