// Default agruments
#include <iostream>


int WithDefault(double cost, double tax_rate = 0.5) {

    return cost * tax_rate;
    
}

int WithoutDefault(double cost, double tax_rate) {
    return cost * tax_rate;
}

int NewFunction(double var_1 = 100.0, double var_2 = 200.0, double var_3 = 300.0) {
    return var_1 + var_2 + var_3;
}

int main() {

    double cost = 100.0;

    double result1 = WithDefault(cost);
    std::cout << "With Default - default value : " << result1 << std::endl;

    double result2 = WithDefault(cost, 1.0);
    std::cout << "With Default - new value : " << result2 << std::endl;

    std::cout << "Example 2 " << std::endl;
    double result3 = NewFunction();
    std::cout << "With default : " << result3 << std::endl;
    double result4 = NewFunction(10.0, 10.0, 10.0);
    std::cout << "With default : " << result4 << std::endl;

    return 0;
}