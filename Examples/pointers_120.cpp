#include <iostream>
#include <string>
#include <vector>

int main() {

    int num = 100;
    int *num_pointer = nullptr;

    num_pointer = &num;
    std::cout << "Num value : " << num << " Pointer deref : " << *num_pointer << std::endl;

    num = 999;
    std::cout << "Num value : " << num << " Pointer deref : " << *num_pointer << std::endl;

    num = 291123;
    std::cout << "Num value : " << num << " Pointer deref : " << *num_pointer << std::endl;

    int num2 = 111000;
    num_pointer = &num2;
    std::cout << "Num2 value : " << num2 << " Pointer deref : " << *num_pointer << std::endl;

    std::string name = "Kishor";
    std::string *name_ptr = nullptr;
    name_ptr = &name;
    std::cout << "String : " << name << " Pointer deref : " << *name_ptr << std::endl;

    name = "KK";
    std::cout << "String : " << name << " Pointer deref : " << *name_ptr << std::endl;

    // Pointer to vectors
    std::vector<int> num_vector = {1, 2, 3, 4, 5};
    std::vector<int> *num_vector_ptr = nullptr;
    num_vector_ptr = &num_vector;

    std::cout << "Num vector 0 : " << num_vector.at(0) << std::endl;

    std::cout << "Vector pointer : " << num_vector_ptr << std::endl;
    std::cout << "Vector pointer deref : " << (*num_vector_ptr).at(0) << std::endl;

    std::cout << "All elements" << std::endl;
    for (auto each_item : *num_vector_ptr) {
        std::cout << each_item << std::endl;
    }

    // Pointers to arrays - doubt
    // double arr[6] = {11, 21, 31, 41, 51, 61};
    // double *arr_ptr;
    // arr_ptr = &arr;

    return 0;
}