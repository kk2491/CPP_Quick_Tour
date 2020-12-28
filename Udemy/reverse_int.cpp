#include <iostream>
#include <vector>
#include <math.h>

int main() {

    int num;
    std::cin >> num;

    std::cout << "Number : " << num << std::endl;

    int n = num;
    int num_digits = 0;
    std::vector<int> temp_vector;

    while (n !=0) {
        int remainder = n % 10;
        n = n /10;
        num_digits = num_digits + 1;
        std::cout << n << "  " << remainder << std::endl;
        temp_vector.push_back(remainder);
    }    

    int new_num = 0;
    for (int i = 0; i < temp_vector.size(); i++) {
        new_num = new_num + pow(10, temp_vector.size() - 1 - i) * temp_vector[i];
    }


    std::cout << "Reversed : " << new_num << std::endl;
    return 0;
}