// Formatter - complete line at a time 

#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream in_file;
    std::string str;

    in_file.open("story.txt");

    if (!in_file.is_open()) {
        std::cerr << "Not open" << std::endl;
        return 1;
    }

    std::cout << "File is open" << std::endl;

    while(std::getline(in_file, str)) {
        std::cout << str << std::endl;
    }

    in_file.close();

    return 0;
}