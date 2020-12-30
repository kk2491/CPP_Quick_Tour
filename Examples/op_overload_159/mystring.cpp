#include "mystring.hpp"
#include <string>
#include <iostream>
#include <cstring>

// no args constructor
MyString::MyString()
    : str {nullptr} {
    str = new char[1];
    *str = '\0';
}

// over loaded constructor
MyString::MyString(const char *s) 
    : str(nullptr) {
    
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
    
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
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