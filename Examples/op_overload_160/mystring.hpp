#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <string>

class MyString {
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

    MyString &operator= (const MyString &rhs);  // Copy assignment
    MyString &operator= (MyString &&rhs);
};

#endif  // _MYSTRING_H_