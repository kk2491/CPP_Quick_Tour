// Copy operator
// Move operator
// Overloaded = assignment operator

#include <iostream>

class Base {
    private:
    int value;

    public:
    // No args constructor
    Base(): value {0} {
        std::cout << "Base class No args constructor : " << this->value << std::endl;
    }

    // Overloaded constructor with one parameter
    Base(int value): value {value} {
        std::cout << "Base class overloaded constructor : " << this->value << std::endl;
    }

    // Copy constructor
    Base(const Base &other) : value {other.value} {
        std::cout << "Base Copy Constructor" << std::endl;
    }

    // Copy assignment
    Base &operator=(const Base &rhs) {
        std::cout << "Base = operator" << std::endl;
        if (this == &rhs) {
            return *this;
        }
        value = rhs.value;
        return *this;
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

    Derived(const Derived &other) : Base(other), doubled_value {other.doubled_value} {
        std::cout << "Derived Copy Constructor" << std::endl;
        return;
    }

    Derived &operator=(const Derived &rhs) {
        std::cout << "Derived = operator" << std::endl;

        if (this == &rhs) {
            return *this;
        }

        Base::operator=(rhs);
        this->doubled_value = rhs.doubled_value;

        return *this;
    }

    void ShowDerivedData() {
        std::cout << "Base class : " << doubled_value << std::endl;
        return;
    }

};


int main() {

    Base base_obj1(100);
    
    // Assignment
    Base base_obj2;
    base_obj2 = base_obj1;

    // Copy or move constructor
    Base base_obj3(base_obj1);

    std::cout << "==================" << std::endl;

    Derived derived_obj1;
    Derived derived_obj2(derived_obj1);
    Derived derived_obj3;
    derived_obj3 = derived_obj1;

    return 0;
}