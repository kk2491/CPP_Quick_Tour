## UNDER CONSTRUCTION


**Compiler Errors**

Syntax Error - Structure  
Symantic Error - Meaning of the code int + class  

**Compiler Warnings**

This might lead to potential problem

Example : Uninitialized variables

**Linker Errors**

object file is created after compilation, but when creating the executable not able to link the code.

undefined reference to something  
No compiler errors 


**Runtime Errors**

Errors while executing / running the code.

Divide by 0, file not found, out of memory etc

**Logic Errors**





**Functions**

Why seed in random - without seed random number generated is random however the sequence is not random.

srand(seed number) needs to be called before calling rand() to avoid the same pattern

**Function definition**

**Function prototype** - Compiler must know about the function before it is called 


types of passing parameters:

**Pass by value** :
Good - Bcz passed value is not changed accedentaly
Bad - Bcz of memory, time 

Formal Parameters: parameters defined in the function header
Actual Parameters: parameters used in the function call

int function(int a) {  // Copy of actual a - memory location is different
    a = a + 1;
    return a;
}

int main() {
    int a;
    function(a);    // a is memory location XXXX
}

int, string, vectors - actual parameters does not change
array - actual parameter changes

**Default argument values**


**Overloading**

Works only for the arguments. Not for the return types. 

Doubt : What is c style string

void Print(int num){}

int a = 10;
Print(a)    // Print int

double a = 1.111
Print(a)    // Converts the float to int and then prints int

Print('A'); // Converts to char to float and ASCII is printed 

void Print(double a) {}
double a = 11.001   // Prints double
float b = 112.112   // Converts double to float and then prints


**Passing array to a function**
Array name - refers to the address or location in memory of the first element in an arrays
Arrays to functions - Array elements are not copied, only the address of the first element is passed
Function has no idea how many elements are there in the array since only address of the first element is being passed.

Array can be modified within the function.

This can be avoided by adding const to the formal parameter. 


doubt : Heap and Stack - which is faster and which one is which ?


**Pass by Reference**
create the alias which is pointing to the same address. This is just alias of subject variable.

doubt : Pass by address or Pass by pointer
doubt : reference variables 
https://www.youtube.com/watch?v=NGKt3Xwlobg&ab_channel=CppNuts


use pass by reference in vectors to avoid the copy of the vector (which increases the memory usage)

while passing in reference use const if you dont want the vector to be modified.

https://www.programiz.com/cpp-programming/pointers-function

**Scope Rules**
Static Local Variables:
Value preserved within function calls
Initialized only once, default initialization is zero

Global Scope
Global variables should be avoided, constant is ok to use.

Look for inner scope or block, if found take that. Else use the outer scope.


**How do Function Call works**

Functions use function call stack
LIFO - Last In First Out
Push and Pop

Stack Frame or Activation Record 
Each time function is called Activation Record is created and pushed to the function call stack
When function terminates pop the Activation record
Local variables and function parameters are stored in stack

Stack size is finite - Stack overflow - program will terminate 

Memory for program
-------------------------
|                       |
|                       |
|                       |
|  Heap - Free Storage  |
|                       |
|                       |
|                       |
-------------------------
|                       |
|         Stack         |
|                       |
-------------------------
|    Static Variables   |   --> Global variables
-------------------------
|                       |
|     Code Area         |
|                       |
-------------------------

Fuction calls - doubt Stack pointer movement when functions called 

doubt : https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535514#overview


**Inline Functions**

Inline codes used to avoid function call overhead (activation record - returning back to the original function flow)  

Function call overhead is greater than the function execution time.

Inline functions used to : 
generate inline code  
inline assembly code  
avoids the functions call overhead


**Time Elapsed** 
https://www.techiedelight.com/measure-elapsed-time-program-chrono-library/


doubt : Header files time.h and chrono and unistd.h


**Recursive Functions**
Function calling itself.
2 or more activation record on the stack for the same function then it is recursion.

if recursion does not stop - infinite recursion
resource intensive
base cases are very important
anything that can be done recursively can be done iteratively 


Binary search tree, Depth first search, Breadth first search, 
Fibanocci, Factorial of a number, 


doubt : Fibanocci series
https://www.youtube.com/watch?v=dxyYP3BSdcQ&ab_channel=mycodeschool


