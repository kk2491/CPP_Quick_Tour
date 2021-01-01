#include <iostream>

class Base {
    public:
    
    Base() {
        std::cout << "Base Class Constructor" << std::endl;
    }

    ~Base() {
        std::cout << "Base Class Destructor" << std::endl;
    }
};

class Derived : public Base {
    public:
    
    Derived() {
        std::cout << "Derived Class Constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived Class Destructor" << std::endl;
    }
};

int main() {
    Base base_object;
    Derived derived_object;
    return 0;
}