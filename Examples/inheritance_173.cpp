#include <iostream>
#include <vector>

class Base {
    
    public:
    int a = 0;
    void DisplayBase() {
        std::cout << "Base a : " << a << " b : " << " c : " << c << std::endl; 
    }

    protected:
    int b = 0;

    private:
    int c = 0;

};

class Derived : public Base {

    public:
    int derived_a;

    void DisplayDerived() {
        // std::cout << "Derived a : " << a << " b : " << " c : " << c << std::endl;
    }

    void AccessBaseMembers() {
        a = 100;    // Accessible
        b = 200;    // Accessible
        // c = 300;    // Not Accessible
    }

    protected:
    int derived_b;

    private:
    int derived_c;

};


int main() {

    Base base_object;
    int a = base_object.a;  // Accessible
    // int b = base_object.b;  // Not accessible
    // int c = base_object.c;  // Not accessible

    Derived derived_object;
    int d = derived_object.a;
    // int e = derived_object.b;   // Not accessible
    // int f = derived_object.c;   // Not accessible

    return 0;

}
