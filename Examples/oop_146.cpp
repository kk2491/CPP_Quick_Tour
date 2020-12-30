#include <iostream>
#include <string>

class Player {
    private:
    std::string name_;
    int health_;
    int xp_;

    public:

    Player(std::string name = "None", int health = 111, int xp = 11)
        : name_ {name}, health_ {health}, xp_ {xp} {}

    void SetName(std::string name) {
        name_ = name;
    }
    
    void SetHealth(int health) {
        health_ = health;
    }
    
    void SetExperience(int experience) {
        xp_ = experience;
    }

    std::string GetName() {
        return name_;
    }

    int GetHealth() {
        return health_;
    }

    int GetExperience() {
        return xp_;
    }

};

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