**Memory Allocation**

Each block is one byte.

-------------------------------------------------------------------------------------
| 0x0 | 0x1 | 0x2 | 0x3 | 0x4 | 0x5 | 0x5 | 0x6 | 0x7 | 0x8 | 0x9 | 0xa | 0xb | 0xc | 
-------------------------------------------------------------------------------------

int takes 4 bytes


**Stack and Heap**
https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/



**Pointers**

**Why pointers**

180 mins

Allocating and deallocating memory during runtime

C++ gives more power over machine. C++ used in OS, System software device drivers, embedded systems etc.

Pointer is a variable whose value is an address

Pointer points to a variable or a function 

Why pointers?


Declaring pointers:
variable_type *pointer;

if pointer is not initialized it contains garbage address

doubt
char *char_pointer - does not have a garbage address
string *str_pointer - assigned address is 0

doubt : initialization of char and string pointer to nullptr 

pointer should be always initialized
Use nullptr to initialize nullptr so that pointer is pointing to nowhere - address is 0

note: typeid(variable).name() - gives the data type of the variable
https://stackoverflow.com/questions/16268090/understanding-the-output-of-typeid-name

int    - i 
float  - f
double - d
char   - c
string - A4 c

pointer can be initialized to nullptr with * during declaration or later as below.
Approach 1: int *p = nullptr;
Approach 2: int *p;
            p = 0;

doubt : Pointer initialization while declaratio
Approach 1      int data = 10;
                int *ptr = &data; 

Approach 2      int data = 10;
                int *ptr = nullptr;
                ptr = &data;

Pointers are variables - they can change
Pointers can be null
Pointers can be uninitialized

Deference pointer - using *


Note: Deferencing string pointer assigned to null - and trying to print causes segmentation fault 

Pointer can be reassigned such that it can point to different memory location

Derefrerencing vector pointer
vector = {1, 2, 3, 4, 5}
*vector_ptr = &vector; -- pointing to the vector vector
print *vector_ptr -- points to the vector vector - to get the individual elements
print (*vector_ptt).at(0)


*Dynamic Memory Allocation* -- Pointers topic 

Allocating storage at run time
Allocation of Storage from **heap** by using new keyword

    int *ptr = new int;

    or

    int *ptr = nullptr;
    ptr = new int;

If the pointer lost - then it is not possible to get back the variable 
only way to access the storage is via pointers

allocate and deallocate the storage - Heap

Memory Models

-------------------------
|                       |
|                       |
|                       |
|  Heap - Free Storage  |
|  Dynamic Allocations  |
|       By user         |
|                       |
|                       |
|                       |
-------------------------
|                       |
|   Stack - Func call   |
|     Push and pop      |
|                       |
-------------------------
|    Static Variables   |   --> Global variables
-------------------------
|                       |
|     Code Area         |
|                       |
-------------------------

doubt - memory leak

Memory will run out if there is no space in the heap

**Pointer and Array** 

array[3] = {1, 2, 3}
print(array)    -   prints the address of the first element
print(*array)   -   prints the first element

*array_ptr = array
print(array_ptr)    - address of the first element
print(*array_ptr)   - value of the first element

in arrays pointers are same as normal variables means:

*array_ptr = array
array[0] array[1] array[2] = array_ptr[0] array_ptr[1] array_ptr[2]

Array can be accessed using below
array_name[index]
array_ptr_name[index]
*(array_name + offset)
*(array_ptr_name + offset)



Pointer Arithmetic

++ and -- 
based on the size of the datatype of the variable the pointer is pointing to

+ and - 
pointer + n 
(address) + (n * size_of_datatype)
(address) - (n * size_of_datatype)

Subtracting 2 pointers 
int n = ptr_1 - ptr_2  (datatype should be same else compiler error)
Returns the number of elements between the 2 pointers

Comparing 2 pointers == and != 
if both the pointers are pointing to the same address then == true 


for (i from 0 to n) {
    print(*score_ptr)
    score_ptr++
}

is same as 
deference the pointer then increment the pointer

for (i from 0 to n) {
    print(*score_ptr++)
}

note: C style string
char name[] = "Name";

**const and pointers** (doubt)
* Pointers to constants
* constant pointers
* constant pointers to constants

