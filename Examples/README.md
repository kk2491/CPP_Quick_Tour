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

doubt: Remove this warning
warning: ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
     static constexpr char *default_name = "Un-named savings account";


**Polymorphism**
1. Compile Time Polymorphism (early binding, static binding) - before program executes
2. Run time polymorphism (late binding, dynamic binding)

Overloaded functions - compile time
Overloaded operator - compile time

defaut binding - Static binding

Inheritance
Base class pointer or references
virtual functions

                                        Polymorphism

                Compile Time                                Run time 

Function overloading    operator overloading            Function overriding

doubt:
error: passing ‘const Base’ as ‘this’ argument discards qualifiers [-fpermissive]
This is because te object is agument is const and it is again being passed to some function which is not const.
Hence the compiler thinks, the object would be modified in the new function.

doubt:
error: invalid initialization of reference of type ‘const Base&’ from expression of type ‘Base*’
When argument is normal object but you are passing address / or pointer in function call

Dynamic polymorphism - **ABSTRACTION**
    Inheritance
    Base Class ptr or reference
    Virtual functions


**Using base class pointer**

class Base {
    function()
}

class Derived_A {
    function()
}

class Derived_B {
    function()
}

class Derived_C {
    function()
}

Base *ptr_1 = new Base()
Base *ptr_2 = new Derived_A()
Base *ptr_3 = new Derived_B()
Base *ptr_4 = new Derived_C()

now when each object / ptr calls function function(), 
function corresponding to class derived will be executed.

Abstraction - General thinking, if new child needs to be added there is no need of modifying the complete code. Just add the child class, thats it.

**Virtual Functions**
Virtual keyword
if no virtual keyword - statically bounded
virtual functions are overriden

Base class - Virtual keyword to the function
Derived class - Virtual keyword is implicit (it is better to mention)

class Base {
    public:
    virtual void Withdraw(double amount)
}

class Derived {
    public:
    virtual void Withdraw(double amoubt)
}

Function prototype and return must match inorder to override the base class function

needs to be called via base class pointer or reference

**Virtual Destructors**

Virtual functions need to have a virtual destructors

Else we get warning:
warning: deleting object of polymorphic class type ‘Account’ which has non-virtual destructor might cause undefined behaviour [-Wdelete-non-virtual-dtor]

if the derived class pointer is destructed by deleting base class pointer, then it results in unexpected behavior.

Virtual functions - virtual destructors

Adding normal destructor will call Base desturctors, hence the memory is not cleaned up for the child objects

virtual in Base class destructor is sufficient, good practice to update in derived classes' destructors as well

**Using the override specifier**

override - makes sure the derived class function should match with the base class function.

Without override :
if the function signature is different - no compiler error is produced. Hence it will be statically bound.

Base {
    public : void Display() const;
}

Derived {
    public : void Display();
}

Base ptr_1 = new Base()         == calls Base Display
Base ptr_2 = New Derived()      == calls Base Display
Derived ptr_3 = New Derived()   == calls Derived Display

with override - difference in signature throws compiler error

**Using final specifier** 

class level - prevents the class from being derived
    Better compiler optimization - to avoid slicing 

Method level - prevents virtual method from being overriden in derived classes


**class level**

class ClassName final {
    public:
}

class Derived final : public Base {
    public:
}

compile error will be thrown if derived class is created from final class

**method level**

 Class A (Base 1)
    |
 Class B (Derived from A)
    | 
 Class C (Derived from B)


Class A {
    public:
    virtual void DoSomething();
}

Class B : public A {
    public:
    virtual void DoSomething() final;
}

Class C : public B {
    public:
    virtual void DoSomething(); // Compiler error - final terminates the virtual function overriding
}

**Base Classes references**

Base class references can also be used in place of pointers

Account account_obj;
Account &account_ref = account_obj;

SavingsAccount sa_obj;
Account &sa_ref = sa_obj;

Passing objects as reference - based on the class the virtual function would be called 

