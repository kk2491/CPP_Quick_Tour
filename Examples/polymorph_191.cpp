// Abstract classes as Interfaces

#include <iostream>
#include <vector>
#include <ostream>

class IPrintable {
    friend std::ostream &operator<<(std::ostream &os, const IPrintable &obj);

    public:
    virtual void Display(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const IPrintable &obj) {
    obj.Display(os);
    return os;
}

class Account : public IPrintable{
    public:
    virtual void Withdraw() {
        std::cout << "Account : Withdraw" << std::endl;
        return;
    }
    virtual void Display(std::ostream &os) const override {
        os << "Account : Diplay";
        return;
    }
    virtual ~Account() {}
};

class Savings : public Account {
    public:
    virtual void Withdraw() {
        std::cout << "Savings : Withdraw" << std::endl;
        return;
    }
    virtual void Display(std::ostream &os) const override {
        os << "Savings : Display";
        return;
    }
    virtual ~Savings() {}
};

class Checking : public Account {
    public:
    virtual void Withdraw() {
        std::cout << "Checking : Withdraw" << std::endl;
        return;
    }
    virtual void Display(std::ostream &os) const override {
        os << "Checking : Display";
        return;
    }
    virtual ~Checking() {}
};

class Trust : public Account {
    public:
    virtual void Withdraw() {
        std::cout << "Trust : Withdraw" << std::endl;
        return;
    }
    virtual void Display(std::ostream &os) const override {
        os << "Trust : Display";
        return;
    }
    virtual ~Trust() {}
};

class Dog : public IPrintable {
    public:
    virtual void Display(std::ostream &os) const override {
        os << "Bow Bow";
    }
    virtual ~Dog() {}
};

void PrintClass(const IPrintable &obj) {
    std::cout << obj << std::endl;
}

int main () {

    Account *p1 = new Account();        // Dynamic
    Account *p2 = new Savings();        // Dynamic

    std::cout << *p1 << std::endl;      // Dynamic
    std::cout << *p2 << std::endl;      // Dynamic

    Account ac1;
    Savings sa1;
    Trust ta1;
    Checking ca1;
    std::cout << ac1 << std::endl;      // Static
    std::cout << sa1 << std::endl;      // Static
    std::cout << ta1 << std::endl;      // Static
    std::cout << ca1 << std::endl;      // Static

    // New class which is using the interface
    Dog *dog = new Dog();
    std::cout << *dog << std::endl;

    // New global member function
    Dog *bully = new Dog();
    PrintClass(*bully);

    delete p1;
    delete p2;
    delete dog;

    return 0;
}