Pointers to constants - Points to a variable which should remain constant, pointer can point to different variable
    error: assignment of read-only location
    note : variable can be changed by using the actual variable num_1 = 100 to num_1 = 111 is allowed..
           num_1_ptr = &num_1
           *num_1_ptr = 9990119 - Is not allowed - Error
           but can not (should not) changed usng the pointer variable


Constant pointers - Pointer can not be pointed to different variable, the pointed variable can change
    error: assignment of read-only variable ‘num_2_ptr’
    note : num_2_ptr = &num_2
           num_2_ptr = &num_2_new_var - Not allowed - Error
           Note: can not be initialized with null pointer


Constant pointers to constants - Pointers can not be pointed to different address and variable should not change 


Pass by reference using pointers 




**Returning pointer from a function**
Functions can return pointers
The datatype of the pointer needs to be specified
doubt: Never return a pointer to a local function variable

Return dynamically allocated array

Note: Pointer from the Heap can be returned from a function 
        locally created pointer can not be returned from a function - because function stack gets cleared after the function execution

DONT DO THIS
int *function_1() {
    int size;
    return &size;
}
size is local to the function, function call stack gets cleared

**Pointers potential pitfall**
1. Uninitialized pointers
    pointing to garbage

2. Dangling pointers
    Pointing to memory that is no longer valid 
    2 cases
        Pointer pointing to something from the function which is already terminated, returning a local variable pointer from function
        2 Pointers pointing to the same address, one pointer releases the memory. but second pointer still trying to access the same

3. Not checking if new failed to allocated memory
    if new fails to allocate memory - exception is thrown
    exception handling catch expception
    dereferening null ptr caused program to crash

4. Leaking memory  
    Forgot to release the dynamically allocated memory
    Lose the pointer - no longer accessible
    memory is orphaned or leaked

**References**
1. Alias for a variable
2. Must be initialized to a variable when created / declared
3. Can not be null
4. Once initialized can not be made to refer to other variables

It is preferrable to use reference in for loop of vectors as it does not create new copy of the variables, hence no extra memory is used.
However for printing it is better to use const key word as using the reference changes the original vector element.
Changing the reference changes original variable and vice versa.

**L Values and R Values**
doubt - l values, r values

l values - variables which have names and can be addressed
    int num;                num is l value
    x = 100                 x is l value
    string name = "chong"   name is l value

r values - variables which are not l values
    x = 100         100 is r value
    name = "chong"  chong is r value

int max = max(20, 30)   
    max - l value
    max(20, 30) - r value

references should be assigned to l values
    int num = 100;
    int &num_ref1 = num;    Correct
    int &num_ref2 = 100;    Incorrect / error

doubt codeLite : debug


**Imp When to use pointers and references**

Pass by value
    When function does not modify actual parameters
    When parameters are small and efficient to copy the elements (int, char, double)

Pass by reference using pointer 
    When the function does modify the actual parameters
    When the parameter is extensive to copy
    Its OK to the pointer allowed a nullptr value - useful in data structures

Pass by reference using a pointer to const
    When the function does not modify the actual parameters
    When the parameter is extensive to copy
    Its OK to the pointer allowed a nullptr value - useful in data structures

Pass by reference using a const pointer to const
    Above 3
    You dont want to modify the pointer itself
    (pointer is not moving, the data pointing to is not changing)

Pass by reference using a reference
    When the function does modify the actual parameters
    When the parameter is extensive to copy
    The parameter will never be nullptr
    
Pass by reference using a const reference
    When the function does not modify the actual parameters
    When the parameter is extensive to copy
    The parameter will never be nullptr


**Object Oriented Programming**

doubt : shallow copying, deep copying, this pointer, copy constructor 

Abstraction, Encapsulation

Class Player {
    string name;
    string number;
    int age;
    int experience;

    bool IsAvailable();
    void UpdateScores();
};

Player player_1;
Player *player_ptr = new Player();
delete player_ptr;

Note: by default string is initialized to empty (not garbage)

dot operator - normal object
arrow operator - pointer

dereference the pointer and use the dot operator 
    MyClass class_object;
    class_object.method()
    class_object.attributes

    MyClass *pointer_class_object = new MyClass();
    pointer_class_object->method()
    pointer_class_object->attribute
    (*pointer_class_object).method()
    (*pointer_class_object).attribute

