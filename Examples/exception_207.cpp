#include <iostream>

double CalculateAvg(int num, int denom) {

    if (denom == 0) {
        throw 0;
    } 
    return (static_cast<double>(num) / denom);
}


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
        double avg = CalculateAvg(num, denom);
        std::cout << "Average : " << avg << std::endl; 
    }
    catch(int &ex) {
        std::cerr << "Divide by 0 !!! " << std::endl;
    }

    std::cout << "Finish" << std::endl;

    return 0;
}