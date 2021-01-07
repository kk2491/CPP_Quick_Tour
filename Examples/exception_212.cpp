#include <iostream>
#include <vector>
#include <memory>
#include <string>

class IllegalAccount : public std::exception {
    public:
    IllegalAccount() noexcept = default;
    ~IllegalAccount() = default;

    virtual const char* what() const noexcept {
        return "Illegal balance";
    }
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
        std::cout << ex.what() << std::endl;
    }

    std::cout << "Done" << std::endl;
    return 0;
}