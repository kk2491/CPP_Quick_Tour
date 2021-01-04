// Static bindings in all of the cases here

#include <iostream>
#include <memory>
#include <string>

class Base {
    public:
    void SayHello() const {
        std::cout << "I am from Base Class" << std::endl;
        return;
    }
};

class Derived : public Base {
    public:
    void SayHello() const {
        std::cout << "I am from Derived Class" << std::endl;
        return;
    }
};

void Display(const Base &obj) { // Static binding to Base class - because argument is Base
    std::cout << "Greetings  ";
    obj.SayHello();
    return;
}

int main() {

    Base b1;
    b1.SayHello();

    Derived d1;
    d1.SayHello();

    Display(b1);    // Static binding to Base class
    Display(d1);    // Static binding to Base class

    Base *b2 = new Base();
    b2->SayHello();
    Display(*b2);

    Derived *d2 = new Derived();
    d2->SayHello();
    Display(*d2);

    Base *ptr = new Derived();
    ptr->SayHello();
    Display(*ptr);

    std::unique_ptr<Base> u_ptr = std::make_unique<Derived>();
    u_ptr->SayHello();

    delete ptr;
    
    return 0;
}