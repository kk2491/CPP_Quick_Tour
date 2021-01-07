#include <iostream>
#include <vector>
#include <memory>

class IllegalAccount {
    public:
    IllegalAccount() {}
    ~IllegalAccount() {}

};

class Account {
    private:
    double balance;
    public:
    Account(double balance) : balance {balance} {
        if (balance < 0) {
            throw IllegalAccount();
        }
    }
};

int main() {

    try {
        std::shared_ptr<Account> acc_1 = std::make_shared<Account>(-100);
    }
    catch(const IllegalAccount &ex) {
        std::cout << "Illegal fund - catch the thief" << std::endl;
    }

    std::cout << "Done" << std::endl;
    return 0;
}