#include <iostream>
#include <string>

class Player {
    private:
    std::string name_;
    int health_;

    public:
    void SetName(std::string name) {
        name_ = name;
    }

    void SetHealth(int health) {
        health_ = health;
    }

    // Player(std::string name) {
    //     name_ = name;
    //     std::cout << "Default with arguments " << std::endl;
    // }

    Player() {
        name_ = "None";
        health_ = 0;
    }

    Player(std::string name) {
        name_ = name;
    }

    Player(std::string name, int health) {
        name_ = name;
        health_ = health;
    }

};


int main() {
    // Player player_1;    This gives error if there is no matching constructor and system generated default is overrode by user defined default constructor
    Player player_1("Chong");
}
