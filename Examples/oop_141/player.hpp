#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {
    private:
    std::string name_;
    int health_;
    int experience_;

    public:

    // Constructor
    Player();
    Player(std::string name);
    Player(std::string name, int health);
    Player(std::string name, int health, int experience);
    // and Destructor
    ~Player();

    void SetName(std::string name);
    void SetHealth(int health);
    void SetExperience(int experience);
    std::string GetName();
    int GetHealth();
    int GetExperience();
    bool IsPlayerDead();
};

#endif