#include <iostream>
#include <string>
#include <math.h>

class Player {
    private:
    std::string name;
    double age;
    double exp;

    public:
    Player(std::string name = "None", double age = NAN, double exp = NAN);
    ~Player();
    void SetPlayer(std::string name, double age, double exp);
    bool ComparePlayer(const Player &player_obj);
};

Player::Player(std::string name, double age, double exp)
    : name {name}, age {age}, exp {exp} {
    std::cout << "Constructor Initialization" << std::endl;
}

Player::~Player() {
    std::cout << "Destructor Called" << std::endl;
}

void Player::SetPlayer(std::string name, double age, double exp) {
    this->name = name;
    this->age = age;
    this->exp = exp;
    return;
}

bool Player::ComparePlayer(const Player &other_player) {
    if (this == &other_player) {
        return true;
    } else {
        return false;
    }
}

int main() {

    Player player_1("Sachin", 40.0, 20.0);
    Player player_2("Ganguly", 50.0, 15.0);

    if (player_1.ComparePlayer(player_1)) {
        std::cout << "Both are same players' account" << std::endl;
    } else {
        std::cout << "Different players' account" << std::endl;
    }

    if (player_1.ComparePlayer(player_2)) {
        std::cout << "Both are same players' account" << std::endl;
    } else {
        std::cout << "Different players' account" << std::endl;
    }

    return 0;
}