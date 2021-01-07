#include "savings_account.hpp"

// SavingsAccount::SavingsAccount() : SavingsAccount(0, 0) {
//     std::cout << "Savings account - no args constructor" << std::endl;
// }

SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate) : Account(name, balance), interest_rate {interest_rate} {
    std::cout << "Savings account - overloaded constructor" << std::endl;
}

SavingsAccount::~SavingsAccount() {}

bool SavingsAccount::Deposit(double amount) {
    // std::cout << "Savings account deposited with : " << amount << std::endl;
    amount = amount + (amount * interest_rate) / 100.0;
    return Account::Deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &sa) {
    os << "Savings Account name : " << sa.name <<"  Savings account balanace : " << sa.balance << "  Interest rate : " << sa.interest_rate << std::endl;
    return os;
}

// Withdraw method is inherited from the base class
