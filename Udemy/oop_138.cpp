#include <iostream>
#include <string>
#include <vector>

class Account {
    public:
    std::string name;
    double balance;

    bool WithDraw(double amount) {
        if ((balance - amount) <= 0) {
            return false;
        } else {
            balance = balance - amount;
        }
    }
    bool Deposit(double amount) {
        balance = balance + amount;
        return true;
    }

    double UpdateBalance(double amount);
};

class Player {
    public:
    std::string name;
    int health;
    int xp;

    void talk(std::string talking) {
        std::cout << talking << std::endl;
    }
    bool IsDead() {
        if (health == 0) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {

    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("who the hell are you?");
    if (frank.IsDead()) {
        std::cout << frank.name << " is dead" << std::endl;
    } else {
        std::cout << frank.name << " is not dead" << std::endl;
    }

    Player *frank_ptr = new Player();
    frank_ptr->name = "Frank Jr";
    frank_ptr->health = 0;
    frank_ptr->xp = 10;
    frank_ptr->talk("Crap, I am dead");
    if (frank_ptr->IsDead()) {
        std::cout << frank_ptr->name << " is dead " << std::endl;
    } else {
        std::cout << frank_ptr->name << " is not dead " << std::endl;
    }

    // Bank 
    Account krishna;
    krishna.name = "Krishna";
    krishna.balance = 100;
    
    double deposit = 200.0;
    if (krishna.Deposit(deposit)) {
        std::cout << "Deposited : " << deposit << "  New balance : " << krishna.balance << std::endl; 
    } else {
        std::cout << "Deposit not possible" << std::endl;
    }

    double withdraw = 100.0;
    if (krishna.WithDraw(withdraw)) {
        std::cout << "Withdrawn : " << withdraw << " New balance : " << krishna.balance << std::endl;
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }

    return 0;
}