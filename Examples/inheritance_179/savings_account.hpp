#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "account.hpp"

class SavingsAccount : public Account {

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &saving_account);

    private:
    static constexpr char *default_name = "Un-named savings account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;

    protected:
    double interest_rate;

    public:
    // SavingsAccount();
    SavingsAccount(std::string name = default_name, double balance = default_balance, double interest_rate = default_interest_rate);
    ~SavingsAccount();
    bool Deposit(double amount);
    // void Withdraw(double amount);    // withdraw is inherited
};



#endif // _SAVINGS_ACCOUNT_H_