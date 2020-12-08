// Pointers & References:
/*
#include <cstdio>
using namespace std;

int main()
{// While pointers can be changed to point to something else, references cannot be redefined, once they are created they will always reference the same variable.
    int x = 73;
    int y = 42;
    int *ip = &x; // ip points to the memory address of x 
    int &z = x; // z is a reference to x, if z changes, x changes
    
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    printf("*ip is %d\n", *ip);
    
    printf("z is %d\n", z);
    z = 55;
    printf("x is %d\n", x);
    printf("x is %d\n", x);
    
    return 0;
    
}
*/
// Primitive Arrays: Fixed size containers for elements with a common type.
/*
#include <cstdio>
using namespace std;

int main()
{
    int array[5]; //array of integers with size 5. At this point, the array is uninitialized so each of the array int values are undefined.
    array[0] = 2; //assigns 2 to the first element of the array
    printf("array[0] is: %d\n", array[0]);
    
    *array = 9; //arrays can also be accessed as if they were a pointer.
    printf("array[0] is: %d\n", array[0]);
    
    int *pointArr = array; //defines an integer pointer and initializes it with the address of the array. The pointer will then point to the first element of the array.
    *pointArr = 11; //assigns the value 11 to the first element of the array (array[0]).
    printf("array[0] is: %d\n", array[0]);
    
    ++pointArr; //increments the pointer, which now points to the 2nd element of array. In C++ pointers are strongly typed so they know the size of what it points to and, when incremented,it always increments by the size ofthe object or type it was defined with.
    *pointArr = 5; //assigns the value 5 to the 2nd element of the array (array[1]).
    printf("array[1] is: %d\n", array[1]);
    
    *(++pointArr) = 10; //increments the pointer, which now points to the 3rd element of array and assigns 10 to it (array[2]).
    printf("array[2] is: %d\n", array[2]);
    
    int array2[5] = {1,2,3,4,5}; //you may also initialize an array using an initializer list.
    for (int i = 0; i < 5; i++) {
        printf("array[i] is: %d\n", array2[i]);
    }
    
    return 0;
}
*/
// Primitive Strings: Special case of primitive arrays, a C string is simply a primitive array of characters terminated with a zero. This is sometimes also called a null terminated string. 
/*
#include <cstdio>
using namespace std;

int main()
{
    char str1[] = "String";
    printf("str1: %s\n", str1);
    printf("\n");
    
    char str2[] = {'S','t','r','i','n','g',0};
    printf("str2: %s\n", str2);
    printf("\n");
    
    for(int i = 0; str1[i] != 0; ++i) {
        printf("str1[%d]: %c\n",i,str1[i]);
    }
    printf("\n");
    
    for(char * charPointer = str1; *charPointer; ++charPointer) { //as with arrays, we can also use pointers to access string elements.
        printf("char is: %c\n", *charPointer);
    }
    printf("\n");
    
    //using a range based for loop (C++ 11). Gotta declare charac of the same type of the elements that it is going to iterate through or use the keyword auto instead of the type.
    for(char charac : str1) { 
        if(charac == 0) break;
        printf("charac is: %c\n", charac);
    }
    
    return 0;
}
*/
// Conditionals:  C++ has 2 basic forms of conditional statements, both inherited from C, if else and the ternary conditional operator. In C++ logical values are represented as integers. Zero is false and any non-zero value is true
/*
#include <cstdio>
using namespace std;

int main()
{
    int x = 42;
    int y = 78;
    
    //If-else-else if:
    if(x > y) {
        puts("x is greater than y.\n");
    } else if(x == y) {
        puts("x is equal to y.\n");
    } else {
        puts("y is greater than x.\n");
    }
    
    //The conditional expression always evaluates to zero or one:
    printf("x is greater than y: %d\n", x > y);
    printf("y is greater than x: %d\n", y > x);
    
    //Ternary operator: (condition) ? (code executed if condition is true) : (code executed if condition is false);
    (x > y) ? puts("x is greater than y") : puts("y is greater than x\n.");
    printf("The greater value is: %d\n", x > y ? x : y);
    return 0;
}
*/
// The branching conditional: Switch statement. It can be very handy when you need to select a condition from a list of possibilities. The case statement requires a constant, so you'll need to take special care to use the proper type for this purpose.
/*
#include <cstdio>
using namespace std;

int main()
{
    const int apples = 5;
    
    switch (apples) {
        case 1:
            puts("Please buy 1 apple.\n"); break;
        case 3:
            puts("Please buy 3 apples.\n"); break;
        case 5:
            puts("Please buy 5 apples.\n"); break;
        default:
            puts("Don't buy apples!"); break;
    }

    return 0;
}
*/
// While and Do-While:
/*
#include <cstdio>
using namespace std;

int main()
{
    int array[] = {11, 98, 45, 76, 94, 105, 83};
    int i = 0;
    
    //while loop:
    while (i < 5) {//the code inside the while loop is executed while the condition between parenthesis is evaluated to true.
        printf("array[%d] is: %d\n", i, array[i]); 
        ++i;
    }
    
    printf("\n");
    int j = 5;
    //do-while loop:
    do { //in the do-while loop, the code inside the while loop is executed at least once before checking if the condition between parenthesis is satisfied.
        printf("array[%d] is: %d\n", j, array[j]); ++j;
    } while(j < 5);
    
    printf("\n");
    i = 0;
    //break and continue:
    while(i < 7) {
        if(i == 2) {//when index i is equal to 2, it skips the rest of the code and goes back to checking if the condition is true.
            ++i;
            continue;
        }
        if(i == 5) break; //when index i is equal to 5, the execution gets out of the while loop.
        
        printf("array[%d] is: %d\n", i, array[i]);
        ++i;
    }
    
    return 0;
}
*/
//--------------------------------- For loops: ---------------------------------------------------
/*
>>> Example 1:

#include <cstdio>
using namespace std;

int main()
{
    int array[] = {21,34,55,79,80,88};
    for(int i = 0; i < 6; ++i){
        printf("array[%d] is: %d\n", i, array[i]);
    }
    
    char str[] = "Hello World!";
    for(int i = 0; str[i]; ++i){
        printf("str[%d] is: %c\n", i, str[i]);
    }
    
    //range-based for loop (C++ exclusive):
    //Gotta declare charac of the same type of the elements that it is going to iterate through or use the keyword auto instead of the type.
    for(char s : str){
        if(s == 0) break;
        printf("s is: %c\n", s);
    }
    for(int i : array){
        printf("array[i] is: %d\n", i);
    }
    
    return 0;
}
>>> Example 2:

vector <double> temps {87.2, 77.1, 80.0, 72.5};

double avg_temp {};
double run_sum {};

for (auto tem : temps) {
    run_sum += temp;
}
avg_temp = run_sum / temps.size();



*/
//------------------------------------------------------------------------------------------------
//Using stdout:
/*
#include <cstdio> //C standard IO library (printf, puts)
#include <iostream> //standard input-output stream, header file that contains definitions to objects like cin, cout, cerr etc.
using namespace std; //declarative region that provides a scope to the identifiers

int main()
{
    cout << "Example 1" << endl;
    //if we don't include the command 'using namespace std', we would have to specify which namespace we were using:
    // std::cout << "Example 1" << end;
    return 0;
}
*/
// Data types overview:
/*
-> Primitive types:
a.) integer types:
simple, fundamental data types for representing integer values, whole numbers with no fractional part. 
b.) floating point types;
c.) boolean type.
-> Compound types:
a.) arrays;
b.) strings;
c.) struct: 
sequential set of objects of various types, it may contain scalars, arrays, and even other structures and classes. C++ classes are based on C-structures.
d.) classes:
Technically, a class is a structure that defaults to private membership. In practice, a class is a structure that contains function members as well as data 
members.
e.) union:
set of overlapping objects which allows a single compound object to hold objects of different types at different times overlapping the same memory space.
f.) pointers:
it is a reference to an object of a given type. Typically holds the address of the object to which is points and are strongly typed in C++. The type of a 
pointer is used as the type when it's dereferenced and it's also used to determine the size of increments, decrements, and arithmetic operations on the 
pointer.
g.) references:
references are immutable, once defined they cannot be changed to refer to a different object and references are accessed as aliases without any syntactic 
indication that it's a reference. This allows for silent side effects and should be used with great care. 
*/
// Integer Types:
/*
char: minimum size necessary to contain a character. On most cases, it's eight bits (1 Byte). The character type may be signed or unsigned by default.
short int: 16 bits -> 2 Bytes
int: 32 bits -> 4 Bytes
long int: 64 bits -> 8 Bytes
long long int: at least 64 bits -> 8 Bytes

#include <cstdint>: standard header with standard type depths.
Signed  | Unsigned |
--------------------
int8_t   | uint8_t
int16_t  | uint16_t
int32_t  | uint32_t
int64_t  | uint64_t

-----------------------------------------------------------------
#include <cstdio>
#include <cstdint>

constexpr size_t byte = 8;

int main()
{
    printf("sizeof char is %ld byte(s) or %ld bits\n", sizeof(char), sizeof(char) * byte);
    printf("sizeof short int is %ld byte(s) or %ld bits\n", sizeof(short int), sizeof(short int) * byte);
    printf("sizeof int is %ld byte(s) or %ld bits\n", sizeof(int), sizeof(int) * byte);
    printf("sizeof long int is %ld byte(s) or %ld bits\n", sizeof(long int), sizeof(long int) * byte);
    printf("sizeof long long int is %ld byte(s) or %ld bits\n", sizeof(long long int), sizeof(long long int) * byte);
    
    printf("sizeof int8_t is %ld byte(s) or %ld bits\n", sizeof(int8_t), sizeof(int8_t) * byte);
    printf("sizeof int16_t is %ld byte(s) or %ld bits\n", sizeof(int16_t), sizeof(int16_t) * byte);
    printf("sizeof int32_t is %ld byte(s) or %ld bits\n", sizeof(int32_t), sizeof(int32_t) * byte);
    printf("sizeof int64_t is %ld byte(s) or %ld bits\n", sizeof(int64_t), sizeof(int64_t) * byte);
    
    return 0;
}
-----------------------------------------------------------------
*/
// Floating point types:
/*
#include <cstdio>

constexpr size_t byte = 8;
    
int main()
{
    printf("sizeof float is %ld byte(s) or %ld bits\n", sizeof(float), sizeof(float) * byte);
    printf("sizeof double is %ld byte(s) or %ld bits\n", sizeof(double), sizeof(double) * byte);
    printf("sizeof long double is %ld byte(s) or %ld bits\n", sizeof(long double), sizeof(long double) * byte);
    
    float flt = 3.45;
    printf("value of flt is %f\n", flt); //initially it has a 6 digits precision
    printf("value of flt is %1.3f\n", flt); //adding a precision of 3 digits
    printf("value of flt is %1.1f\n", flt); //changing the precision to include only 1 digit after the decimal point rounds the value.
    
    return 0;
}
*/
// Characters and Strings: the fundamental string type is an array of characters terminated with a null value. This is sometimes referred to as a C-string or a null terminated string to distinguish it from object orientated string types. 
/*
#include <cstdio>

int main()
{
    char cstring[] = "c++ shell"; //string literal
    printf("The string is: %s\n", cstring); // %s because we are passing a string
    
    for(int i = 0; cstring[i]; ++i){
        printf("%02d: %c\n", i, cstring[i]); // %c because we are passing a char
    }
    
    //we can use a character pointer instead of an array:
    const char * cstr = "c++ shell";// const character pointer. It's a pointer to a const character, not a const pointer.
    printf("The string is: %s\n", cstr);
    
    return 0;
}
*/
// Qualifiers:
/*
CV (Constant and Volatile): 
- const marks a variable as read-only or immutable. Its value cannot be changed once it's been defined. 
- volatile marks a variable that may be changed by another process.
- mutable is used on a data member to make it writable from a const qualified member function. 

Storage Duration: used to define the duration or lifetime of a variable. By default a variable defined within a block has automatic lifetime. Lifetime is the duration of the block. 
- static: variables which have life beyond the execution of a block and live for the duration of the program. Commonly used for keeping state between usages of a given function or method. Static variables are stored globally, even if they are stored in a class. By default a variable defined outside of any block is static. 
- register: variables which are stored in processor registers. This can make them faster and easier to access and operate on. This qualifier is taken as a suggestion by the compiler. The compiler may or may not actually store the variable in a register. 
- extern: variables which are defined in a separate translation unit and are linked with your code by the linker step of the compilation process.

*/
// References: it works similar to a pointer with some significant diffs: a) assigning a ref. is different and doesn't involve using the address of operator. Getting the value referred to by a ref. doesn't involve the value of or de-ref. operator. You cannot refer to the ref. itself. That is you cannot take a ref. of a ref.. You cannot have a pointer to a ref. and you cannot have an array of ref.. The ref. cannot be null, cannot be un-initialized, and cannot be changed to refer to another variable. 
/*
#include <iostream>

using namespace std;

int & foo (int &i) //returns a reference for an int and it takes as argument a reference
{
    return ++i;
}
int main()
{
    int i = 5;
    int &ir = i; //ir refers to i
    
    ir = 10; //if we change ir, i also changes
    
    cout << "i is: " << i << endl;
    cout << "foo() is: " << foo(i) << endl;
    cout << "i is: " << i << endl;
  
    return 0;
}
*/
// Structured data: The struct type provides a way to aggregate a fixed set of data members into a single object. In C++ the struct type is expanded to also include function members.
/*
#include <cstdio>

struct Employee {
    int id;
    const char * name;
    const char * role;
};

int main()
{
    Employee joe = {42, "Joe Smith", "Manager"};
    
    printf("%s is the %s and has id %d\n", joe.name, joe.role, joe.id);//the dot is a member operator
    
    Employee frank = {29, "Frank Zappa", "Programmer"};
    Employee * emp = &frank;
    
    printf("%s is the %s and has id %d", emp->name, emp->role, emp->id);//pointer member operator
    
    return 0;
}
*/
// Bit fields: Bit fields provide the ability to pack multiple values into less space then they would normally use.
/*
// Example program
#include <iostream>

struct preferences {
    bool likesMusic : 1; //number of bits reserved to this variable
    bool hasHair : 1;
    bool hasInternet: 1;
    bool hasCar : 1;
    unsigned int numberOfPets : 4;
};

int main()
{
  preferences jack;
  jack.likesMusic = true;
  jack.hasHair = true;
  jack.hasInternet = true;
  jack.hasCar = false;
  jack.numberOfPets = 2;
  if (jack.likesMusic) {std::cout << "Play some music!" << "\n";}
  if (!jack.hasCar) {std::cout << "Jack will need a ride home." << "\n";}
  std::cout << "Jack has " << jack.numberOfPets << " pets." << "\n";
  
  std::cout << "size of int: %d\n" << sizeof(int)*8 << "\n";
  std::cout << "size of jack: %d\n" << sizeof(jack)*8 << "\n";
  
  preferences jim = {true, true, false, false, 4}; //declaring and initializing w/ a initializer list
  std::cout << "size of jim: %d\n" << sizeof(jim)*8 << "\n";
  std::cout << jim.hasHair << "\n"; 
  
  
  return 0;
}
*/

