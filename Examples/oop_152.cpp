#include <iostream>
#include <string>

class Player {
    private:
    std::string name;
    int health;
    int xp;

    public:
    Player(std::string name = "None", int health = 0, int xp = 0);
    ~Player();
    
    void SetName(std::string name);
    std::string GetName() const;
};

Player::Player(std::string name, int health, int xp) :
   name {name}, health {health}, xp {xp} {}

Player::~Player() {
    std::cout << "Destructor Called" << std::endl;
}

void Player::SetName(std::string new_name) {
    this->name = new_name;
    return;
}

// Normal get function
std::string Player::GetName() const {
    return this->name;
}

void DisplayAll(const Player &player_obj) {
    std::cout << "Player : " << player_obj.GetName() << std::endl;
}

int main() {

    // Normal Object - No error
    Player player_1("Sachin", 10, 100);
    std::cout << "Player Name : " << player_1.GetName() << std::endl;

    // error: passing ‘const Player’ as ‘this’ argument discards qualifiers [-fpermissive]
    const Player player_2("Dravid", 11, 11);
    std::cout << "Player Name : " << player_2.GetName() << std::endl;

    // Define function as const - such that explicitly saying function does not modify the class objects
    // const Player player_2("Dravid", 11, 11);
    // std::cout << "Player Name : " << player_2.GetName() << std::endl;

    DisplayAll(player_1);
    DisplayAll(player_2);

    return 0;
}