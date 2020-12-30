// Pass by reference using pointers

#include <iostream> 
#include <vector>

void SwapNumbers(int *x, int *y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

void DisplayVectors(const std::vector<int> *vector_ptr) {
    std::cout << "Display" << std::endl;
    for (auto each_item : *vector_ptr) {
        std::cout << each_item << std::endl;
    } 
    // (*vector_ptr).at(0) = 122; - Not allowed since it is const
}

void DisplayArray(int *int_ptr, int limit) {

    while (*int_ptr != limit) {
        std::cout << *int_ptr << std::endl;
        int_ptr++;
    }

}

int main() {

    int a = 10, b = 20;

    std::cout << "Before a : " << a << "  b : " << b << std::endl; 
    SwapNumbers(&a, &b);
    std::cout << "After  a : " << a << "  b : " << b << std::endl;

    int *ptr_a = &a;
    int *ptr_b = &b;
    SwapNumbers(ptr_a, ptr_b);
    std::cout << "After  a : " << a << "  b : " << b << std::endl;

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    DisplayVectors(&numbers);

    int integers[5] = {1, 2, 3, 4, -1};
    DisplayArray(integers, -1);

    return 0;
}