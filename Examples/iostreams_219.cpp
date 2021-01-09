#include <iostream>
#include <iomanip>

int main() {

    int num_1 = 255;
    int num_2 = 123;

    std::cout << std::dec << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << std::hex << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << std::oct << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << " ======== with base ======== " << std::endl;
    std::cout << std::showbase;
    std::cout << std::dec << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << std::hex << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << std::oct << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << " ========= with uppercase and +ve ========= " << std::endl;
    std::cout << std::showbase << std::showpos; 
    std::cout << std::dec << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << std::hex << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout << std::oct << num_1 << std::endl;
    std::cout << num_2 << std::endl;

    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout.setf(std::ios::showpos);

    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::uppercase);
    std::cout << std::resetiosflags(std::ios::showpos);

    return 0;
}