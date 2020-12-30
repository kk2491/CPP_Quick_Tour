#include <player.hpp>

void DisplayNumPlayers() {
    std::cout << "Number of players : " << Player::GetNumPlayers() << std::endl;

}

int main() {

    DisplayNumPlayers();    // 0
    
    Player sachin("Sachin");
    DisplayNumPlayers();    // 1

    Player gangu("Gangu", 100, 10);
    DisplayNumPlayers();    // 2

    {
        Player timba("Tim", 11, 11);
        std::cout << "Health : " << timba.GetHealth() << std::endl;
        DisplayNumPlayers();    // 3
    }

    DisplayNumPlayers();    // 2

    Player *player_ptr_1 = new Player("Chm");
    DisplayNumPlayers();    // 3

    {
        Player *player_ptr_2 = new Player("Gggg", 10, 10);
        DisplayNumPlayers();    // 4
        delete player_ptr_2;
    }

    DisplayNumPlayers();    // 3

    delete player_ptr_1;

    DisplayNumPlayers();    // 2

    return 0;
}