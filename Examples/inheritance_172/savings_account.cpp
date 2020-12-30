#include "savings_account.hpp"

SavingsAccount::SavingsAccount()
    : interest_rate {0.0} {

}

SavingsAccount::~SavingsAccount() {

}

void SavingsAccount::Deposit(double amount) {
    std::cout << "Savings account deposited with : " << amount << std::endl;
    return;
}

void SavingsAccount::Withdraw(double amount) {
    std::cout << "Savings account withdrawn with : " << amount << std::endl;
    return;
}