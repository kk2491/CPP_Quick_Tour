#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

    std::string name;
    double balance;

    public:
    void Deposit(double amount);
    void Withdraw(double amount);
    Account();
    ~Account();
};

#endif // _ACCOUNT_H_
