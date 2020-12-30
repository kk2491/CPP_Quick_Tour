// Function overloading
#include <iostream>
#include <vector>
#include <string>

int AddNumbers(int a, int b) {
    return a+b;
}

double AddNumbers(double a, double b) {
    return a+b;
}

std::vector<int> AddNumbers(std::vector<int> a, std::vector<int> b) {

    std::vector<int> output_vector;

    if (a.size() != b.size()) {
        output_vector.push_back(0);
        return output_vector;
    } else
    {
        int vector_size = a.size();
        for (int i = 0; i < vector_size; i++) {
            output_vector.push_back(a[i] + b[i]);
        }

        return output_vector;
    }
}

void PrintString(std::string s) {
    std::cout << "String : " << s << std::endl;
}

void PrintNumber(int num) {
    std::cout << "Number : " << num << std::endl;
    return;
}

void PrintDouble(double num) {
    std::cout << "Number : " << num << std::endl;
    return;
}

int main() {

    std::cout << "Integer" << std::endl;
    int a = 10, b = 10;
    std::cout << AddNumbers(a, b) << std::endl;

    std::cout << "Double" << std::endl;
    double c = 100.0, d = 11.11;
    std::cout << AddNumbers(c, d) << std::endl;

    std::cout << "Vector" << std::endl;
    std::vector<int> vector_a = {1, 2, 3};
    std::vector<int> vector_b = {1, 2, 3};
    std::vector<int> output_vector = AddNumbers(vector_a, vector_b);
    for (auto each_item: output_vector) {
        std::cout << each_item << std::endl;
    }

    std::cout << "Print Integer" << std::endl;
    // There are 2 types of String - C string and C++ string

    int print_a = 10;
    PrintNumber(print_a);
    double print_b = 1.12;
    PrintNumber(print_b);
    PrintNumber('A');

    std::cout << "Print Double" << std::endl;
    double double_a = 10.10;
    PrintDouble(double_a);
    float float_a = 11.1123;
    PrintDouble(float_a);

    std::cout << "Print String" << std::endl;
    PrintString("C Style string");

    std::string cpp_string = "CPP String";
    PrintString(cpp_string);

    return 0;
}   