#include "account.hpp"

Account::Account() : balance {0.0} {
    std::cout << "Account no args constructor" << std::endl;
}

Account::Account(double balanace) : balance {balanace} {
    std::cout << "Account overloaded constructor" << std::endl;
}

Account::~Account() {}

void Account::Deposit(double amount) {
    balance = balance + amount;
}

void Account::Withdraw(double amount) {
    if (balance - amount >= 0) {
        balance = balance - amount;
    } else {
        std::cout << "Insufficient Funds" << std::endl;
    }
    return;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "Account Balance : " << account.balance;
    return os;
}
