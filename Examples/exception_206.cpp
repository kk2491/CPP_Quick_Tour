#include <iostream>

int main() {

    int num;
    int denom;

    std::cout << "Enter the numerator : ";
    std::cin >> num;
    std::cout << std::endl;

    std::cout << "Enter the denom : ";
    std::cin >> denom;
    std::cout << std::endl;

    try {
        if (denom == 0) {
            throw 0;
        }
        double avg = static_cast<double>(num)/denom;
        std::cout << "Average : " << avg << std::endl; 
    }
    catch(int &ex) {
        std::cerr << "Divide by 0 !!! " << std::endl;
    }

    std::cout << "Finish" << std::endl;

    bool without_try = false;
    if (without_try) {
        // double avg = num / denom;
        // std::cout << "Average : " << avg << std::endl;
        double avg = (double) num / denom;
        std::cout << "Average : " << avg << std::endl;
    }

    return 0;
}