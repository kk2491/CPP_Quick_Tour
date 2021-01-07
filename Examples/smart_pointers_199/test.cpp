#include <iostream>
#include <memory>

class Account {
    private:
    double balance;

    public:
    Account(double balance = 0) : balance {balance}{
        std::cout << "Constructor" << std::endl;
    }
    void Withdraw(double amount) {
        if (balance >= amount){
            balance = balance - amount;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
        return;
    }

    void Deposit(double amount) {
        balance = balance + amount;
        return;
    }

    void Display() {
        std::cout << "Current balance : " << balance << std::endl;
        return;
    }

    ~Account() {
        std::cout << "Destructor called " << std::endl;
    }
};


int main() {

    std::unique_ptr<Account> account_3 = std::make_unique<Account>(555);
    account_3->Display();
    account_3->Deposit(3000);
    account_3->Display();
    account_3->Withdraw(6000);
    account_3->Display();

    std::unique_ptr<Account> account_4 = std::move(account_3);

    return 0;
}