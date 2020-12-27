#include <iostream>
#include <string>

int main() {

    // pointers to constants
    int num_1 = 100;
    int num_11 = 999;
    const int *num_1_ptr = nullptr;
    num_1_ptr = &num_1;

    std::cout << "pointer : " << num_1_ptr << " derefence : " << *num_1_ptr << std::endl;

    num_1 = 900;
    std::cout << "pointer : " << num_1_ptr << " derefence : " << *num_1_ptr << std::endl;

    // This results in error
    // *num_1_ptr = 888;
    // std::cout << "pointer : " << num_1_ptr << " derefence : " << *num_1_ptr << std::endl;

    num_1_ptr = &num_11;
    std::cout << "pointer : " << num_1_ptr << " derefence : " << *num_1_ptr << std::endl;


    // constant pointers 
    int num_2 = 100;
    int num_22 = 999;
    int *const num_2_ptr = &num_2;
    // num_2_ptr = &num_2;
    std::cout << "pointer : " << num_2_ptr << " derefence : " << *num_2_ptr << std::endl;
    num_2 = 909090;    
    std::cout << "pointer : " << num_2_ptr << " derefence : " << *num_2_ptr << std::endl;
    *num_2_ptr = 8888;
    std::cout << "pointer : " << num_2_ptr << " derefence : " << *num_2_ptr << std::endl;
    
    // This results in error
    // num_2_ptr = &num_22;
    // std::cout << "pointer : " << num_2_ptr << " derefence : " << *num_2_ptr << std::endl;


    // constant pointers to constant
    int num_3 = 22;
    int num_33 = 55;
    const int *const num_3_ptr = &num_3;
    std::cout << "pointer : " << num_3_ptr << " derefence : " << *num_3_ptr << std::endl;

    num_3 = 880099;
    std::cout << "pointer : " << num_3_ptr << " derefence : " << *num_3_ptr << std::endl;

    // This results in error
    // *num_3_ptr = 9898;
    // std::cout << "pointer : " << num_3_ptr << " derefence : " << *num_3_ptr << std::endl;

    // This results in error
    // num_3_ptr = &num_33;
    // std::cout << "pointer : " << num_3_ptr << " derefence : " << *num_3_ptr << std::endl;

    return 0;
}