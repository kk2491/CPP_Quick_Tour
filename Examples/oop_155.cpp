#include <iostream>
#include <string>

class Team {
    private:
    std::string team_name;

    public:
    void CapturePlayerData(Player &player_obj);
};

void Team::CapturePlayerData(Player &player_obj) {
    std::cout << "Captured : " << player_obj.name << "  " << player_obj.health << "  " << player_obj.exp << std::endl;
}

class Player {
    private:

    // Normal function as friend
    friend void DisplayPlayerData(Player &player_obj);

    // Class member as Friend
    friend void Team::CapturePlayerData(Player &player_obj);

    std::string name;
    int health;
    int exp;

    public:
    Player(std::string name = "None", int health = 0, int exp = 0);
    ~Player();
    
    void SetName(std::string name);
    void SetHealth(int health);
    void SetExp(int exp);

    std::string GetName();
    int GetHealth();
    int GetExp();
};

Player::Player(std::string name, int health, int exp) 
    : name {name}, health {health}, exp {exp} {
    std::cout << "Constructor Called" << std::endl;
}

Player::~Player() {
    std::cout << "Destructor Called" << std::endl;
}

void Player::SetName(std::string name) {
    this->name = name;
}

void Player::SetHealth(int health) {
    this->health = health;
}

void Player::SetExp(int exp) {
    this->exp = exp;
}

std::string Player::GetName() {
    return this->name;
}

int Player::GetHealth() {
    return this->health;
}

int Player::GetExp() {
   return this->exp;
}

void DisplayPlayerData(Player &player_obj) {
    std::cout << "NF : Player Data : " << player_obj.name << "  " << player_obj.health << "  " << player_obj.exp << std::endl;
    return;
}

int main() {

    Player player_1("Frank", 10, 10);
    DisplayPlayerData(player_1);


    return 0;
}