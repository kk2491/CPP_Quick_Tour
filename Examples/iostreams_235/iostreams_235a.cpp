#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main() {

    std::string name;
    int id;
    double money;

    // Reading the data from stringstream - imagine like reading the data from console
    std::cout << "======= Input =======" << std::endl;
    std::string data = {"Maya 100 100.100"};
    std::istringstream iss {data};

    iss >> name >> id >> money;
    std::cout << std::setw(10) << name << std::setw(10) << id << std::setw(10) << money << std::endl;

    // Writing the data to stringstream - imagine like writing the data to console cout 
    std::cout << "======= Output =======" << std::endl;
    std::ostringstream oss;
    oss << std::setw(10) << name << std::setw(10) << id << std::setw(10) << money << std::endl;
    std::cout << oss.str() << std::endl;

    std::cout << "======= Validation =======" << std::endl;
    // Instead of directing the keyboard input to double or int, we redirect to string stream
    // Extract the input from stringstream
    int value;
    std::string user_entry;
    bool done = false;

    do {
        std::cout << "Enter the input please : " << std::endl;
        std::cin >> user_entry;
        std::stringstream iss {user_entry};

        if (iss >> value) {
            std::cout << "Entered is integer" << std::endl;
            done = true;
        } else {
            std::cout << "Entered is not integer" << std::endl;
        }

        // when user enters = 12 there 20 - This will be considered for the next 
        // Next time when we read it is clean
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    } while(!done);


    return 0;
}