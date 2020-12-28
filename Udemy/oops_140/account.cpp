#include <account.hpp>

void Account::SetName(std::string name) {
    name_ = name;
}

void Account::SetBalance(double balance) {
    balance_ = balance;
}

std::string Account::GetName() {
    return name_;
}

double Account::GetBalance() {
    return balance_;
}

bool Account::WithDraw(double amount) {
    if ((balance_ - amount) <= 0) {
        return false;
    } else {
        balance_ = balance_ - amount;
        return true;
    }
}

bool Account::Deposit(double amount) {
    balance_ = balance_ + amount;
    return true;
}