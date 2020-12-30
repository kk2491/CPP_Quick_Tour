#include <player.hpp>
#include <iostream>

int Player::num_players = 0;

Player::Player(std::string name, int health, int xp)
    : name {name}, health {health}, xp {xp} {
    ++num_players;
    std::cout << "Inside Constructor" << std::endl;
}

Player::Player(const Player &source)
    : Player(source.name, source.health, source.xp) {
    std::cout << "Inside Shallow copy constructor" << std::endl;
}

Player::~Player() {
    --num_players;
    std::cout << "Destructor" << std::endl;
}

std::string Player::GetName() {
    return name;
}

int Player::GetHealth() {
    return health;
}

int Player::GetXp() {
    return xp;
}

int Player::GetNumPlayers() {
    return num_players;
}