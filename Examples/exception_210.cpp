#include <iostream>
#include <string>

class DivideByZeroException {

};

class NegativeValueException {

};

double CalculateAvg(int num, int denom) {

    if (denom == 0) {
        throw DivideByZeroException();
    } 
    if (denom < 0 or num < 0) {
        throw NegativeValueException();
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

    // If attributes are there can be accessed using ex
    catch(const DivideByZeroException &ex) {
        std::cerr << "Divide by 0 !!! " << std::endl;
    }
    catch(const NegativeValueException &ex) {
        std::cerr << "Negative value" << std::endl;
    }

    // Catch all block - to catch all the missed throw
    // catch(...) {
    //     std::cerr << "Catch all block" << std::endl;
    // }

    std::cout << "Finish" << std::endl;

    return 0;
}