**Public and Private**
public - accessible everywhere  
private - accessible only by members of the same class or friends of the same class
protected - used with inheritance 

Default : everything is Private

doubt : include guards - 
#ifndef _SYMBOL_ -- Checks if the _SYMBOL_ is present if present dont process go to #endif else go to #define and process
#define _SYMBOL_
.
.
.
#endif 


#pragma once - same as ifndef 

double pragma once

Style Guide
https://users.ece.cmu.edu/~eno/coding/CppCodingStandard.html#classnames
https://guiquanz.gitbooks.io/google-cc-style-guide/content/ebook/Naming.html
https://guiquanz.gitbooks.io/google-cc-style-guide/content/ebook/Classes.html


CMAKE - Imp
http://derekmolloy.ie/hello-world-introductions-to-cmake/

doubt:
shared library or dynamic libraries - run time
static library or archives - compile time linked by linker

**Constructors**
Special member method
Useful for initialization
Can be overloaded 
No return type
Same as class name
Invoked during object creation

**Destructors**
Special member method
Same as class name preceeded with ~
Invoked when object is destroyed
No return type
Only one destructor per class can not be overloaded
Release memory and other resources 

{
    Class class_object;
}
destuctor is called here - as soon as this block is over
Destuctor is called right before object is destroyed 

Class *ptr_object = new Class();
delete ptr_object;
Destruction is called as soon as delete ptr_object is called 

**Default Constructor**
Does not except any arguments
Also called as no-args constructor 

if no constructor is written, then C++ generates Default constructor

System generated no-args constructors.

Once Use defined constructor is impemented (with or without arguments) system stops generating no args constructor

Class Item {
    private:
    string name;
    int roll_num;

    public:
    Item(){         -- if this is not defined, then system will generate Default constructor
        name = "None",
        roll_num = 0;
    }
}

Item item_1; --- No error

Class Item {
    private:
    string name;
    int roll_num;

    public:
    Item(string new_name, int num){         -- if this is not defined, then system will generate Default constructor
        name = new_name,
        roll_num = num;
    }
}

Item item_1("kk", 109)  -- No error
Item item_2;            -- compiler error   -- System stopped generating default constructor


Overloading constructor 

Avoid garbage data in created objects 

**Construction Initialization Lists**

In normal Constructor - how intialization happens... 
Object created and members have some garbage values then it is reassigned to the values given in the constructor
This is not true initialization

Initialization needs to happen when the object is created

Player {
    private:
    string name;
    int health;
    int experience;

    public:
    Player():name{"None"}, health{0}, xp{0}
    // Player():name = "None", health = 0, xp = 0
}

Player class_object("KK", 100.0, 200.0)

Normal constructor - assignment == Ineffient way to initialize

doubt : this pointer

Constructor Initialization list - Initialization order depends on the order variables declared

Before normal constructor is called, variables are assigned to garbage variables or initlized values in declaration of each variables.

**Delegating Constructor**

One true initialization with all arguments and rest all uses the same initialization - just pass the template

Player(string name, int health, int xp) : name_ {name}, health_ {health} xp_ {xp}

Player() : Player("None", 0, 0) {}

Player(string name) : Player(name, 0, 0) {}

Player(string name, int health) : Player(name, health, 0) {}

Player(string name, int health, int xp) : name_ {name}, health_ {health}, xp_ {xp}

**Constructor parameters and Default values**
Passing default argument values in constructor

Single Constructor with initialization list

Player::Player(string name = "None", int health = 0, int experience = 0)
    : name_ {name}, health_ {health}, experience_ = experience {}

doubt : All the agruments in the function declaration needs to be assigned with default value if one of the argument has default value.

**Copy Constructor**
doubt : why copy constructor is used ?

Copy the object.. 
Create new object from the existing object 

what is the default copy constructor used by C++ 

doubt : Default initializer values should be mentioned in both declaraion and definition ?
https://stackoverflow.com/questions/4989483/where-to-put-default-parameter-value-in-c

By default C++ has its own Copy constructor which would be invoked whenver a copy is made or new object is created from existing object.

Copy constructor is a constructor which can be used / implemented when a new object is created from the existing object.

**Shallow and Deep Copy**

