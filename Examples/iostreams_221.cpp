#include <iostream>
#include <iomanip>

void Ruler() {
    std::cout << "\n123456789012345678901234567890" << std::endl;
    return;
}

int main() {

    int num1 = 1234;
    int num2 = 1234.5678;
    std::string str = "Hello";

    std::cout << "=== Default ===" << std::endl;
    Ruler();
    std::cout << num1 << num2 << str << std::endl;

    std::cout << "==== Set width ====" << std::endl;
    Ruler();
    std::cout << std::setw(10) << num1 << num2 << str << std::endl; 
    
    std::cout << std::setw(10) << std::left << num1 << num2 << str << std::endl; 

    std::cout << std::endl;


    std::cout << std::setw(10) << std::left << num1 << std::setw(10) << std::left << num2 << str << std::endl; 

    std::cout << std::setw(10) << std::left << std::setfill('%') << num1 << std::setw(10) << std::left  << std::setfill('*') << num2 << std::setw(10) << std::setfill('-') << str << std::endl; 

    return 0;
}