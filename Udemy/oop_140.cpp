#include <iostream>
#include <vector>
#include <string>

class Account {
    private:
    std::string name_;
    double balance_;

    public:
    void SetName(std::string name) {
        name_ = name;
    }
    
    void SetBalance(double balance) {
        balance_ = balance;
    }

    std::string GetName() {
        return name_;
    }

    double GetBalance() {
        return balance_;
    }

    bool WithDraw(double amount) {
        if ((balance_ - amount) <= 0) {
            return false;
        } else {
            balance_ = balance_ - amount;
            return true;
        }
    }

    bool Deposit(double amount) {
        balance_ = balance_ + amount;
        return true;
    }
};

int main() {

    Account normal_account;
    double normal_balance;
    normal_account.SetName("Krishna");
    normal_account.SetBalance(1000.0);
    std::cout << "1 Name : " << normal_account.GetName() << " Balance : " << normal_account.GetBalance() << std::endl;
    if (normal_account.Deposit(1000.0)) {
        std::cout << "2 Name : " << normal_account.GetName() << " Balance : " << normal_account.GetBalance() << std::endl;
    }
    if (normal_account.WithDraw(500.0)) {
        std::cout << "3 Name : " << normal_account.GetName() << " Balance : " << normal_account.GetBalance() << std::endl;
    } else {
        std::cout << "3 Name : " << normal_account.GetName() << " Balance : " << normal_account.GetBalance() << std::endl;
    }

    Account *ptr_account = new Account();
    ptr_account->SetName("Bannad");
    ptr_account->SetBalance(10.0);
    std::cout << "1 Name : " << ptr_account->GetName() << " Balance : " << ptr_account->GetBalance() << std::endl;
    if (ptr_account->Deposit(10000)) {
        std::cout << "2 Name : " << ptr_account->GetName() << " Balance : " << ptr_account->GetBalance() << std::endl;
    }
    if (ptr_account->WithDraw(5000)) {
        std::cout << "3 Name : " << ptr_account->GetName() << " Balance : " << ptr_account->GetBalance() << std::endl;
    } else {
        std::cout << "3 Name : " << ptr_account->GetName() << " Balance : " << ptr_account->GetBalance() << std::endl;
    }
    

    return 0;
}