Creating base class reference - which is referring to derived class

**Pure virtual functions and abstract classess**

**Abstract class**
Class that can not be instantiated. Base classes.
Abstract base classes

Example :   Shape shape_obj;    Not possible
            Shape *shape_obj;   Not possible
            Shale *shape_ptr = new DerivedClass()  possible

**Concrete class**
Used to instantiate objects from. Basically Derived classes.
Member functions need to be defined.

Abstract classes are too generic.

Abstract class - must contain a virtual function to make it abstract.

Same as virtual function, with assignment 0.

no implementation will be provided.

pure virtual function -
    Used to make class abstract 
    assigned to 0 in the function declaration
    No definition / implementation provided in the base class as it will be done in derived class
    Derived classes must override the base class
    if the derived classes dont override the derived will be considered as abstract as well

    virtual void draw() = 0
    virtual void CreateAccount() = 0

Shape shape_obj                 // Error
Shape *shape_ptr = new Shape()  // Error 

Abstract error : 
error: cannot declare variable ‘shape_obj’ to be of abstract type ‘Shape’
error: invalid new-expression of abstract class type ‘Shape’

error: undefined reference to `vtable for Circle'
happens when definition is not provided for desturctor (only prototype is there)


**Abstract classes as Interfaces in C++**

doubt : Interfaces classes

This is not base class, this is a abstract class with only pure virtual function. This class canbe added in any class heirarchy and can be used by derived claases for common tasks.

class as an interface:
    Abstract classe with only pure virtual functions
    provides general set of services - print class data etc
    Each subclass is free to implement the serives needed.

pending : 
A class which can be used 


class Printable {
    friend ostream &operator<<(stream &os, const Printable obj) {}
    public:
    virtual void print(ostream &os) const = 0;
    virtual ~Printable() {}
}

ostream &operator<<(stream &os, const Prntable &obj) {
    obj.print(ostream &os);
    return os;
}


Any class needs to be Printable, should be derived from Printable.

Abstract class with pure virtual functions.

Error : undefined reference to `main'






## Smart Pointers

**Issue with Raw pointers**
Allocate and deallocate and manage the lifetime - manually

Errors:
Uninitialized pointers
Memory leaks
Dangling pointers
Not exception safe

Who owns the pointer ?
when the pointer should be deleted ?

Smart pointers
    Object - Template classes
    Only point to to Heap
    Automatically delete when not needed
    Adhere to RAII principles
    Unique,Shared, Weak, Auto(deprecated)

Implemented using template classes (doubt) todo

    wrapper around a raw pointer
    pointer arithmetic is not possible
    overloaded constructors
        dereference
        member selection
    Can have custom deleters

Declare:
std::smart_pointer<Some_Class> ptr = ;

**RAII - Resource Allocation Is Initialization**
    Allocated on the stack
    Idiom / pattern used in Software design based on container object lifetime
    Resource acquition
        Open a file
        allocate memory
        Acquire a lock
    
    Is Inialization
        Happens during object creation - constructor 

**Unique Pointer**
    Simple and efficient 
    Strong ownership relation
    Point to an object on Type T on heap
    Unique - because we cant have 2 unique pointers pointing to same object on heap
    Can not be copied, however can be moved (null the existing pointer and move the object to new pointer)
    when pointer is destroyed what it points to is automatically destroyed


std::unique_ptr<int> pt {new int {100}}
std::unique_ptr<int> pt = new int(100)
print *p1   // 100
*p1 = 200   
print *p2   // 200
Automatcally deleted 


Note:
stack address   - 0x7fffc9da43dc
heap addresss   - 0x1987c20

When tried to copy : error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>& std::unique_ptr<_Tp, _Dp>::operator=(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = Account; _Dp = std::default_delete<Account>]

doubt : std::move - move the unique pointer from one to another.
The one assigned to becomes null pointer, but does that get destructed ?

