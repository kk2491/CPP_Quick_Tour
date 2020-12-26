#include <cstdlib>
#include <iostream>
#include <vector>

void PassByValue(int a, int b) {

    std::cout << "In function before " << std::endl;
    std::cout << "a  value : " << a << " address : " << &a << std::endl;
    std::cout << "b  value : " << b << " address : " << &b << std::endl;

    a = a + 10;
    b = b + 20;

    std::cout << "In function after " << std::endl;
    std::cout << "a  value : " << a << " address : " << &a << std::endl;
    std::cout << "b  value : " << b << " address : " << &b << std::endl;

    return;
}


void PassByValueVector(std::vector<int> intput_vector) {

    intput_vector[0] = 11;
    intput_vector[1] = 22;
    intput_vector[1] = 33;

    return;
}

void PassByValueArray(int input_array[3]) {

    input_array[0] = 111;
    input_array[1] = 222;
    input_array[2] = 333;

    return;
}


int main() {

    int a = 100;
    int b = 10;

    std::cout << "In main before " << std::endl;
    std::cout << "a  value : " << a << " address : " << &a << std::endl;
    std::cout << "b  value : " << b << " address : " << &b << std::endl;

    PassByValue(a, b);

    std::cout << "In main after " << std::endl;
    std::cout << "a  value : " << a << " address : " << &a << std::endl;
    std::cout << "b  value : " << b << " address : " << &b << std::endl;

    std::vector<int> input_vector = {1, 2, 3};

    std::cout << "Vector Before : " << input_vector[0] << " " << input_vector[1] << " " << input_vector[2] << std::endl;

    PassByValueVector(input_vector);

    std::cout << "Vector After : " << input_vector[0] << " " << input_vector[1] << " " << input_vector[2] << std::endl;


    int input_array[3] = {1, 2, 3};

    std::cout << "Array Before : " << input_array[0] << " " << input_array[1] << " " << input_array[2] << std::endl;

    PassByValueArray(input_array);

    std::cout << "Array After : " << input_array[0] << " " << input_array[1] << " " << input_array[2] << std::endl;


    return 0;

}