#include "account_util.hpp"

// Account
void Display(const std::vector<Account> &accounts) {
    std::cout << "Accounts" << std::endl;
    for (const auto &account : accounts) {
        std::cout << account << std::endl;
    }
}

void Deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "Depositing to accounts" << std::endl;
    for (auto &account : accounts) {
        if (account.Deposit(amount)) {
            std::cout << "Deposited amount " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << account << std::endl;
        }
    }
}

void Withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "Withdrawing from accounts" << std::endl;
    for (auto &account : accounts) {
        if (account.Withdraw(amount)) {
            std::cout << "Withdrawn amount " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed withdraw of " << amount << " to " << account << std::endl;
        }
    }    
}

// Savings Account
void Display(const std::vector<SavingsAccount> &accounts) {
    std::cout << "Saving Accounts" << std::endl;
    for (const auto &account : accounts) {
        std::cout << account << std::endl;
    }
}

void Deposit(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "Depositing to accounts" << std::endl;
    for (auto &account : accounts) {
        if (account.Deposit(amount)) {
            std::cout << "Deposited amount " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed Deposit of " << amount << " to " << account << std::endl;
        }
    }
}

void Withdraw(std::vector<SavingsAccount> &accounts, double amount) {
    std::cout << "Withdrawing from accounts" << std::endl;
    for (auto &account : accounts) {
        if (account.Withdraw(amount)) {
            std::cout << "Withdrawn amount " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed withdraw of " << amount << " to " << account << std::endl;
        }
    }    
}