stackoverflow question (doubt)
smart_pointers_199/test.cpp 
std::move unique pointer destruction called only once 

Declaration examples:

std::unique_ptr<Account> account_1 {new Account{1000}}
std::unique_ptr<Account> account_2 = std::make_unique<Account>("check",1000, 200)
auto account_3 = std::make_unique<Account>("tong", 100)

todo 
doubt : practice unique pointer 


**Share Pointer**

doubt : in shared pointer when copy is create and goes out of the score, does the control go to the destructor ?

    Shared ownership model of the heap object 
    Multiple pointers can point to the same heap memory 
    can be assigned and copied 
    can be moved 
    When use count is 0, object is destroyed from the heap memory

Syntax

std::shared_ptr<int> p1 {new int{100}}

std::shared_ptr<Account> acc = std::make_shared<Account>(100,200)

std::shared_ptr<Account> acc {new Account{100, 200}}

shared pointers are more efficient 


**Weak Pointer**

Provides a non owning weak reference.
Points to an object on heap. 
Does not own the relationship. (shared pointer owns the relationship)
Created using shared pointer
does not affect the reference use count. (shared pointer if there use count is non zero)
used to prevent the strong reference cycle whch could prevent the object from being deleted

2 Classes - with 1 to 1 relationship
circular or cyclic reference 


      Stack                Heap

    pointer_a           object of A (this has a pointer pointing to object of B)

    pointer_b           object of B (this has a pointer pointing to object of A)


When pointer_a goes out of scope, shared pointer checks for use count and finds class object has use count for pointer_b.

And does not destroy the object. Only pointers in the stack gets destroyed but heap memory does not.



**Custom Deleters**

Skip : todo : complete custom deleters

todo : Lambda function



## Exception Handling

Dealing with extradinary situations
Should be used in synchronous code not asynchronous code 

    Insufficient resource
    missing resources
    invalid operations
    range violation
    underflows and overflows
    illegal data

**Terminology**

Exception : and object or primitive type which signals error condition has occured. What happened ?

Throwing and Exception : 
code detects when and where will the error occurs. throw and exception describing the error to next part which knows how to handle the error

Catching the Exception :
Code that handled the exception

Syntax

*throw* 
variable thrown when the possible error occurs

*try*
Block of code needs to be executed

*catch*
Catch the error condition and handle it

when denominator = 0
int / int       - crash
float / int     - inf 

when denominatr and numerator 0
float / int     - nan

todo: static_case<double>

**Throwing exception from a function**

double function(num, denom) {
    if denom == 0:
        throw 0
    return avg
}

int main() {
    try {
        avg = function(num, denom)
    } 
    catch {
        print error statement
    }
}


if the throw is not caught using try and catch:
run time error : terminate called after throwing an instance of 'int'
Aborted (core dumped)


**Handling multiple exceptions**

double function(num, denom) {
    if denom == 0:
        throw 0
    if denom < 0 or denom < 0
        throw std::string("negative")    
    return avg
}

int main() {
    try:
        avg = function(num, denom)
    // Multiple catch block
    catch(int &e)
    catch(std::string &s)

    // Catch all - to catch all the missed throw
    catch(...) {
        catch all block
    }
}


**Stack Un-winding**

How function call traces back to the try and catch block.
Function are thrown off of the stack which results in the data loss as the local variables would be cleared

function_1 () {
    start
    function_2()
    end     - not executed
}

function_2() {
    start
    function_3()
    end     - not executed
}

function_3() {
    start
    function_4()
    throw 100
    end     - not executed
}

main () {
    try:
        function_1()
    catch:
        print error     - executed
}

**Creating user defined exception classes**

class Exception1 {};

class Exception2 {};

function() {
    if (condition_1)
        throw Exception1
    if (condition_1)
        throw Exception2
    normal  
}

main() {
    try {
        function()
    }
    catch (const Exception_1 &ex) {
        print("Exception 1")
    }
    catch (const Exception_2 &ex) {
        print("Exception 2")
    }
}