// Enumerators:
/*

*/

// Unions:
/*

*/

// Typedefs:
/*

*/

// C Strings:
/*

*/

// C++ Strings:
/*

*/

// Pointers:
/*
// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int *ptr; //not initialized, contains garbage data
     
    cout << "value of ptr: " << ptr << endl;
    cout << "address of ptr: " << &ptr << endl;
    cout << "size of ptr: " << sizeof(ptr) << endl;
    
    ptr = nullptr; //initialized, now it points nowhere
    
    cout << "value of ptr: " << ptr << endl;
    
    // all pointers in a program have the same size
    // size of a pointer != size of what it points to
    int *ptr1 {nullptr};
    cout << "size of ptr1: " << sizeof(ptr1) << endl;
    double *ptr2 {nullptr};
    cout << "size of ptr2: " << sizeof(ptr2) << endl;
    unsigned long long *ptr3 {nullptr};
    cout << "size of ptr3: " << sizeof(ptr3) << endl;
    vector<float> *ptr4 {nullptr};
    cout << "size of ptr4: " << sizeof(ptr4) << endl;
    string *ptr5 {nullptr};
    cout << "size of ptr5: " << sizeof(ptr5) << endl;
    
    // pointers are strongly typed:
    int num1 {10};
    double num2 {25};
    
    int *ptrNum {nullptr};
    
    ptrNum = &num1; //ptrNum now points to the address of num1, which is an int [OK]
    ptrNum = &num2; //ptrNum cannot point to num2 since num2 is of type double and ptrNum is pointer to int
    
    
    return 0;
}

// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector<string> guestList {"Jon","James","Jack"};
   vector<string> *guestPtr {nullptr};
   
   guestPtr = &guestList; //guestPtr now points (holds) the address of guestList.
   
   cout << "First guest: " << guestList.at(0) << endl;
   
   // dereferencing guestPtr returns the content of the memory address it is pointing to, 
   // which in this case is guestList.
   cout << "First guest: " << (*guestPtr).at(0) << endl; 
   
   
   for(auto guest : *guestPtr){ // *guestPtr is equivalent to guestList
       cout << guest << endl;
   }

    return 0;
}
*/
/*const and pointers - Example program:

#include <iostream>

int main()
{
    int highScore {100};
    int lowScore {65};
    
    //ptr1 is a pointer to an integer constant, so it cannot change the data, 
    //but it can point to something else:
    const int *ptr1 {&highScore};
    //*ptr1 = 90; //error: assignment of read-only location '*ptr1'
    ptr1 = &lowScore; //ptr can point to a different memory location
    std::cout << *ptr1 << std::endl;
    
    //ptr2 is a constant pointer to an integer, so it can change the data, but
    //it cannot point to something else:
    int *const ptr2 {&highScore};
    *ptr2 = 95;
    std::cout << highScore << std::endl;
    //ptr2 = &lowScore; //error: assignment of read-only variable '*ptr2'
    
    //ptr3 is a constant pointer to an integer constant, so it cannot change the
    //data and it cannot point to something else:
    const int *const ptr3 {&highScore};
    std::cout << "*ptr3: " << *ptr3 << " | highScore: " << highScore << std::endl;
    *ptr3 = 85; //error: assignment of read-only location '*ptr3'
    ptr3 = &lowScore; //error: assignment of read-only variable '*ptr3'
    
    return 0;
}
*/
/* passing pointers to functions
#include <iostream>

void doubleData(int *ptr);

int main()
{
    int highScore {100};
    int *ptr {nullptr};
    
    std::cout << "highScore: " << highScore << std::endl; //100
    
    doubleData(&highScore); //passing the address
    std::cout << "highScore: " << highScore << std::endl; //200
    
    ptr = &highScore;
    doubleData(ptr); //passing the pointer
    std::cout << "highScore: " << highScore << std::endl; //400
    
    return 0;
}

void doubleData(int *ptr) {
    *ptr *= 2;
}

#include <iostream>
#include <vector>
#include <string>

void displayData(std::vector<std::string> *ptr);
void displayData(int *ptr, int sentinel);

int main()
{
    std::vector<std::string> guestList {"Jon", "James", "Jimmy"};
    displayData(&guestList); //passing address to be stored in temp. pointer ptr 
    
    int scores[] {99, 93, 84, 75, 69, -1};
    displayData(scores,-1);
    
    return 0;
}

void displayData(std::vector<std::string> *ptr) {
    for (auto str : *ptr) std::cout << str << " ";
    std::cout << std::endl;
}
void displayData(int *ptr, int sentinel) {
    while (*ptr != sentinel) std::cout << *ptr++ << " ";
    std::cout << std::endl;
}
*/




























