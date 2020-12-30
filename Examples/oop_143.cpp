#include <iostream>
#include <vector>
#include <string>

class Player {
    private:
    std::string name_;
    int health_;
    int experience_;

    public:
    Player() : name_ {"None"}, health_ {0}, experience_ {0} {

    }

    Player(std::string name) : health_ {0}, name_ {name}, experience_ {0} {

    }

    Player(std::string name, int health) : name_ {name}, health_ {health} {

    }

    Player(std::string name, int health, int experience) : name_ {name}, health_ {health}, experience_ {experience} {

    }
    
    void SetName(std::string name) {
        name_ = name;
    }
    
    void SetHealth(int health) {
        health_ = health;
    }
    
    void SetExperience(int experience) {
        experience_ = experience;
    }

    std::string GetName() {
        return name_;
    }

    int GetHealth() {
        return health_;
    }

    int GetExperience() {
        return experience_;
    }
};

class OldPlayer {
    private:
    std::string name_ = "WHOAREYOU";
    int health_ = 99999;
    int experience_ = 99999;

    public:
    OldPlayer(){
        std::cout << "Before starting Constructor assignment : " << this->name_ << " " << this->health_ << " " << this->experience_ << std::endl;
        name_ = "None";
        health_ = 0;
        experience_ = 0;
    }

    OldPlayer(std::string name){
        name_ = name;
        health_ = 0;
        experience_ = 0;
    }

    OldPlayer(std::string name, int health){
        name_ = name;
        health_ = health;
        experience_ = 0;
    }

    OldPlayer(std::string name, int health, int experience) {
        name_ = name;
        health_ = health;
        experience_ = experience;
    }
    
    void SetName(std::string name) {
        name_ = name;
    }
    
    void SetHealth(int health) {
        health_ = health;
    }
    
    void SetExperience(int experience) {
        experience_ = experience;
    }

    std::string GetName() {
        return name_;
    }

    int GetHealth() {
        return health_;
    }

    int GetExperience() {
        return experience_;
    }
};


int main() {

    Player player_1;
    std::cout << player_1.GetName() << std::endl;
    std::cout << player_1.GetHealth() << std::endl;
    std::cout << player_1.GetExperience() << std::endl;
    std::cout << "=====================" << std::endl;

    Player *player_2 = new Player("Chongkumar");
    std::cout << player_2->GetName() << std::endl;
    std::cout << player_2->GetHealth() << std::endl;
    std::cout << player_2->GetExperience() << std::endl;
    delete player_2;
    std::cout << "=====================" << std::endl;

    Player player_3("tingesh", 10);
    std::cout << player_3.GetName() << std::endl;
    std::cout << player_3.GetHealth() << std::endl;
    std::cout << player_3.GetExperience() << std::endl;
    std::cout << "=====================" << std::endl;

    Player *player_4 = new Player("bomma", 11, 99);
    std::cout << player_4->GetName() << std::endl;
    std::cout << player_4->GetHealth() << std::endl;
    std::cout << player_4->GetExperience() << std::endl;
    delete player_4;
    std::cout << "=====================" << std::endl;

    OldPlayer old_player_1;
    std::cout << old_player_1.GetName() << std::endl;
    std::cout << old_player_1.GetHealth() << std::endl;
    std::cout << old_player_1.GetExperience() << std::endl;
    std::cout << "=====================" << std::endl;

    return 0;
}