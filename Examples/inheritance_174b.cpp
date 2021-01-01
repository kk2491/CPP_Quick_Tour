// Derived object(100);

// without Base::Base:: and with overloaded constructor
//     Derived derived_obj(1000) - initialize Derived class constructor

// with Base::Base:: and without overloaded constructor
//     Derived derived_obj(1000) - initialize Base class constructor but derived class initialization is not done

// with Base::Base:: and witho overloaded constructor
//     Derived derived_obj(1000) - initialize Derived class constructor but no args constructor is called in base class



#include <iostream>

class Base {
    private:
    int value;

    public:
    Base()
        : value {0} {
        std::cout << "Base class No args constructor" << std::endl;
    }

    Base(int value)
        : value {value} {
        std::cout << "Base class overloaded constructor" << std::endl;
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
        : doubled_value {0} {
        std::cout << "Derived class no args constructor" << std::endl;
    }
    
    Derived(int value) 
        : doubled_value {2 * value} {
        std::cout << "Derived class overloaded constructor" << std::endl;
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

    // Base base_obj1;
    // Base base_obj2(100);

    Derived derived_obj1;
    Derived derived_obj2(1000);

    return 0;
}