#include <iostream>
#include <string>

class Player {

    private:
    std::string name_;
    int health_;
    int experience_;

    public:
    // Default constructor (Delegated)
    Player(std::string name = "None", int health = 0, int experince = 0);
    // Player(std::string name = "KK", int health = 10);
    
    void SetName(std::string name);
    void SetHealth(int health);
    void SetExperience(int experience);
    std::string GetName();
    int GetHealth();
    int GetExperience();

    // This is the copy constructor
    Player(const Player &source);
    ~Player();
};

Player::Player(std::string name, int health, int experience)
    : name_ {name}, health_ {health}, experience_ {experience} {}

Player::~Player() {
    std::cout << "Destuctor is called for : " << name_ << std::endl;
}

Player::Player(const Player &source)
: name_ {source.name_}, health_ {source.health_}, experience_ {source.experience_} {
    std::cout << "Copy constructor is called" << std::endl;
}

// Initialization in Copy constructor can be implemented using Delegated Constructor as below
// Player::Player(const Player &source)
// : Player(source.name_, source.health_, source.experience_) {
//     std::cout << "Copy constructor is called" << std::endl;
// }

void Player::SetName(std::string name) {
    name_ = name;
    return;
}

void Player::SetHealth(int health) {
    health_ = health;
    return;
}

void Player::SetExperience(int exp) {
    experience_ = exp;
    return;
}

std::string Player::GetName() {
    return name_;
}

int Player::GetHealth() {
    return health_;
}

int Player::GetExperience() {
    return experience_;
}

void DisplayData(Player player) {
    std::cout << "Name   : " << player.GetName() << std::endl;
    std::cout << "Health : " << player.GetHealth() << std::endl;
    std::cout << "Exp    : " << player.GetExperience() << std::endl;
    return;
}

int main() {

    Player player_1;
    DisplayData(player_1);

    Player *ptr_player_1 = new Player("Player PTR1");
    DisplayData(*ptr_player_1);
    delete ptr_player_1;

    std::cout << "==============" << std::endl;

    Player player_2("Dinga", 100, 100);
    Player player_3 = player_2;
    
    std::cout << "Player 2 Data" << std::endl;
    DisplayData(player_2);  // This will again create one more copy

    std::cout << "Player 3 Data" << std::endl;
    DisplayData(player_3);  // This will again create one more copy

    // Player player_2("Chong", 10);
    // DisplayData(player_2);

    return 0;
}