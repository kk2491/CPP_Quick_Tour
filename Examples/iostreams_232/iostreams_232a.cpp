// Unformatted - single char at a time

#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ofstream out_file;
    out_file.open("story.txt");
    std::string line;

    if (!out_file.is_open()) {
        std::cerr << "Not open" << std::endl;
        return 1;
    }

    std::cout << "Enter the data to write" << std::endl;

    std::getline(std::cin, line);
    std::cout << line << std::endl;

    out_file << line << std::endl;

    out_file.close();

    return 0;
}