#include <iostream>

void PrintArray(int sample_array [], int array_length) {

    std::cout << "Printing array inside PrintArray Function" << std::endl;
    for (int i = 0; i < array_length; i++) {
        std::cout << sample_array[i] << std::endl;
    }

    return;
}

void ModifyArray(int sample_array [], int array_length) {

    std::cout << "Modifying array" << std::endl;

    for (int i = 0; i < array_length; i++) {
        sample_array[i] = 0;
    }

    return;
}

void DoNotModifyArray(const int sample_array [], int array_length) {

    std::cout << "Modifying array" << std::endl;

    // This give compilation error
    // for (int i = 0; i < array_length; i++) {
    //     sample_array[i] = 0;
    // }

    return;
}


int main() {

    int a[3];

    a[0] = 1;
    a[1] = 10;
    a[2] = 100;

    std::cout << a << std::endl;

    std::cout << "Value : " << a[0] << "  Address : " << &a[0] << std::endl;
    std::cout << "Value : " << a[1] << "  Address : " << &a[1] << std::endl;
    std::cout << "Value : " << a[2] << "  Address : " << &a[2] << std::endl;

    int num = 0;
    std::cout << "Value : " << num << "  Address : " << &num << std::endl;

    int sample_array[5] = {1, 2, 3, 4, 5};
    int array_length = sizeof(sample_array) / sizeof(sample_array[0]);
    PrintArray(sample_array, array_length);

    ModifyArray(sample_array, array_length);
    std::cout << "Printing array inside Inside main after update" << std::endl;
    for (int i = 0; i < array_length; i++) {
        std::cout << sample_array[i] << std::endl;
    }

    // Update array again
    for (int i = 0; i < array_length; i++) {
        sample_array[i] = i + 100;
    }

    DoNotModifyArray(sample_array, array_length);

    std::cout << "Printing array inside Inside main after update" << std::endl;
    for (int i = 0; i < array_length; i++) {
        std::cout << sample_array[i] << std::endl;
    }

    return 0;

}