**Class Level Exceptions**

Exceptions can be thrown within class 

* Method :

* Constructor : Constructor may fail. Constructor do not return any value. (file opening in constructor). If the object can not be realized. 

* Destructor : Do no throw exception from destructor. Marked no except by default. Catch block will never be reached.

todo: coding 

Remember we are throwing the class object (not the member function in exception class)


**C++ Standard Exception Class Heirarchy**

Default keyword in Constructor 

class ExceptionClass : public std::exception {
    public:
    ExceptionClass() noexcept = default;
    ~ExceptionClass() = default;

    virtual const char* what() const noexcept {
        std::cout << "Illegal balance" << std::endl
    }
}

todo : try runtime error, out of bound ... etc etc 



## IO and Streams

cerr - error msg
clog - logging msg 

redirecting io

iostream    - input and output from/to streams
fstream     - input and output from/to file streams
iomanip     - manipulators used to format stream io


class 
ios         - formatter and unformatted io
ifstream    - high level input operations on file based streams
ofstream    - high level output operations on file based streams
fstream     - high level i/o operations on file based streams
stringstream- high level i/o operations on memory based streams

cin     - standard input device (keyword) - instance of istream  
cout    - output device (console) - instance of ostream
cerr    - output device (console) - instance of ostream
clog    - 


**Stream manipulators**

Common stream manipulators

Boolean
    boolalpha, noboolalpha

Integer
    dec, hex, oct, showbase, noshowbase, showpos, noshowpos, uppercase, nouppercase

Floating point
    fixed, scientific, setprecision, showpoint, noshowpoint, showpos, noshowpos

Field width, justification, fill
    setw, left, right, internal, setfill

Others
    endl, flush, skipws, noskipws, ws


**Stream manipulators - Boolean**

By default 0 or 1

std::boolalphas - true or false 

std::cout << std::boolalpha

using method
std::cout.setf(std::ios::boolalpha)
std::cout.setf(std::ios::noboolalpha) -- error - doubt

std::cout << std::resetiosflags(std::boolalpha) -- error - doubt 



**Stream manipulators - Integer**

default 
    dec - base 10
    noshowbase - no prefix used to show hexa and octal
    nouppercase - 
    noshowpos 

std::cout << std::dec << num << std::endl

std::cout << std::hex << num << std::endl

std::cout << std::oct << num << std::endl

once set, the set base will used for the insertion from that line. it persists.

showbase : it persists.
    ox - for hexadecimel
    o  - for octa
       - for decimel


std::cout.setf(std::ios::showbase)
std::cout.setf(std::ios::uppercase)
std::cout.setf(std::ios::showpos)


std::cout << std::resetiosflags(std::ios::showbase)
std::cout << std::resetiosflags(std::ios::uppercase)
std::cout << std::resetiosflags(std::ios::showpos)


**Stream manipulators - Floating point number**

default:
    setprecision - 6 
    fixed - not fixed number of digits after the decimel point 
    noshowpoint - no 0s after floating point
    nouppercase
    noshowpos

    setprecision - number of digits to be displayed before E 

*   when setprecision is applied with fixed : precision is applied after the decimel point 
*   when setprecision is applied with scientific : precision is applied to the left of E (doubt - left of E complete or left of E decimel point)
*   when uppercase is used in scientific e to E 

iomanip header needs to be included 

unsetf()



**Stream manipulators - algin and fill**

std::left std::right - justified 
std::setw(10) - set width
setfill('-') applied only when setw()



**Reading from a text file**

Reading from files - 
Writing to files 


*Input files*
#include fstream
declare fstrem or ifstream object 
connect to the file 
read file via stream
close the stream 

include fstream -> fstream or ifstream object -> connect to file -> read file -> close file 

std::fstream in_file ("file.txt", std::ios::in)

std::fstream in_file ("file.txt", std::ios::in | std::ios::binary)

