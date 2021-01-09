// Unformatted - single char at a time

#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream in_file;
    in_file.open("story_in.txt");

    std::ofstream out_file;
    out_file.open("story_out.txt");
    std::string line;

    if (!in_file.is_open()) {
        std::cerr << "In file not open" << std::endl;
        return 1;
    }

    if (!out_file.is_open()) {
        std::cerr << "Out file not open" << std::endl;
        return 1;
    }

    while(!in_file.eof()) {
        std::string str;
        std::getline(in_file, str);
        // std::cout << str << std::endl;
        out_file << str << std::endl;
    }


    in_file.close();
    out_file.close();

    return 0;
}