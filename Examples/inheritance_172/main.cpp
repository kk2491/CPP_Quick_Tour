#include "savings_account.hpp"
#include "account.hpp"

int main() {

    Account account_1;
    account_1.Deposit(100);
    account_1.Withdraw(50);

    Account *account_2 = new Account();
    account_2->Deposit(200);
    account_2->Withdraw(10);

    SavingsAccount sa_1;
    sa_1.Deposit(333);
    sa_1.Withdraw(222);

    SavingsAccount *sa_2 = new SavingsAccount();
    sa_2->Deposit(10000);
    sa_2->Deposit(200);


    delete account_2;
    delete sa_2;

    return 0;
}