**Shall Copy**
memberwise copy of all the attributes
When there is a pointer as attributes, it copies the pointer (address) not the value it is pointing to.
Hence when storage is released in the destructor, the other object is still pointing to the old address which is invalid now.

Any class has raw pointer as data member will face this shallow copy issue 

Error : double free or corruption (fasttop)

2 pointers pointing to the same Memory and one in invoking the Destructor and clears the data.
Now the other pointer is still looking at the same address which is already cleared.

todo: Impplement using the default copy constructor 


**Deep Copy**
We just dont copy the pointer, the data being pointed is copied
each copy will have a unique storage in the heap and 

Create new storage and copy the value 


**Move Constructor**
Move Semantics

l value - variable is addressable
r value - everything else 

In move semantics - r value temporary values created by compiler

int total = 0       0 - r value         total - l value
total = 200 + 300   (200+300) r value   total - l value

void LFunction(int &&r_value)
void RFunction(int &l_value)

LFunction(100)  - Compiler Error
RFunction(100)  - Ok
int n = 200;
LFunction(n)    - Ok
RFunction(n)    - Compiler Error

deep copy needs to be implemented whenever there is a pointer in the  member attributes.
Deep copy is expensive as it needs to allocate memory every time a copy is created 

if Move Constructors are not implemented - Copy constructors will be called

Copy Elision - Sometime Copy constructor or move constructor may not be called. This is because compiler optimizes the code
RVO - Return Value Optimization

r value references - references to temporary values &&

Move Constructor - Steals the data and nulls out the pointer 

doubt : noexcept in function declaration and definition

doubt : Move Constructor

Move constructor needs minimum C++11

**this pointer**
this contains the address of the current object - pointer to the object
can be used within the scope of the class (same as self)
All member access done is this pointer
*this can be used to dereference the object 

void Account::SetBalance(double balance) {
    balance = balance;  // Ambigious - same variable name
}

can also be written as 
void Account::SetBalance(double balance) {
    this->balance = balance;
}

Using for comparison of 2 objects

**Using const with Classes**
const correctness - Compiler throwing Error whenever you try to modify the object inside a const function

1. Creating const class object
    This does not allow the function to modify the objects - If you try to modify Compiler errir
    This effects the Get functions as well - for this add const at the end of the functions - 
        Compiler things Get might change the object... 
        stating to compiler this functions do not change the value
    If there is some modification in the functions with consts - again compiler error

2. 

Rule of thumb - const for all the getter methods



**Static Class Members**

These are not part of any objects, these variables belong to the class

class Player {
    private:
    static int num_players;     // this belongs to the class
    public:
    static int GetNumPlayers(); // this belongs to the class
}

static variables can not be initialized in class :
error: ISO C++ forbids in-class initialization of non-const static member ‘Player::num_players’
Usually done in the .cpp file starting 


Once the function is static - it can have access to only static variables (not to object varialbes)

doubt : iostream header files in .hpp or .cpp or both places ?

static - is not associated with objects, hence call would like below
ClassName::Static_Functin_Name()

**Struct vs Class**
struct comes from C programming language
struct - all members are public by default
class  - all members are private by default

struct
passive data with public access
dont declare methods in struct 

class 
private access 
Implement getter setters
Implement member methods


**Friends of a Class**

function or class that has access to private class members
Function, class member, another class

Friendship is not taken, it should be granted keyword "friend"

Friendship is not symmetric
A is friend to B, but B cant be friend to A unless granted

Not transitive
A -> B, B -> does not mean A -> C

doubt : using member of other class as friend - getting error 
doubt : using another class as friend - getting error 

=================================


## Operator Overloading 

Operator overloading in Classes 

Traditional operators + = * 

C++ Allows users to define their own operator overloding for the custom data types

Only assignment operator = has built in operator overloadng, rest all operations need to be defined explicitly

Most of the operators can be overloaded except :: , :? , sizeof , .* , . 

Precedence and associativity : 
https://www.youtube.com/watch?v=8H9G621pQq0&ab_channel=NesoAcademy


1. Precedence and Associativity can not be changed
2. doubt - arity can not be changed
3. cant overload operators wit built in types 
4. cant create new operators

doubt : operator overloading example used in the code 


Operator overloading :

Note:   MyClass obj1;
        MyClass obj2 = obj1;    = This is initialization - not assignment operator

        MyClass obj1(1, 2, 3);
        MyClass obj2(4, 5, 6);
        obj1 = obj2;


