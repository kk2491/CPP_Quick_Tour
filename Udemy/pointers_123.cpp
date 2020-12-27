#include <iostream>
#include <string>

int main() {
    
    // increment decrement operator
    int num = 100;
    int *num_ptr = &num;

    std::cout << "size of int : " << sizeof(num) << std::endl;

    std::cout << "pointer value     : " << num_ptr << std::endl;
    std::cout << "pointing to       : " << *num_ptr << std::endl;

    num_ptr++;
    std::cout << "pointer     : " << num_ptr << std::endl;
    std::cout << "incremented : " << *num_ptr << std::endl; // This results in garbage value

    num_ptr--;
    std::cout << "pointer     : " << num_ptr << std::endl;
    std::cout << "incremented : " << *num_ptr << std::endl; // Goes back to original value

    // addition operation pointer + n or pointer - n
    

    // Pointer arithmetic using array
    std::cout << "Pointer Arithmetic " << std::endl;
    int scores[5] = {10, 20, 30, 40, -1};
    int *scores_ptr = scores;

    while (*scores_ptr != -1) {
        std::cout << *scores_ptr << std::endl;
        scores_ptr++;
    }

    scores_ptr = scores;
    while (*scores_ptr != -1) {
        std::cout << *scores_ptr++ << std::endl;
    }

    // Comparison
    std::string s1 = "Chong";
    std::string s2 = "Chong";
    std::string s3 = "Dong";

    std::string *ptr1 = &s1;
    std::string *ptr2 = &s2;
    std::string *ptr3 = &s1;

    if (*ptr1 == *ptr2) {
        std::cout << "String Values are same" << std::endl;
    } else
    {
        std::cout << "String Values are not same" << std::endl;
    }
    

    if (ptr1 == ptr2) {
        std::cout << "Pointers are same" << std::endl;
    } else {
        std::cout << "Pointers are not same " << std::endl;
    }

    if (ptr1 == ptr3) {
        std::cout << "Pointers are same" << std::endl;
    } else {
        std::cout << "Pointers are not same " << std::endl;
    }
    
    // Character
    char name[] = "Kishor";
    char *name_ptr = name;

    char *l1_ptr = &name[0];
    char *l2_ptr = &name[2];
    char *l3_ptr = &name[4];

    std::cout << name[0] << " is " << (l2_ptr - l1_ptr) << " from " << name[2] << std::endl;
    std::cout << name[0] << " is " << (l3_ptr - l1_ptr) << " from " << name[4] << std::endl;
    std::cout << name[2] << " is " << (l2_ptr - l3_ptr) << " from " << name[4] << std::endl;

    return 0;
}