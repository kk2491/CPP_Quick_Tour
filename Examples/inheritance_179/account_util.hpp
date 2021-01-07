#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_

#include <vector>
#include "account.hpp"
#include "savings_account.hpp"

// Account
void Display(const std::vector<Account> &accounts);
void Deposit(std::vector<Account> &accounts, double amount);
void Withdraw(std::vector<Account> &accounts, double amount);

// Savings Account
void Display(const std::vector<SavingsAccount> &accounts);
void Deposit(std::vector<SavingsAccount> &accounts, double amount);
void Withdraw(std::vector<SavingsAccount> &accounts, double amount);

#endif