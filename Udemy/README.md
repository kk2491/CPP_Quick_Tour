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



























