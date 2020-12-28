#include <player.hpp>
#include <iostream>

Player::Player() {
    std::cout << "Default Empty Constructor" << std::endl;
}

Player::Player(std::string name) {
    name_ = name;
}

Player::Player(std::string name, int health) {
    name_ = name;
    health_ = health;
}

Player::Player(std::string name, int health, int experience) {
    name_ = name;
    health_ = health;
    experience_ = experience;
}

Player::~Player() {
    std::cout << "Destuction of " << name_ << std::endl;
}

void Player::SetName(std::string name) {
    name_ = name;
}

void Player::SetHealth(int health) {
    health_ = health;
}

void Player::SetExperience(int experience) {
    experience_ = experience;
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

