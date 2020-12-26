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

Allocating and deallocating memory during runtime

C++ gives more power over machine. C++ used in OS, System software device drivers, embedded systems etc.






























