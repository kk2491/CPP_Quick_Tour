#include "mystring.hpp"
#include <string>
#include <iostream>
#include <cstring>

// no args constructor
MyString::MyString()
    : str {nullptr} {
    std::cout << "No args constructor called" << std::endl;
    str = new char[1];
    *str = '\0';
}

// over loaded constructor
MyString::MyString(const char *s) 
    : str(nullptr) {
    std::cout << "Over loaded constructor called : " << s << std::endl;
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

// copy constructor
MyString::MyString(const MyString &source) 
    : str {nullptr} {
    std::cout << "Copy Constructor called" << std::endl;
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

// Move constructor
MyString::MyString(MyString &&source)
    : str {source.str} {
    source.str = nullptr;
    std::cout << "Move constructor called" << std::endl;
}

// Destructor
MyString::~MyString() {
    delete [] str;
}

// Display method 
void MyString::Display() const {
    std::cout << str << " : " << GetLength() << std::endl;
}

// Length getter
int MyString::GetLength() const {
    return std::strlen(str);
}

// String getter
const char *MyString::GetStr() const {
    return str;
}

// Copy assignment operator
MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "Calling copy assignment - operatot overloading" << std::endl;

    if (this == &rhs) {
        return *this;
    }

    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

// Move assigment operator
MyString &MyString::operator=(MyString &&rhs) {

    std::cout << "Move assignment" << std::endl;

    if (this == &rhs) {
        return *this;
    }

    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

std::ostream &operator<<(std::ostream &os, const MyString &obj) {
    os << obj.str;
    return os;
}

std::istream &operator>>(std::istream &is, MyString &obj) {

    char *buff = new char[1000];
    is >> buff;
    obj = MyString(buff);
    delete [] buff;
    return is;
}






