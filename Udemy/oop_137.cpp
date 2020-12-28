#include <iostream>
#include <string>
#include <vector>

class Account {
    std::string name;
    double balance;

    bool WithDraw(double amount);
    bool Deposit(double amount);
    double UpdateBalance(double amount);
};

class Player {
    
    std::string name;
    int health;
    int xp;

    void talk(std::string);
    bool IsDead();
};

int main() {
    // Normal declaration
    Account account_1;
    
    // Using Heap
    Account *account_2_ptr = new Account();
    delete account_2_ptr;

    // Using Heap 
    Account *account_3_ptr = nullptr;
    account_3_ptr = new Account; // same as account_3_ptr = new Account();
    delete account_3_ptr;

    // Array of Players 
    Player krishna, bannad, deepak; 
    Player players[3] = {krishna, bannad, deepak};

    // Vector of Players
    std::vector<Player> players_vector;
    players_vector.push_back(krishna);
    players_vector.push_back(deepak);

    // Pointers - testing
    Player new_player;
    Player *new_player_ptr = nullptr;
    new_player_ptr = &new_player;

    // Pointers - heap dynamic allocation
    Player *dyn_player_ptr = new Player;

    // This gives error if public not specified explicitly 
    // std::cout << "Access : " << dyn_player_ptr->name << std::endl;

    return 0;
}