#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main() {

    std::ifstream in_file;
    std::string str;
    int num_1;
    double num_2;

    in_file.open("example_b.txt");

    if (!in_file.is_open()) {
        std::cerr << "Not open" << std::endl;
        return 1;
    }

    std::cout << "File is open" << std::endl;

    while (!in_file.eof()) {
        in_file >> str >> num_1 >> num_2;
        std::cout << std::setw(10) << str 
                        << std::setw(10) << num_1 
                        << std::setw(10) << num_2 << std::endl;
    }
    in_file.close();

    std::cout << " ===================== " << std::endl;

    in_file.open("example_b.txt");
    while (in_file >> str >> num_1 >> num_2) {
        // in_file >> str >> num_1 >> num_2;
        std::cout << std::setw(10) << str 
                        << std::setw(10) << num_1 
                        << std::setw(10) << num_2 << std::endl;
    }

    in_file.close();

    return 0;
}