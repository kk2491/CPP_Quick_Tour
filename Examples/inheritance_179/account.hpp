#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {

    friend std::ostream &operator<<(std::ostream &os, const Account &account);

    private:
    // Static - so that it belongs to class rather than each object created
    static constexpr const char *default_name = "Un-named account";
    static constexpr double default_balance = 0.0;

    protected:
    std::string name; 
    double balance;

    public:
    Account(std::string name = default_name, double balance = default_balance);
    // Account(double balance);
    ~Account();
    bool Deposit(double amount);
    bool Withdraw(double amount);
    double GetBalance() const;
};

#endif // _ACCOUNT_H_