doubt : reading binary data 

fstream - to read and write 
ifstream - only for reading 

std::fstream in_file ("file.txt")

std::fstream in_file ("file.txt", std::ios::binary)


std::ifstream obj
std::string filename 
obj.open(filename)
obj.open(filename, std::ios::in)

if (obj.isopen()) -- to check if the file is / can be opened 

obj.close()

getline(infile, line)


========
if (check if file is open) {

    while(!obj.eof()) {
        string s;
        std::getline(obj, s)
        print s
    }
} else {
    not open
}

obj.close()
========

or this can be used  
while(std::getline(obj, str))


fstream object getline - in_file.getline() - doubt


**Writing output to a text file**

fstream ofstream

include fstream -> fstream or ofstream object -> connect to file -> write file -> close file 

by default : CPP will create the file if not exists
by default : if exists, contents will be removed or truncated unless mentioned 

std::fstream out_file("file_path", std::ios::out)
std::fstream out_file("file_path", std::ios::out, std::ios::binary)

by default - opened in text mode

std::ofstream out_file("file_path")
std::ofstream out_file("file_path", std::ios::binary)

std::ofstream outfile,
std::string file;
outfile.open(file)
outfile.open(file, std::ios::binary)

std::ofstream outfile("file_path", std::ios::trunc) - removes the content of the file when opening

std::ofstream outfile("file_path", std::ios::app) - append on each write 

std::ofstream outfile("file_path", std::ios::ate) - seak to end of stream while opening 

if (outfile.isopen()) - true if open and good to write 

if (outfile)    - true if open and good to write 



**Using String Streams**

what is stringstreams - sstreams - doubt 

#include sstream 
stringstream, ostringstream, istringstream
connect to std::string 

