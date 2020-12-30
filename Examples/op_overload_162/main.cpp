// Operator overloading
// String
// Compare string
// Unary minus - to lower case
// Binary addition - Concatenation

#include "mystring.hpp"
#include <vector>
#include <iostream>

int main() {

    MyString obj_1("King");
    MyString obj_2("Queen");
    
    MyString obj_3 = obj_1;
    MyString obj_4("Queen");

    obj_1.Display();
    obj_2.Display();
    obj_3.Display();
    obj_4.Display();

    // Comparison operator
    std::cout << "===Comparison===" << std::endl;
    std::cout << (obj_1 == obj_2) << std::endl;
    std::cout << (obj_1 == obj_3) << std::endl;
    std::cout << (obj_4 == obj_2) << std::endl;
    std::cout << (obj_1 == obj_4) << std::endl;
    std::cout << "===Comparison===" << std::endl;

    // Unary minus
    MyString obj_5("JOKER");
    MyString obj_6 = -obj_5;
    obj_6.Display();

    // Binary Addition
    MyString obj_7;
    obj_7 = obj_1 + obj_2;
    obj_7.Display();
    
    MyString obj_8;
    obj_8 = obj_1 + obj_2 + obj_6;
    obj_8.Display();

    MyString obj_9 = obj_1 + " will die";
    obj_9.Display();

    return 0;
}