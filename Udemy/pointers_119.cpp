#include <iostream>
#include <typeinfo>

int main() {

    // Address operator
    int num = 0;
    std::cout << "num value   : " << num << std::endl;
    std::cout << "num size    : " << sizeof(num) << std::endl;
    std::cout << "num type    : " << typeid('a').name() << std::endl;
    std::cout << "num address : " << &num << std::endl;
    

    int *pointer;
    std::cout << "pointer value   : " << pointer << std::endl;
    std::cout << "pointer address : " << &pointer << std::endl;
    std::cout << "pointer type    : " << typeid(pointer).name() << std::endl;
    std::cout << "pointer size    : " << sizeof(pointer) << std::endl;

    pointer = nullptr;
    std::cout << "pointer value   : " << pointer << std::endl;
    std::cout << "pointer address : " << &pointer << std::endl;

    double *double_pointer;
    std::cout << "double_pointer value   : " << double_pointer << std::endl;
    std::cout << "double_pointer address : " << &double_pointer << std::endl;
    std::cout << "double_pointer type    : " << typeid(double_pointer).name() << std::endl;
    std::cout << "double_pointer size    : " << sizeof(double_pointer) << std::endl;

    std::cout << " ======================== " << std::endl;
    int ex1 = 100;
    int *ex1_ptr = nullptr;
    ex1_ptr = &ex1;
    std::cout << "Value : " << ex1 << "  Pointer : " << ex1_ptr << "  Pointer pointing to value : " << *ex1_ptr << std::endl;

    int ex2 = 100000;
    ex1_ptr = &ex2;
    std::cout << "Value : " << ex2 << "  Pointer : " << ex1_ptr << "  Pointer pointing to value : " << *ex1_ptr << std::endl;

    int *ex2_ptr = &ex2;
    std::cout << "Value : " << ex2 << "  Pointer : " << ex2_ptr << "  Pointer pointing to value : " << *ex2_ptr << std::endl;

    return 0;
}