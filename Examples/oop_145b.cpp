#include <iostream>
#include <string>

class Player {
    private:
    std::string name_;
    int health_;
    int xp_;

    public:
    Player();

    Player(std::string name);

    Player(std::string name, int health, int xp);

    void SetName(std::string name);
    
    void SetHealth(int health);
    
    void SetExperience(int experience);

    std::string GetName();

    int GetHealth();

    int GetExperience();

};

Player::Player() : Player("None", 0, 0) {}

Player::Player(std::string name) : Player(name, 0, 0) {}

Player::Player(std::string name, int health, int xp)
        : name_ {name}, health_ {health}, xp_ {xp} {}

void Player::SetName(std::string name) {
    name_ = name;
}
    
void Player::SetHealth(int health) {
    health_ = health;
}

void Player::SetExperience(int experience) {
    xp_ = experience;
}

std::string Player::GetName() {
    return name_;
}

int Player::GetHealth() {
    return health_;
}

int Player::GetExperience() {
    return xp_;
}


int main() {
    Player player_1;
    std::cout << player_1.GetName() << std::endl;
    std::cout << player_1.GetHealth() << std::endl;
    std::cout << player_1.GetExperience() << std::endl;
    std::cout << "=====================" << std::endl;

    Player player_2("KK");
    std::cout << player_2.GetName() << std::endl;
    std::cout << player_2.GetHealth() << std::endl;
    std::cout << player_2.GetExperience() << std::endl;
    std::cout << "=====================" << std::endl;

    Player *player_3 = new Player("KKK", 111, 999);
    std::cout << player_3->GetName() << std::endl;
    std::cout << player_3->GetHealth() << std::endl;
    std::cout << player_3->GetExperience() << std::endl;
    delete player_3;
    std::cout << "=====================" << std::endl;

    return 0;
}