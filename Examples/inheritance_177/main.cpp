#include "savings_account.hpp"

int main() {

    std::cout << "Account Details" << std::endl;
    Account account_1(1000.0);
    std::cout << account_1 << std::endl;

    account_1.Deposit(500);
    std::cout << account_1 << std::endl;

    account_1.Withdraw(5000);
    std::cout << account_1 << std::endl;

    std::cout << "Saving Account Details" << std::endl;
    
    SavingsAccount saving_account_1(5000.0, 5.0);
    std::cout << saving_account_1 << std::endl;

    saving_account_1.Deposit(2000);     // This function is in Derived class - Specilized function
    std::cout << saving_account_1 << std::endl;

    saving_account_1.Withdraw(1000);
    std::cout << saving_account_1 << std::endl;

    saving_account_1.Deposit(100);
    std::cout << saving_account_1 << std::endl;

    saving_account_1.Withdraw(10000);
    std::cout << saving_account_1 << std::endl;

    return 0;
}