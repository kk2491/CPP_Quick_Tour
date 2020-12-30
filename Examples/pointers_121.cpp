#include <iostream>
#include <vector>

int main() {

    // Single Integer 
    int *int_ptr = nullptr;
    int_ptr = new int;

    std::cout << "pointer value       : " << int_ptr << std::endl;
    std::cout << "pointer points to   : " << *int_ptr << std::endl;

    *int_ptr = 10000;

    std::cout << "pointer value       : " << int_ptr << std::endl;
    std::cout << "pointer points to   : " << *int_ptr << std::endl;

    delete int_ptr;

    // Array - Dynamic memory allocation
    int *array_ptr = nullptr;
    array_ptr = new int[100];

    delete[] array_ptr;

    // One more example
    double *double_ptr = nullptr;
    double_ptr = new double;
    *double_ptr = 100.001;
    std::cout << "Double ptr : " << *double_ptr << std::endl;
    delete double_ptr;

    double *darray_ptr = nullptr;
    size_t num_elements = 1000;
    darray_ptr = new double[num_elements];
    delete[] darray_ptr;

    return 0;
}