Type &Type::operator=(const Type &rhs)

MyClass &MyClass::operator=(const MyClass &rhs)

Example:
    s2 = s1             = We do this
    s2.operator(s1)     = Compiler does this


    s2 = s1             s2 -> this  s1 -> passed
    s2.operator(s1)

    MyString &MyString::operator=(const MyString &rhs) {

        if (this == rhs) {
            return *this;
        }

        delete [] str;
        str = new char[len(rhs) + 1]
        copy(str, rhs.str)
        return *this
    }

Copy Assignment operator
    
    a   -----------
        |         |
        |   str   |
        | (addr1) |
        |         |
        -----------

    b   -----------
        |         |
        |   str   |
        | (addr2) |
        |         |
        -----------

    MyString a("Object1")   // Overloaded constructor
    MyString b("Object2")   // Overloaded constructor
    Note that both are l values

    a = b
    Copy the data from b to a using deep copy and do not delete b


**Move Assigment Operator**

    MyString &MyString::operator=(MyString &&rhs) {

        if (this == &rhs) {
            return *rhs;
        }

        delete [] rhs
        str = rhs.str

        // No need to create new dynamic storage 
        rhs.str = nullptr
        return *rhs
    }

    a   -----------
        |         |
        |   str   |
        | (addr1) |
        |         |
        -----------

        -----------
        |         |
        |   str   |
        | (addr2) |
        |         |
        -----------

    The one we are assigning is temporary means r value.
    Move the data from temporary to a and null the the temporary.

    MyString a("Object1")
    a = MyString("Object2")     

    doubt : Go through move constructor and copy constructor again

**Overloading operators as Member functions**

Unary operators as member methods ++, --, - , !

unary operators work on one operand.

ReturnType Type::operatorOp();

    Number Number::operator-() const;
    Number Number::operator++();    // pre-increment
    Number Number::operator++(int)  // post-increment (additional argument int)
    bool Number::operator!() const; // 

Examples:
    Number n1(100);
    Number n2 = -n1;    // n1.operator-()
    n2 = ++n1           // n1.operator++()
    n2 = n1++           // n1.operator++(int)

No parameters - attributes accessed by this pointer (singles operand remember)

MyString class unary - convert to lower case


    MyString MyString::operator-() const {
        char *buff = new char[len(this->str) + 1]
        std::strcpy(buff, this->str)

        for (each_letter in buff) {
            buff[i] = tolower(each_letter)
        }

        MyString temp(buff)
        delete [] buff
        return temp
    }



**Binary operators - +, -, ==, !=, <, >**

    ReturnType Type::operatorop(const &Type rhs)

Examples:
    
    Number Number::operator+(const Number &rhs);
    Number Number::operator-(const Number &rhs);
    bool Number::operator==(const Number &rhs);
    bool Number::operator!=(const Number &rhs);
    bool Number::operator>(const Number &rhs);
    bool Number::operator<(const Number &rhs);

    Number n1(200);
    Number n2(300);

    Number n3 = n1 + n2     ->  n1.operator+(n2)
    Number n3 = n1 - n2     ->  n1.operator-(n2)
    bool eq = (n1 == n2)    ->  n1.operator==(n2)


MyString - Equality

    bool MyString::operator==(const MyString &rhs) {

        if (strcmp(this->str, rhs.str) == 0) {
            return true;
        } else {
            return false;
        }
    }

    if (s1 == s2) 

MyString - Binary addition - Concatenation

    MyString obj_1("King")
    MyString obj_2("Queen")
    MyString obj_3
    obj_3 = obj_1 + obj_2       // OK
    obj_3 = obj_2 + obj_1       // OK
    obj_3 = obj_1 + "Check"     // OK
    obj_3 = "New" + obj_1       // Error - LHS should be object of the class

    MyString MyString::operator+(const MyString &rhs) {
        lhs_length = len(this->str)
        rhs_length = len(rhs.str)

        char *buff = new char[lhs_length + rhs_length + 1]

        std::strcpy(buff, this->str)
        std::strcat(buff, rhs.str)

        MyString cont_string(buff)
        delete [] buff

        return cont_string
    }


