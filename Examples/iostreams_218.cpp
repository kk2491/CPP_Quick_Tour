#include <iostream>
#include <iomanip>

int main() {

    {
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 11) << std::endl;
    }

    {
        std::cout << std::boolalpha;
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 11) << std::endl;

        std::cout << std::noboolalpha;
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 11) << std::endl;
    }

    {
        std::cout.setf(std::ios::boolalpha);
        // std::cout.setf(std::ios::noboolalpha);
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 11) << std::endl;        
        
        std::cout << std::resetiosflags(std::ios::boolalpha);
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 11) << std::endl;        
    }

    return 0;
}