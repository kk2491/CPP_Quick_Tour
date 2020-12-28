// References

#include <iostream>
#include <vector>
#include <string>

void PassByReference(int &num1, int &num2) {
    // Swap the variables
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return;
}

int main() {

    // Example 1 - passing references to functions
    int num1 = 100, num2 = 200;

    std::cout << "Before  num1 : " << num1 << " num2 : " << num2 << std::endl;
    PassByReference(num1, num2);
    std::cout << "After  num1 : " << num1 << " num2 : " << num2 << std::endl;

    // Example 2
    std::vector<std::string> criminals = {"Tom", "Jerry", "Donald", "Trump"};

    // a. Without references - it creates the copy of each vector elements hence original vector is not effected
    for (auto str : criminals) {
        str = "Biden";
    }

    for (auto str : criminals) {
        std::cout << str << std::endl;
    }

    // b. with references alias of the each element is created, hence changing the reference changes the original vector element
    for (auto &str : criminals) {
        str = "Laden";
    }
    for (auto str : criminals) {
        std::cout << str << std::endl;
    }

    criminals = {"Tom", "Jerry", "Donald", "Trump"};

    // c. It is always preferable to use reference while printing vector elements in for loop since copy is not created
    // However using references changes the original element hence use const
    for (const auto &str : criminals) {
        std::cout << str << std::endl;
    }

    // Example 3
    int number = 100;
    int &number_ref = number;
    std::cout << "1 Original : " << number << "  alias : " << number_ref << std::endl;
    number = 900;
    std::cout << "2 Original : " << number << "  alias : " << number_ref << std::endl;
    number_ref = 555;
    std::cout << "3 Original : " << number << "  alias : " << number_ref << std::endl;

    return 0;
}