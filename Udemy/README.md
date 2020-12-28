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



































