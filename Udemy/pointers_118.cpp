#include <iostream>
#include <string>

int main() {

    // Garbage pointer
    int *int_pointer;
    double *double_pointer;
    char *char_pointer;
    std::string *string_pointer;
    std::cout << "int_pointer    : " << int_pointer << std::endl;
    std::cout << "double_pointer : " << double_pointer << std::endl;
    std::cout << "char_pointer   : " << char_pointer << std::endl;
    std::cout << "string_pointer : " << string_pointer << std::endl;

    // Initialize pointer
    int *int_pointer_init = nullptr;
    double *double_pointer_init = nullptr;
    char *char_pointer_init = nullptr;
    std::string *string_pointer_init = nullptr;
    std::cout << "int_pointer init    : " << int_pointer_init << std::endl;
    std::cout << "double_pointer init : " << double_pointer_init << std::endl;
    std::cout << "char_pointer init   : " << char_pointer_init << std::endl;
    std::cout << "string_pointer init : " << string_pointer_init << std::endl;

    return 0;
}