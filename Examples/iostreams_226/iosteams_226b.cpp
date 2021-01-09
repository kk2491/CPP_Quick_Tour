// Unformatted - single char at a time

#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream in_file;

    in_file.open("story.txt");

    if (!in_file.is_open()) {
        std::cerr << "Not open" << std::endl;
        return 1;
    }

    std::cout << "File is open" << std::endl;

    char c;
    while(in_file.get(c)) {
        std::cout << c << std::endl;
    }

    in_file.close();

    // std::cout << "===== Read line =====" << std::endl;

    // if (!in_file.is_open()) {
    //     std::cerr << "Not open" << std::endl;
    //     return 1;
    // }

    // std::cout << "File is open" << std::endl;

    // std::string str;
    // while(in_file.getline(c, 5)) {
    //     std::cout << str << std::endl;
    // }
    
    // in_file.close();

    return 0;
}