**Overloading operators as Global functions**

    ReturnType operatorop(const Type &lhs, const Type &rhs)

    Number operator+(const Number &lhs, const Number &rhs)
    Number operator-(const Number &lhs, const Number &rhs)
    Number operator==(const Number &lhs, const Number &rhs)
    Number operator<(const Number &lhs, const Number &rhs)

    Number n1(100);
    Number n2(200);
    Number n3 = n1 + n2
    Number n4 = n1 - n2


    Global function is declared as Friend to class - to get easy access to the Class private attributes

    member and non member functions - we can not have 2 in same

doubt : CPP assumes primitive pointer not objects
https://stackoverflow.com/questions/22146094/why-should-i-use-a-pointer-rather-than-the-object-itself

doubt : unary - and binary - in case of operator overloadin


**Overloading the stream extraction and insertion operator**

doubt : difference between ostream, iostream

<< and  >>

For example :   Extraction
                MyString larry("Larry")
                cout << larry << endl;  -> Print "Larry"

                Player hero("Larry", 10, 11)
                cout << larry << endl;  -> Print Name: Larry, Health: 10, Experience: 10

                Insertion
                MyString obj1;
                cin >> obj1

If the stream insertion and extraction implemented as member function, the lhs should be class object
    object << cout
    object >> cin

These operator overloading will be implmented as part of global function

insertion  << --- To print on console
extraction >> --- To read from console

**insertion operator**
std::ostream operator<<(std::ostream &os, const MyString &obj) {
    os << obj.str       // If this is the friend 
    os << obj.GetStr()  // If not declared as friend
    return os
}

**extraction operator**
std::istream operator>>(std::istream &is, MyString &obj) {
    char *buff = new Char[1000]
    is >> buff
    obj = MyString(buff)
    delete [] buff
    return is
}




## Inheritance

New classes from the existing class 
New class contains the data and behaviors of the existing class
Reuse of existing classes

  Parent 
    |
    |
    |
  Child - Can be modified without modifying Parent


Class Account {
    Balance, Withdraw, Deposit
}

Class SavingsAccount : public Account {
    Interest rate, Specialized withdraw
}

Class CheckingAccount : public Account {
    Min balanace, Per check free, Specialized withdraw
}

Class TrustAccount : public Account {
    Interest rate, Specialized withdraw window
}

Terminology:
Single Inheritance - A new class from single base class
Multiple Inheritance - A new class from multiple base class

Base Class (parent class, super class):
    The class being extended or inherited from

Derived Class (child class, sub class):
    Class being created from Base class
    Inherits attributes and operations from base class

            Base Class
                ^
                |
                |
           Derived Class


Is a Relationship
Generalization
Specialization
Inheritance or Class heirarchies

Classes:
    A                                   
    B is derived from A
    C is derived from A
    D is derived from C
    E is derived from D

Generalization (Root class)
    As we go down Generalization decreases
    Specialization increases

                  Person 
                    |
        Employee             Student
            |
Faculty   Staff   Admin    
    

**Inheritance and Composition**

Inheritance - In relationship
    Person is student or faculty
    Circle is shape

Composition - Has relationship
    Person has account
    Shape has dimensions

doubt : Object oriented design course


**Inheritance Syntax**

class Base {
    Base class members
}

Class Derived : access-specifier Base {
    Derived class members
}

access specifiers - public, private, protected
    default access specifier - Private

Types of inheritance: (public, private, protected)

public:
    Most common
    Establishes "is a" relationship

todo (doubt) : private and protected inheritance

class Account {
    Withdraw()
    Deposit()
}

class SavingsAccount : public Account {
    UpdateInterest()
}

Account account_1;
account_1.Withdraw();

SavingsAccount sa_1;
sa_1.Withdraw();

When child object is created - Parent constructor is also called by default

For example

    Account

    ----------
    |
    |
    |
    |
    |
    |


**Protected Members and Class access**

Protected:
    Accessible from base class
    Accessible from classes derived from base class
    Protected acts like private - no accessible from objects of base and derived class

1. Public inheritance

    Base Class              Access in derived class
    public    : a           public    : a
    protected : b           protected : b
    private   : c           no access : c

2. Protected inheritance

    Base Class              Access in derived class
    public    : a           protected : a
    protected : b           protected : b
    private   : c           no access : c

