#include <iostream>
#include <string>
#include <iomanip>

template <typename T1>
T1 Max(T1 a, T1 b) {
    return (a > b) ? a : b;
}

template <typename T1, typename T2>
void PrintFunction(T1 a, T2 b) {
    std::cout << "Arg 1 : " << a << "  Arg 2 : " << b << std::endl;
    return;
}

struct Person {
    std::string name;
    int age;
    bool operator>(const Person &rhs) const {
        return this->age > rhs.age;
    }
};

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << person.name;
    return os;
}

template <typename T>
void SwapFunction(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    return;
}

int main() {

    // int 
    std::cout << "======= Max =======" << std::endl;
    int num1 = 100;
    int num2 = 200;
    std::cout << Max(num1, num2) << std::endl;
    std::cout << Max<int>(num1, num2) << std::endl;

    // double
    double d_num1 = 2.39;
    double d_num2 = 12.39;
    std::cout << Max(d_num1, d_num2) << std::endl;
    std::cout << Max<double>(d_num1, d_num2) << std::endl;

    // character
    char char_1 = 'A';
    char char_2 = 'B';
    std::cout << Max(char_1, char_2) << std::endl;
    std::cout << Max<char>(char_1, char_2) << std::endl;

    // Expression
    std::cout << Max(5 + 2 * 5 + 100, 600 - 300 * 3) << std::endl;

    // print - int and double
    std::cout << "======= Print =======" << std::endl;
    int i_print = 10;
    double d_print = 10.99;
    PrintFunction(i_print, d_print);
    PrintFunction(d_print, i_print);

    std::string s_print = "Kya be";
    char c_print = 'Z';
    PrintFunction(s_print, i_print);
    PrintFunction(c_print, s_print);

    PrintFunction<int, double>(10, 10.10);
    PrintFunction<double, int>(10, 10.10);
    // PrintFunction<std::string, int>(10, "LL");   // This gives error 

    // User defined function
    std::cout << "======= User Defined Class - Max =======" << std::endl;
    Person person_1{"KK", 29};
    Person person_2{"PK", 40};
    // Person person_1 = Person("KK", 29);
    // Person person_2 = Person("PK", 40);

    Person person_3 = Max(person_1, person_2);
    std::cout << person_3.name << " is older" << std::endl;

    std::cout << "======= User Defined Class - Max =======" << std::endl;
    Person person_4{"Tong", 99};
    PrintFunction<Person, std::string>(person_4, "alive");

    std::cout << "======= Swap Function =======" << std::endl;
    int i_swap1 = 100;
    int i_swap2 = 200;
    SwapFunction(i_swap1, i_swap2);
    std::cout << "After swap : " << std::setw(10) << i_swap1 << std::setw(10) << i_swap2 << std::endl;

    double d_swap1 = 100.11;
    double d_swap2 = 200.21;
    SwapFunction(d_swap1, d_swap2);
    std::cout << "After swap : " << std::setw(10) << d_swap1 << std::setw(10) << d_swap2 << std::endl;

    // Swap string - not possible 
    // std::string s_swap1 = "Chong";
    // std::string s_swap2 = "Mong";
    // SwapFunction(i_swap1, i_swap2);
    // std::cout << "After swap : " << s_swap1 << "  " << s_swap2 << std::endl;

    return 0;
}