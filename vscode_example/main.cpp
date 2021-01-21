// Operator overloading
// String
// Compare string
// Unary minus - to lower case
// Binary addition - Concatenation

#include "include/mystring.hpp"
#include <vector>
#include <iostream>

int main() {

    std::cout << _IO_BOOLALPHA << std::endl;

    MyString obj_1("King");
    MyString obj_2("Queen");
    obj_1.Display();
    obj_2.Display();

    MyString sum_obj = obj_1 + obj_2;
    sum_obj.Display();

    MyString obj_3 = obj_1;
    sum_obj = obj_3 + " is dead";
    sum_obj.Display();

    // Comparison operator
    std::cout << "===Comparison===" << std::endl;
    bool equality;
    std::cout << (obj_1 == obj_2) << std::endl;
    std::cout << (obj_1 == obj_1) << std::endl;
    std::cout << (obj_1 == obj_2) << std::endl;
    std::cout << (obj_1 == obj_3) << std::endl;
    std::cout << "===Comparison===" << std::endl;

    // Unary minus
    MyString obj_5("JOKER");
    MyString obj_6 = -obj_5;
    obj_6.Display();

    return 0;
}