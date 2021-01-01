// Passing arguments to base class constructor

#include <iostream>

class Base {
    private:
    int value;

    public:
    Base(): value {0} {
        std::cout << "Base class No args constructor : " << this->value << std::endl;
    }

    Base(int value): value {value} {
        std::cout << "Base class overloaded constructor : " << this->value << std::endl;
    }

    ~Base() {
        std::cout << "Base class destructor" << std::endl;
    }

    void ShowBaseData() {
        std::cout << "Base class : " << value << std::endl;
        return;
    }
};

class Derived : public Base {
    
    using Base::Base;

    private:
    int doubled_value;
    
    public:
    Derived() 
        : Base(), doubled_value {0} {
        std::cout << "Derived class no args constructor : " << this->doubled_value << std::endl;
    }
    
    Derived(int value) 
        : Base(value), doubled_value {2 * value} {
        std::cout << "Derived class overloaded constructor : " << this->doubled_value << std::endl;
    }

    ~Derived() {
        std::cout << "Derived class destructor" << std::endl;
    }

    void ShowDerivedData() {
        std::cout << "Base class : " << doubled_value << std::endl;
        return;
    }

};


int main() {

    Base base_obj1;
    Base base_obj2(100);

    Derived derived_obj1;
    Derived derived_obj2(1000);

    return 0;
}