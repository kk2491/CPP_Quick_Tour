#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include <iostream>

class Player {

    private:
    static int num_players;
    std::string name;
    int health;
    int xp;

    public:
    Player(std::string name = "None", int health = 0, int xp = 0);
    Player(const Player &source);
    ~Player();

    std::string GetName();
    int GetHealth();
    int GetXp();

    static int GetNumPlayers();
};

#endif // _PLAYER_H