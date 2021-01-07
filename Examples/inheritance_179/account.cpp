#include "account.hpp"

// Account::Account() : balance {0.0} {
//     std::cout << "Account no args constructor" << std::endl;
// }

Account::Account(std::string name, double balanace) : name {name}, balance {balanace} {
    std::cout << "Account overloaded constructor" << std::endl;
}

Account::~Account() {}

bool Account::Deposit(double amount) {
    if (amount < 0) {
        return false;
    } else {
        balance = balance + amount;
        return true;
    }
}

bool Account::Withdraw(double amount) {
    if (balance - amount >= 0) {
        balance = balance - amount;
        return true;
    } else {
        // std::cout << "Insufficient Funds" << std::endl;
        return false;
    }
}

double Account::GetBalance() const {
    return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "Account Name : "<< account.name << " Account Balance : " << account.balance;
    return os;
}
