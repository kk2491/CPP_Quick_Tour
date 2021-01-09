// Unformatted - single char at a time

#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream in_file;
    in_file.open("story_in.txt");

    std::ofstream out_file;
    out_file.open("story_out_unformatted.txt");
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
        char c;
        in_file.get(c); 
        // std::cout << str << std::endl;
        // out_file << c << std::endl; // This does line by line not correct - one character per line
        out_file.put(c);
    }


    in_file.close();
    out_file.close();

    return 0;
}