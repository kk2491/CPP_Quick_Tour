#include <iostream>
#include <iomanip>

int main() {

    double num_1 = 123456789.987654321;
    double num_2 = 1234.5678;
    double num_3 = 1234.0;

    std::cout << num_1 << std::endl;        // output - 1.23457e+08
    std::cout << num_2 << std::endl;        // output - 1234.57
    std::cout << num_3 << std::endl;        // output - 1234

    std::cout << "==== SetPrecision ====" << std::endl;
    std::cout << std::setprecision(2);
    std::cout << num_1 << std::endl;        // output - 1.2e+08
    std::cout << num_2 << std::endl;        // output - 1.2e+08
    std::cout << num_3 << std::endl;        // output - 1.2e+08

    std::cout << "==== SetPrecision ====" << std::endl;
    std::cout << std::setprecision(5);
    std::cout << num_1 << std::endl;        // output - 1.2346e+08
    std::cout << num_2 << std::endl;        // output - 1234.6
    std::cout << num_3 << std::endl;        // output - 1234

    std::cout << "==== SetPrecision Fixed ====" << std::endl;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << num_1 << std::endl;        // output - 123456789.988
    std::cout << num_2 << std::endl;        // output - 1234.568
    std::cout << num_3 << std::endl;        // output - 1234.000

    std::cout << "==== SetPrecision Scientific + persisting fixed ====" << std::endl;
    std::cout << std::scientific << std::setprecision(3);
    std::cout << num_1 << std::endl;        // output - 1.235e+08
    std::cout << num_2 << std::endl;        // output - 1.235e+08
    std::cout << num_3 << std::endl;        // output - 1.234e+08

    std::cout << "==== Back to defaults ====" << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::showpoint);

    std::cout << num_1 << std::endl;        // output - 1.9072e+02
    std::cout << num_2 << std::endl;        // output - 9.9929e+08

    std::cout << std::setprecision(2) << std::scientific;
    std::cout << num_1 << std::endl;        // output - 1.9072e+02
    std::cout << num_2 << std::endl;        // output - 9.9929e+08

    return 0;
}