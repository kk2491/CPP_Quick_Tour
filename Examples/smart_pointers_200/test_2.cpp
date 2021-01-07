// Shared pointer

#include <iostream>
#include <memory>
#include <vector>

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


void PrintInt(std::shared_ptr<int> &ptr) {
    std::cout << "Data : " << *ptr << std::endl;
    return;
}

void GetCount(std::shared_ptr<int> &ptr) {
    std::cout << "Count : " << ptr.use_count() << std::endl;
    return;
}



int main() {

    std::shared_ptr<Account> acc_1 = std::make_shared<Account>(2000);

    

    return 0;
}