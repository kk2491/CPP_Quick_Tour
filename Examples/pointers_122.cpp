#include <iostream>
#include <cstdlib>

int main() {

    double int_array[5] = {11, 22, 33, 44, 55};

    double *int_array_ptr = int_array;

    // Array subscript notation
    std::cout << "Array subscript notation" << std::endl;
    std::cout << int_array[0] << "  " << int_array[1] << "  " << int_array[2] << std::endl;

    // Pointer subscript notation
    std::cout << "Pointer subscript notation" << std::endl;
    std::cout << int_array_ptr[0] << "  " << int_array_ptr[1] << "  " << int_array_ptr[2] << std::endl;
    
    // Array offset notation
    std::cout << "Array offset notation" << std::endl;
    std::cout << *(int_array + 0) << "  " << *(int_array + 1) << "  " << *(int_array + 2) << std::endl;

    // Pointer offset notation
    std::cout << "Pointer offset notation" << std::endl;
    std::cout << *(int_array_ptr + 0) << "  " << *(int_array_ptr + 1) << "  " << *(int_array_ptr + 2) << std::endl;

    return 0;
}