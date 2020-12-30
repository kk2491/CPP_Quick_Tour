#include "mystring.hpp"

int main() {

    MyString empty;
    MyString larry("Larry");
    MyString stooge(larry);

    empty.Display();
    larry.Display();
    stooge.Display();

    return 0;
}