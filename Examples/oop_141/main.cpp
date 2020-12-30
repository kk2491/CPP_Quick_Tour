#include <player.hpp>
#include <iostream>

int main() {

    {
        Player player_1;
        player_1.SetName("Chong");
        std::cout << "Here ?" << std::endl;
    }
    std::cout << "Or Here ?" << std::endl;

    {
        Player player_2("Tong");
    }

    Player player_3;
    Player player_4("Dinga");
    Player player_5("Manga", 10);
    Player player_6("Penga", 10, 90);

    player_3.SetName("Tunga");
    player_3.SetHealth(100.0);
    player_3.SetExperience(1.0);

    
    // Pointers
    Player *ptr_player_1 = new Player();
    ptr_player_1->SetName("Pongesh");
    Player *ptr_player_2 = new Player("Chongesh");
    Player *ptr_player_3 = new Player("Mangesh", 120);
    Player *ptr_player_4 = new Player("Dommesh", 100, 10);

    std::cout << "Here ? " << std::endl;

    delete ptr_player_1;
    std::cout << "Or Here ? " << std::endl;

    delete ptr_player_2;
    delete ptr_player_3;
    delete ptr_player_4;

    return 0;
}

    