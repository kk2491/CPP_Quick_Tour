#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
    private:
    std::string name_;
    double balance_;

    public:
    void SetName(std::string name);
    void SetBalance(double balance);
    std::string GetName();
    double GetBalance();
    bool WithDraw(double amount);
    bool Deposit(double amount);

};

#endif