3. Private inheritance

    Base Class              Access in derived class
    public    : a           private   : a
    protected : b           private   : b
    private   : c           no access : c


Note: Child will have the private data from Base class, however it will not accessible. 


**Constructors and Destuctors - Inheritance**

When object is created from Derived Class:
    1. Base class costructors is executed
    2. Derived cass constuctor is executed

When derived object is deleted
    1. Derived class destructor is executed
    2. Base class destuctor is executed
    3. Both should free resources

Derived class does not inherit
    Base class constructor and destructor
    Base class overloaded assignment operator
    Base class friend functions

Derived classes can invoke base class constructor, destrcutor etc

doubt: explicit

using Base::Base - This will inherit the non special constructors from base class

class Base {
    private:
        int value;
    public:
        Base(int x) : value {value} {}
}

class Derived : public Base {
    using Base::Base;
    private:
        int doubled_value;
    public:
        Derived(int x) : doubled_value {2 * x} {}
}

Derived object(100);

without Base::Base:: and with overloaded constructor
    Derived derived_obj(1000) - initialize Derived class constructor

with Base::Base:: and without overloaded constructor
    Derived derived_obj(1000) - initialize Base class constructor but derived class initialization is not done

with Base::Base:: and witho overloaded constructor
    Derived derived_obj(1000) - initialize Derived class constructor but no args constructor is called in base class


**Passing arguments to base class constructor**

while creating the Derived class object please note that base class constructor must be executed first.
Derived class needs to specify which base class constuctor to be called.

class Base {
    private : 
        int value;
    public  : 
        Base() : value {0} {
            print "base no args constructor"
        } 

        Base(int x) : value {x} {
            print "base overloade constructor"
        }
}

class Derived {
    private : 
        int doubled_value;
    
    public  : 
        Derived() : Base(), doubled_value {0} {
            print "derived no args constructor"
        }

        Derived(int x) : Base(x), doubled_value {2 * x} {
            print "overloaded no args constructor"
        }
}


**Copy and Move Constructor and overloaded assignment operator**

Slicing of base class from the derived object will be taken care by C++

Notes on Copy/Move Operator and overload = assignment operator:
1. Often it is not required to define our own copy, move and =
2. If not defined in Derived, compiler will automatically create base class version
3. If defined in Derived class, then needs to be defined explicitly in base class 
4. Use deep copy in case of raw pointers

class Base {
    private : 
    public : 
        No args constructor
        Overloaded constructor

        Copy constructor 
        Base(const Base &other) : this->value {other.value} {}

        Copy Assignment = overloading
        Base &operator=(const Base &rhs) {
            if (this == &rhs) {
                return *this
            }
            this.value = rhs.value
            return *this
        }
}

class Derived : public Base {
    private : 
    public :
        
        Copy Constructor            // Notice the slicing
        Derived(const Derived &other) : Base(other), this->value {other.value} {}
        
        Copy assignment = overloading
        Derived &operator=(const Derived &rhs) {
            if (this == &rhs) { return *this }
            Base::operator=(rhs)    // Slicing here
            this->value = rhs.value
            return *this
        }
}


**Redefining Base Class methods**
Derived classes can directly invoke base class methods
Derived clasess can override or redefine base class methods
POLYMORPHISM

override - 
Derived class having the same function signature as Base class
but does different computation


Static bindings:
Methods will be called based on wat it sees during the compile time.

Derived classes will calls derived methods, and base methods will be invoked using Base::Method()

Base b;
b.deposit(100)  // Base - Deposit

Derived d;      
d.Deposit(200)  // Derived - Deposit

Base *ptr = new Derived()   
ptr->Deposit(2000)  // what ???


**Multiple Inheritance**
Derived class is inherits from 2 or more Base classes at the same time

class DerivedClass : public BaseClass1, public BaseClass2 {

}

Better to Avoid, as it increases the complexity

doubt : static constexpr 

doubt : is std::string is same as *char ?? - inheritance_179 code - default values for constructor












**VSCODE**

todo : configure vscode to build and compile CPP projects
https://code.visualstudio.com/docs/cpp/config-linux

Run single file             : 
Run multiple files codebase :  

tasks.json - run build
launch.json - run debug
c_cpp_properties.json - update include and cpp standard etc


Cmake : http://derekmolloy.ie/hello-world-introductions-to-cmake/

























































