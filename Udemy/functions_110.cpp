#include <iostream>
#include <vector>

int global_variable = 999;

void GlobalExample() {

    std::cout << "Inside function : " << global_variable << std::endl;

    return;
}

void StaticExample() {

    static int static_variable = 0;

    std::cout << "Static Variable : " << static_variable << std::endl;

    static_variable = static_variable + 100;

    return;

}


int main() {

    int a = 100;
    int b = 200;

    std::cout << a << "  " << b << std::endl;

    {
        int a = 111;
        std::cout << a << "  " << b << std::endl;

    }

    GlobalExample();
    std::cout << "Main : " << global_variable << std::endl;

    StaticExample();
    StaticExample();
    StaticExample();

    return 0;
}