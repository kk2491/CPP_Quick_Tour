#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <string>
#include <cstring>

class MyString {

    friend std::ostream &operator<<(std::ostream &os, const MyString &obj);
    friend std::istream &operator>>(std::istream &is, MyString &obj);

    private:
    char *str;

    public:
    MyString();                         // no args constructor
    MyString(const char *str);          // over loaded constructor
    MyString(const MyString &source);   // Copy constructor using deep copy
    MyString(MyString &&source);        // Move constructor
    ~MyString();                        // Destructor

    void Display() const;
    int GetLength() const;
    const char *GetStr() const;

    // Operator overloading
    // Assignment operator 
    MyString &operator= (const MyString &rhs);  // Copy assignment
    MyString &operator= (MyString &&rhs);
};

#endif  // _MYSTRING_H_