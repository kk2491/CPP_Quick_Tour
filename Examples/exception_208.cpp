#include <iostream>
#include <string>

double CalculateAvg(int num, int denom) {

    if (denom == 0) {
        throw 0;
    } 
    if (denom < 0 or num < 0) {
        throw std::string("Negative value error");
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
    catch(std::string &s) {
        std::cerr << s << std::endl;
    }


    // Catch all block - to catch all the missed throw
    // catch(...) {
    //     std::cerr << "Catch all block" << std::endl;
    // }

    std::cout << "Finish" << std::endl;

    return 0;
}