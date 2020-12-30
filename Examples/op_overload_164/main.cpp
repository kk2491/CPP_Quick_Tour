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
    std::cout << "Data : " << obj_1 << std::endl;

    MyString obj_2;
    std::cin >> obj_2;
    std::cout << "Data : " << obj_2 << std::endl;

    MyString obj_3("Who ");
    MyString obj_4("are ");
    MyString obj_5("you?");
    std::cout << "Data : " << obj_3 << obj_4 << obj_5 << std::endl;

    MyString obj_6, obj_7, obj_8;
    std::cin >> obj_6 >> obj_7 >> obj_8;
    std::cout << "Data : " << obj_6 << obj_7 << obj_8 << std::endl;

    return 0;
}