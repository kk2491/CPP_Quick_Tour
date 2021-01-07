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

    std::cout << "==== using int ====" << std::endl;
    std::shared_ptr<int> ptr_1 {new int{100}};
    PrintInt(ptr_1);
    GetCount(ptr_1);    // use_count for ptr_1 = 1
    std::shared_ptr<int> ptr_2 {ptr_1};
    GetCount(ptr_1);    // use_count for ptr_1 = 2
    GetCount(ptr_2);    // use_count for ptr_1 = 2
    std::shared_ptr<int> ptr_3;
    ptr_3 = ptr_2;
    GetCount(ptr_1);    // use_count for ptr_1 = 3
    GetCount(ptr_2);    // use_count for ptr_1 = 3
    GetCount(ptr_3);    // use_count for ptr_1 = 3
    ptr_1.reset();
    GetCount(ptr_1);    // use_count for ptr_1 = 0
    GetCount(ptr_2);    // use_count for ptr_1 = 2
    GetCount(ptr_3);    // use_count for ptr_1 = 2

    ptr_3.reset();
    GetCount(ptr_1);    // use_count for ptr_1 = 0
    GetCount(ptr_2);    // use_count for ptr_1 = 1
    GetCount(ptr_3);    // use_count for ptr_1 = 0

    std::cout << "========== Account ==========" << std::endl;
    std::shared_ptr<Account> acc_1 = std::make_shared<Account>();
    acc_1->Deposit(5000);
    acc_1->Display();
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 1

    std::shared_ptr<Account> acc_2 = std::make_shared<Account>();
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 1
    std::cout << "Acc 2 use count: " << acc_2.use_count() << std::endl;     // use_count = 1

    acc_2 = acc_1;
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 2
    std::cout << "Acc 2 use count: " << acc_2.use_count() << std::endl;     // use_count = 2

    std::shared_ptr<Account> acc_3 = acc_1;
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 3
    std::cout << "Acc 2 use count: " << acc_2.use_count() << std::endl;     // use_count = 3
    std::cout << "Acc 3 use count: " << acc_3.use_count() << std::endl;     // use_count = 3
    
    acc_2.reset();
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 2
    std::cout << "Acc 2 use count: " << acc_2.use_count() << std::endl;     // use_count = 0
    std::cout << "Acc 3 use count: " << acc_3.use_count() << std::endl;     // use_count = 2

    acc_1.reset();
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 0
    std::cout << "Acc 2 use count: " << acc_2.use_count() << std::endl;     // use_count = 0
    std::cout << "Acc 3 use count: " << acc_3.use_count() << std::endl;     // use_count = 1

    acc_3.reset();
    std::cout << "Acc 1 use count: " << acc_1.use_count() << std::endl;     // use_count = 0
    std::cout << "Acc 2 use count: " << acc_2.use_count() << std::endl;     // use_count = 0
    std::cout << "Acc 3 use count: " << acc_3.use_count() << std::endl;     // use_count = 0

    std::cout << "======== Account Test Case 2 ========" << std::endl;
    std::shared_ptr<Account> acc_4 = std::make_shared<Account>(3000);
    std::cout << "Acc 4 use count: " << acc_4.use_count() << std::endl;         // use_count = 1

    {
        std::shared_ptr<Account> acc_5 = acc_4;
        std::cout << "Acc 4 use count: " << acc_4.use_count() << std::endl;     // use_count = 2
        std::cout << "Acc 5 use count: " << acc_5.use_count() << std::endl;     // use_count = 2

        if (true) {
            std::shared_ptr<Account> acc_6 = acc_5;
            std::cout << "Acc 4 use count: " << acc_4.use_count() << std::endl;  // use_count = 3
            std::cout << "Acc 5 use count: " << acc_5.use_count() << std::endl;  // use_count = 3
            std::cout << "Acc 6 use count: " << acc_6.use_count() << std::endl;  // use_count = 3
        }
        std::cout << "Acc 4 use count: " << acc_4.use_count() << std::endl;     // use_count = 2
        std::cout << "Acc 5 use count: " << acc_5.use_count() << std::endl;     // use_count = 2
    }

    std::cout << "Acc 4 use count: " << acc_4.use_count() << std::endl;     // use_count = 1

    std::cout << "=========== Account Vector ===========" << std::endl;
    
    std::shared_ptr<Account> acc_7 = std::make_shared<Account>(2090);
    std::shared_ptr<Account> acc_8 = acc_7;
    
    std::vector<std::shared_ptr<Account>> account_vec;
    account_vec.push_back(std::make_shared<Account>(4939));
    account_vec.push_back(std::make_shared<Account>(449));
    // account_vec.push_back(std::make_shared<Account>(49));

    std::cout << "Acc 7 use count: " << acc_7.use_count() << std::endl;     // use_count = 2
    std::cout << "Acc 8 use count: " << acc_8.use_count() << std::endl;     // use_count = 2

    account_vec.push_back(acc_7);
    account_vec.push_back(acc_8);

    std::cout << "Acc 7 use count: " << acc_7.use_count() << std::endl;     // use_count = 4
    std::cout << "Acc 8 use count: " << acc_8.use_count() << std::endl;     // use_count = 4

    account_vec.clear();

    std::cout << "Acc 7 use count: " << acc_7.use_count() << std::endl;     // use_count = 2
    std::cout << "Acc 8 use count: " << acc_8.use_count() << std::endl;     // use_count = 2


    // std::shared_ptr<Account> ka1 = std::make_shared<SavingsAccount>(100, 200);
    // std::shared_ptr<Account> ka1 = std::make_shared<CheckingAccount>(100, 200);
    // std::shared_ptr<Account> ka1 = std::make_shared<TrustAccount>(100, 200);

    return 0;
}