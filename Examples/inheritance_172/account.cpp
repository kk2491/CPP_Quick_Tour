#include "account.hpp"

Account::Account() 
    : name {"None"}, balance {0.0} {

}

Account::~Account() {

}

void Account::Deposit(double amount) {
    std::cout << "Account deposited with : " << amount << std::endl;
    return;
}

void Account::Withdraw(double amount) {
    std::cout << "Account withdrawn with : " << amount << std::endl;
    return;
}