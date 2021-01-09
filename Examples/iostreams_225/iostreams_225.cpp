#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream in_file;
    std::string str;
    int num_1;
    double num_2;

    in_file.open("check.txt");

    if (!in_file.is_open()) {
        std::cerr << "Not open" << std::endl;
        return 1;
    }

    std::cout << "File is open" << std::endl;

    // in_file << str << num_1 << num_2;

    in_file >> str;                     // This just reads the file till next whitespace or enter
    std::cout << str << std::endl;

    in_file >> num_1;
    std::cout << num_1 << std::endl;
    
    in_file >> num_2;
    std::cout << num_2 << std::endl;

    in_file.close();

    return 0;
}