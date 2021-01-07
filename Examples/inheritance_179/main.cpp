#include "savings_account.hpp"
#include "account_util.hpp"

int main() {

    // Normal accounts
    std::vector<Account> accounts;

    accounts.push_back(Account{});
    accounts.push_back(Account{"Tim"});
    accounts.push_back(Account{"Chong", 2000});
    accounts.push_back(Account{"Penga", 3000});

    Display(accounts);
    Deposit(accounts, 2000);
    Withdraw(accounts, 3000);

    // Savings account
    std::vector<SavingsAccount> saving_accounts;

    saving_accounts.push_back(SavingsAccount{});
    saving_accounts.push_back(SavingsAccount{"Dumma"});
    saving_accounts.push_back(SavingsAccount("Tomara", 1000));
    saving_accounts.push_back(SavingsAccount("Tibba", 6000));

    Display(saving_accounts);
    Deposit(saving_accounts, 3000);
    Withdraw(saving_accounts, 5000);

    return 0;
}