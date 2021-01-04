// Using final specifier

#include <iostream>

class Base final {
    public:
    void Display() {
        std::cout << "final in class - Base Class" << std::endl;
    }
};

// ERROR : error: cannot derive from ‘final’ base ‘Base’ in derived type ‘Derived
// class Derived : public Base {
//     public:
//     void Display() {
//         std::cout << "final in class - Derived Class" << std::endl;
//     }
// };

class A {
    public:
    virtual void Display() const;
};

class B : public A {
    public:
    virtual void Display() const final;
};

// ERROR : error: overriding final function ‘virtual void B::Display() const’
// class C : public B {
//     public:
//     virtual void Display() const;
// };

int main() {

    return 0;
}