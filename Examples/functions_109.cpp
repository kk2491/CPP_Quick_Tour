// Pass by reference

#include <iostream>
#include <vector>

void PassByReference(int &num) {

    num = num + 100;

    return;

}

void SwapNumbersValue(int a, int b) {

    int temp;
    temp = a;
    a = b;
    b = temp;

    return;
}


void SwapNumbersReference(int &a, int &b) {

    int temp;
    temp = a;
    a = b;
    b = temp;

    return;
}

void SwapNumbersAddress(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = *a;
    return;
}

void VectorPassByReference(std::vector<int> &sample_vector) {

    for (int i = 0; i < sample_vector.size(); i++) {
        sample_vector[i] = sample_vector[i] + 100;
    }
    return;
}

void DisplayVector(std::vector<int> &sample_vector) {
    for (auto each_item : sample_vector) {
        std::cout << each_item << std::endl;
    }
    return;
}

int main() {

    int num = 100;

    std::cout << "Before Function call : " << num << std::endl;
    PassByReference(num);
    std::cout << "After Function call  : " << num << std::endl;

    // Pass by value
    int x = 100, y = 200;
    std::cout << "Before x : " << x << "  y : " << y << std::endl;
    SwapNumbersValue(x, y);
    std::cout << "After x  : " << x << "  y : " << y << std::endl;

    // Pass by reference
    std::cout << "Before x : " << x << "  y : " << y << std::endl;
    SwapNumbersReference(x, y);
    std::cout << "After x  : " << x << "  y : " << y << std::endl;

    // Pass by address / pointers
    std::cout << "Before x : " << x << "  y : " << y << std::endl;
    SwapNumbersAddress(&x, &y);
    std::cout << "After x  : " << x << "  y : " << y << std::endl;

    // Pass by reference - vectors code optimization
    std::vector<int> my_vector = {1, 2, 3, 4, 5};
    std::cout << "Before" << std::endl;
    DisplayVector(my_vector);
    VectorPassByReference(my_vector);
    std::cout << "After" << std::endl;
    DisplayVector(my_vector);

    return 0;
} 