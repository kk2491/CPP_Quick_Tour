#include "mystring.hpp"

int main() {

    MyString obj_1("Hello");
    MyString obj_2;

    obj_1.Display();
    obj_2.Display();

    obj_2 = obj_1;
    obj_1.Display();
    obj_2.Display();

    // doubt how come this is working? "Test" is not the object 
    obj_2 = "Test";
    obj_2.Display();

    return 0;
}