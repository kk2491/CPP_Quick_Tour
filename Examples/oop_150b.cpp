#include <iostream>
#include <string>
#include <vector>

void LValueFunction(int &num) {
    num = num + 999;
    return;
}


void RValueFunction(int &&num) {
    num = num + 111;
    return;
}

int main() {

    int num_1 = 100;
    std::cout << "L Value Before : " << num_1 << std::endl;
    LValueFunction(num_1);
    // LValueFunction(100); - This gives an error as this is not an L Value
    std::cout << "L Value After  : " << num_1 << std::endl;

    RValueFunction(100);
    // RValueFunction(num_1); - This gives an error as num_ 1 is not a R Value
    // std::cout << "R Value AFter  : " << num_2 << std::endl;

    // L Value 
    int x = 200;
    int &num = x;

    // R Value
    int &&r_num = 10;
    r_num = 999;

    return 0;
}