#include <iostream>

#define SQUARE(a) a*a
#define SQUAREREFINED(a) ((a) * (a))

int main() {

    int result;

    std::cout << SQUARE(10) << std::endl;
    
    result = 100 / SQUARE(10);              // This gives answer as 100, expected answer 1
    std::cout << result << std::endl;

    result = 100 / SQUAREREFINED(10);              // This gives answer as 100, expected answer 1
    std::cout << result << std::endl;

    return 0;
}