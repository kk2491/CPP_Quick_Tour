#include <iostream>

void fun_1();
void fun_2();
void fun_3();

void fun_1() {
    std::cout << "Start - fun_1" << std::endl;
    fun_2();
    std::cout << "End   - fun_1" << std::endl;
    return;
}

void fun_2() {
    std::cout << "Start - fun_2" << std::endl;
    try {
        fun_3();
    }
    catch (int &s) {
        std::cout << "Start unwinding - fun_2" << std::endl;
    }
    
    std::cout << "End   - fun_2" << std::endl;
    return;
}

void fun_3() {
    std::cout << "Start - fun_3" << std::endl;
    throw 100;
    std::cout << "End   - fun_3" << std::endl;
    return;
}


int main() {

    try {
        fun_1();
    }

    catch(int &ex) {
        std::cout << "Stack unwinding" << std::endl;
    }

    return 0;
}