// Random Dice number generator

#include <math.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    int random_number;
    int min = 1;
    int max = 6;
    int num_iterations = 10;

    srand(time(nullptr));

    for (int i = 0; i < num_iterations; i++) {
        random_number = rand() % max + min;

        std::cout << random_number << std::endl;

    }

    return 0;
}