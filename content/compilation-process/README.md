## C++ Compilation Process

An illustration containing the C++ compilation process and all of its phases/steps can be seen in the image below.

![Compilation Flowchart](../img/compilation-process.png)

### Preprocessing

C++ code is usually kept in units called source files. A source file (_.cpp_ file) together with all the headers and libraries (_.h_ or _.hpp_ files) included by using the preprocessing directive `#include` is known as a preprocessed translation unit. Basically, the source files and header files are combined into a single translation unit by copying and pasting the content of the header files at the place where the `#include` for that header file is in the _.cpp_ file. See example below.

- header file:

```c++
/* Header file - Multiply.h */

/**
 * Multiplies two integers.
 * @params two integers
 * @returns product between the two integers
*/
int multiply(int a, int b); // function prototype
```

- source file:

```c++
/* Definition file - multiply.cpp */

#include "Multiply.h"

int multiply(int a, int b) {
    return a*b;
}
```

After the preprocessor does its job and joins everything together in a single translation unit for the compiler to process, we'll have the following:

```c++
/* Definition file - multiply.cpp */

/* Header file - Multiply.h */

/**
 * Multiplies two integers.
 * @params two integers
 * @returns product between the two integers
*/
int multiply(int a, int b); // function prototype

int multiply(int a, int b) {
    return a*b;
}
```

### Compiling

C++ files are compiled independent of each other into a set of object files (_.o_ or _.obj_ files). The C++ compiler is responsible for going through all the _.cpp_ files and checking the code to see if there are any violations of the C++ language rules. If there are, the compilation process will be aborted and the compiler will generate an error message containing some info regarding the violation in order to assist you in correcting it. If the code being compiled does not break any rules, the compiler will then translate the C++ code into machine code and generate the object files.

### Linking

When the compiler is done performing its checks and generating the object files, the linker will take these object files and combine them into a single executable program (_.exe_) or, in case of a reusable piece of code which performs a commom/repetitive task, into a library (_.a_ or _.lib_). The linking process also decides where each variable and function will be placed in memory, and symbolic references are replaced by actual addresses.

We will talk more about the linker and the linkage process when we get to [header files](../header-files/README.md).