int num_1
double num_2
string str 
std::string main_string = {"Hello 100 100.100}
std::istringstream iss = main_string
iss >> str >> num_1 >> num_2 

int num_1 = 100
double num_2 = 200
string str = "KK"
std::string main_string = {"Hello 100 100.100}
std::istringstream oss;
oss << str << " " << num_1 << " " << num_2 
std::cout << oss.str() << std::endl


Exmaple : validating input with stringstream
Ask user to enter data (excepted int)
read it to a stringstream
extract the stringstream to integer 
successful if integer is entered 


## STL - Standard Template Library

#### What is STL 
reusable, adaptable, generic classes, functions
implemented using C++ templates 

doubt : C++ templates 

**Elements of STL**
1. Containers - collection of objects or primitive types 
    array, vector, deque, stack, set, map etc 
2. Algorithms - functions for processing the sequence of elements from the containers 
    find, max, count, accumulate, sort 
3. Iterator - Generate sequence of elements from containers 
    forward, reverse, by value, by reference, constant 


Example:
    vector 
    sort(vector.begin(), vector.end())
    reverse(vector.begin(), vector.end())
    sum = accumulate(vector.begin(), vector.end(), 0)

**Types of Containers**

1. Sequence Containers
    array, vector, list, forward_list, deque

2. Associative Containers
    set, multi set, map, multi map

3. Container adapters
    stack, queue, priority queue

**Types of Iterators**

1. Input Iterator - frm container to the program 

2. Output Iterator - from program to container

3. Forward Iterator - 

4. Bidirectional Iterator 

5. Random Access Iterator 

**Types of Algorithms** (60 algorithms are available)

1. Non modifying 

2. Modifying 



**Generic Programming with Macro**

1. Generic Programming - consider squaring a number, irrespective of the datatype the function should return the square root. However the compiler is static datatype mapped. so it is not possible.

2. Macros 
    # define
    C++ preprocessor directives
    no type information
    Just a substitution
        #define MAX_SIZE 100

3. Function templates 
    Generic programming with function templates 
    plugging in any data type 
    compiler generates the appropriate functions / class frm the blueprint 
    If function call is not there, then the code is not generated by the compiler
    When function call is updated, it takes the data type and generates the function/code as per the datatype passed 

    doubt : swap 2 strings using pass by reference, not working

4. Class templates 

    template <typename T>
    class Item {
        private:
        std::string name;
        T value;

        public:
        setData(std::string name, T value) {
            name = name;
            value = value;
        }
        T GetValue() {
            return value;
        }
    }

    Item<int> obj{"KK", 100}
    Item<double> obj{"TK", 100.12}

    template <typename T1, typename T2>
    class SomeClass {
        T1 attrib_1;
        T2 attrib_2;
    }

    #inclue <utility>

    std::pair<std::string, int> -- same as SomeClass above

Best Practice : Put the template classes in .h file 


5. Creating a Generic Array Template Class

    parameters can be created as template
    for example, in Array class size of the array is given as below

    template <int N>
    class Array {
        int size {N};
        int arr[N] {};
    }
    Array<5> arr;


When the number of elements are fixed it is efficient to use arrays instead of vectors

    doubt : understand this completely 

    use std::array when size is known

### Introduction to STL containers 

Data structures that can store any type (almost)
    template based classes

Each container has member functions
    some are common 
    some are specific

Each container has its own header 
    #include <container>

Common functions
    Constructor default
    Oveloaded constructor
    Copy constructor
    Move Constructor 
    Destructor 
    Copy assignment
    Move assignment 
    size 
    empty 
    insert 
    operator < <=
    operator > >=
    == !=
    swap
    erase 
    clear 
    begin and end 
    rbegin and rend 
    cbegin and cend 
    crbegin and crend 

Types of elements can be stored in Containers
    All primitives 
    Elements should be copyable and assignable (implement copy and move assignment)
    Movable for efficiency 
    Must be able to compare the elements (implement compare operators if not defined)


### Introduction to STL Iterators 

    Allows us to think as sequence of elements 
    Work like pointers 
    implemented as template classes 

    Must be declared based on the container type 
    std::vector<int>::iterator it1;
    std::map<std::string, std::int>:: iterator it2;
    std::list<std::string>::iterator it3;
    std::set<double>::iterator it4;

Example :
    std::vector<int> vec {1, 2, 3}
    std::vector<int>::iterator it_begin = vec.begin();  -- This points to the first elemet in vector 
    std::vector<int>::iterator it_end = vec.end();  -- This points to the next element of last element 

Iterators operator
    ++it        pre increment
    it++        post increment 
    it = it1    

iterator 
reverse_iterator (doubt)

Types of iterators
    begin()     end()       - iterator
    cbegin()    cend()      - const iterator
    rbegin()    rend()      - reverse iterator 
    crbegin()   crend()     - const reverse iterator 

const_iterator - When tried to change the value which is pointed by const iterator 

error: assignment of read-only location ‘cit1.__gnu_cxx::__normal_iterator<_Iterator, _Container>::operator*<const int*, std::vector<int> >()

std::vector<int> vector_1;
std::vector<int>::const_iterator cit = vector_1.begin() is same as 
auto cit = vector_1.cbegin()

reverse iterator 
increamenting means decrementing and vice versa

std::list and std::set
iterator = iterator + int - does not work - error - no operand


### Introduction to STL Algorithms

Sequence of elements with iterator 

doubt : lambda 

#include <algorithm>

sometimes iterator becomes invalid 

a. find algorithm
    find(vec.begin(), vec.end(), 3)
    returns iterator to the index else return vec.end() - iterator pointing to the end of the container 

    works for vector, list, 
    
    for primitive time no need to implement equality operator 
    for user defined classes equality needs to be defined separately 

    auto loc = std::find(vector.begin(), vector.end(), 10)
    if (loc != vector.end()){
        element found - value *loc
    }

    auto loc = std::find(vector.begin()+4, vector.end()-4, 10)
    if (loc != vector.end()){
        element found - value *loc
    }

    uses equality operator - for user defined classes / datatypes 

    give start, end and what to find 


b. count algorithm
    num = std::count(vector.begin(), vector.end(), to_count)

c. count_if algorithm
    count only if the condition satisfies - lambda function

    num = std::count(vector.begin(), vector.end(), [](int x) {return (x >= 10);})

d. replace 
    std::replace(vector.begin(), vector.end(), 1, 100)

    1   - to be replaced
    100 - to be replaced with

e. all_of 
    checks if all the elements in the vector are satisfying the condition

f. string_transform_test
    std::transform(str.begin(), str.end(), str.begin(),::toupper);
    where to start, when to stop, where to start copying

doubt: lambda C++ - very important 

b. for_each 
    applies a function for each element in the container 
    function must be provided to the algorithm
        functor (function object)
        function pointer
        lambda expression (C++11)



    a. functor (function object)
        struct SquareFunctor {   // This can be class with function operator defined
            void operator() (int x) {
                std::cout << x * x << std::endl;
                return;
            }
        }

        SquareFunctor square;
        std::for_each(vec.begin(), vec.end(), square)


    b. function pointers -- doubt - did not understand
        void square(int x) {
            std::cout << x * x << std::endl;
        }
        std::for_each(vec.begin(), vec.end(), square)

    c. lambda functions
        std::for_each(vec.begin(), vec.end(), [](int x) {std::cout << x * x << std::endl;})


### Sequence Container Array
    #include <array>
    fixed size - should be known during compile time 
    direct element access - time to access element is independant of the number of elements in the array
    access to the raw array address 
    iterator and algos 

    use STL array when fixed array needed in the code

    Important : cppreference.com

    sort - doubt - ascending and descending 

    note: std::min - std::max - finds the min and max of 2 numbers 

    minmax_element - first is min and second is max
    doubt : the data type of the iterator - pair ?
    
    note : index
    auto max_index = std::distance(std::begin(curvatures), max_it.second);

    adjacent_find - checks if there is 2 adjacent same values 

    std::accumulate - from #include<numeric>


### Sequence Container Vector 

    #include <vector>

    dynamic sized arrays - expand contrast 

    direct element access - constant time 

    rapid insertion and deletion at the back - constant time 

    however insertion and deletion at the start and middle - linear time 

    push_back   - efficient
    push_front  - not efficient 
    pop_back    - 

    size - currently being used 
    capacity - allocated in memory - at this pont the vector gets extended dynamically 

    emplace_back and push_back - difference - doubt 

    swap - type should be same, but size can be different 

    vector.insert(iterator, element_to_be_inserted)


    important : always overload less than and equality operator when using our own use defined classes or data types. because STL algorithms use those 2 operators.

    std::vector<int> vector_1 {1, 2, 3} - creates vector with 3 elements
    std::vector<int> vector_2 (10, 100) - creates 10 elements of value 100 - This is the overloaded constructor in vector class 


    whenever we exceed the capacity it would be doubled.
    For example
        vector {1, 2, 3, 4}
        size = 4, capacity = 4
        push_back(5)
        size = 5, capacity = 8

    vector.shrink_to_fit() - amount of storage allocated exactly to the vector size
    capacity becomes 5 

    vector.reserve(100) - Reserve contiguous amount of memory 

    std::copy(vector_1.begin(), vector_1.end(), vector_2.back_inserter(vector_2))
    note that vector_1 is being copied to vector_2
    Resultant vector_2 = vector_2 + vector_1

    std::copy_if(vector_1.begin(), vector_1.end(), vector_2.back_inserter(vector_2),
                [](int x){return some_condition})

    
    transform is element-wise
    std::transform(vector_1.begin(), vector_1.end(), vector_2.begin(),                      std::back_inserter(v3), [](int x, int y) {return x * y})



### Sequence Container Deque

double ended Queue
#include <deque>

elements are not stored in contiguous memory 

Can expand and decrease dynamically 

Rapid insertion of elements at front and back - constant time

Insertion of elements at the middle - linear time 

doubt - insertion of elements in deque - how to do ?


### Sequence Container List and Forward List


#### List
elements are not stored in contiguos memory 
no direct access to random elements 
very efficient for inserting and deletion - 

    #include <list>

doubly linked list 

each element has reference to previous and next element in doubly linked list 

(in sinlge linked list - has reference only to next element)

remove the element - relink the other elements around it - faster 

use when - lost of insertion and deletion from container and random access is nt much needed.

list {1, 2, 3, 4, 5}
list.resize(2)
(1, 2)
list.resize(5)
(1, 2, 0, 0, 0)


#### Forward List
Dynamic size 
singly linked list - only in forward direction
less overhead when compared to doubly linked list 

random access is not supported 
rapid insertion and deletion is efficient - constant time 
reverse iterators are not available 

Only front no back

    #include <forward_list>

    std::forward_list<int> {1, 2, 3, 4, 5}

    push_front()
    pop_back()
    emplace_front()

    size() -- Method is not available

    it = iterator to element value 3
    insert_after(it, 100)
    {1, 2, 3, 100, 4, 5}

    emplace_after()
    erase_after()

    ++ and -- is not possible on list 

    resize - removes the extra elements going out of bound

    doubt: check what happens when there is no default constructor and resize the list 

    doubt: iterator is not going invalid after erasing the element pointed by the iterator 


### Associative Containers - Sets

fast retrieval using key 
Sets and Maps 
Implemented as balanced binary tree or hash set 

Sets:
    std::set                    - unique auto sorted
    std::unordered_set          - not auto sorted
    std::multiset               - duplicate allowed auto sorted
    std::unordered_multiset     - duplicate allowed not auto sorted

note: no duplicate elements are allowed 

set - elements will be sorted (<)

note: no concept of front and back

use insert --- note 

set_object.insert(obj)
returns std::pair<iterator, bool>
    first  - iterator to the inserted item or duplicated item
    second - bool success or failed 

set_obj.erase(element_value)
set_obj.erase(iterator)

set_obj.count() - number of elements will be 1 if exists 

set_obj.clear()

set_obj.empty()


**Multi set**
ordered by key, allows duplicate elements 

**unordered set**
Elements cant be modified 
    must be erased and inserted 

no reverse iterators allowed 

**unordered multi set**
Elements cant be modified 
    must be erased and inserted 

no reverse iterators allowed 


Note: set_obj.find(obj) - this is based on the < (less than) overloaded operator
    So when using user defined data types or classes be careful



### Associative Containers - Maps

std::map
std::unordered_map
std::multimap
std::unordered_multimap

fast retrieval using key 
most operations are efficient 

key value pair - dictionary 

**std::map**
elements are ordered by key 
no duplicates are allowed (keys are unique)

insert 
    std::map<string, string> m {
        {ak, ak},
        {kk, kk}
    }
    m["tk"] = "ching"  // This inserts 

    .at("Key") -> throw error when key is not found


note: no reverse iterators in unordered map (both multilmap and map)


### Container Adaptors Container

#### Stack

Adaptors - because already implemented using STL containers 

size()
pop()
top()
push()

LIFO


#### Queue

FIFO

no iterators supported
no STL methods or algos 

why vector can be used in Queue as underlying stL container..


#### Priority Queue

    #include <queue>

    uses vector as underlying container 

    biggest element is always at the top position - 

    Arranges the elements in descending order 

    user defined - operator overloading < less than


RTTI 
Vtable 

STL containers : Vector, Set and Map

STL







**VSCODE**

todo : configure vscode to build and compile CPP projects
https://code.visualstudio.com/docs/cpp/config-linux

Run single file             : 
Run multiple files codebase :  

tasks.json - run build
launch.json - run debug
c_cpp_properties.json - update include and cpp standard etc


Cmake : http://derekmolloy.ie/hello-world-introductions-to-cmake/


























































