#include <iostream>

int *LargestNumber(int *x, int *y) {

    if (*x >= *y) {
        return x;
    } else {
        return y;
    }

}

int *GetDynamicAllocatedPointer(size_t array_size) {
    size_t size = array_size;
    int *new_storage = nullptr;
    new_storage = new int[size];

    for (size_t i = 0; i < size; i++) {
        new_storage[i] = i;
    }
    return new_storage;
}

void PrintArray(const int *const ar_ptr, size_t array_size) {
    std::cout << "Printing array" << std::endl;
    for (size_t i = 0; i < array_size; i++) {
        std::cout << ar_ptr[i] << std::endl;
    }
    return;
}

int main() {

    // Example 1 - Return pointer from a function
    int a = 10, b = 11;
    int *a_ptr = nullptr, *b_ptr = nullptr;

    a_ptr = &a;
    b_ptr = &b;

    std::cout << "Pointer a : " << a_ptr << " b : " << b_ptr << std::endl;
    std::cout << "Largest number : " << *LargestNumber(a_ptr, b_ptr) << std::endl;

    // Example 2 - Return array pointer from dynamically allocated memory
    int *ar_ptr = nullptr;
    size_t array_size = 10;
    ar_ptr = GetDynamicAllocatedPointer(array_size);
    PrintArray(ar_ptr, array_size);
    delete[] ar_ptr;

    return 0;
}