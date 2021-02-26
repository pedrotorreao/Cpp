## Variables and constants

### Variables

We can define a variable as a part of memory used to store a value. Each variable needs an unique identifier (name) to distinguish it from others. A valid identifier must begin with a letter and may be a sequence of one or more letters, digits, or underscore characters. Spaces, punctuation marks, and symbols cannot be part of an identifier. In addition, an identifier cannot begin with a number.

In C++ there are a few names which are reserved, usually called keywords and used to identify operations and data descriptions. This keywords must not be used as identifiers when naming variables. A list containing all the C++ reserved keywords can be found [here](https://en.cppreference.com/w/cpp/keyword).

Another important point that is worth mentionig is that the C++ language is a "case sensitive" language, meaning that means that an identifier written in capital letters is not equivalent to another one with the same name but written in small letters. On this note,

> `mydata` differs from `myData` which differs from `MyData`

and so on.

#### Data types

Fundamental data types are basic types implemented directly by the language that represent the basic storage units supported natively by most systems.

* Primitive data types
  * integer - basic integer type, support whole values with no fractional part.
  * char - represent a single-character
  * floating-point - represent real values with different levels of precision
  * boolean - capable of holding one of the two values: _true_ or _false_. 
 
There are variations of these data types regarding their sizes - _long_, _short_, _long long_, and if they are able to represent negative values - _signed_, or not - _unsigned_. A complete list containing all fundamental data types, their variations and sizes in C++ can be seen [here](https://en.cppreference.com/w/cpp/language/types) and [here](https://www.cplusplus.com/doc/tutorial/variables/).

* Compound data types

  * arrays
  * strings
  * struct
  * classes
  * union
  * pointers
  * references

Most of these compound data types will be presented in the next sections.

#### Variable Declaration & Initialization
* Declaration

C++ is a strongly-typed language, and requires every variable to be declared with its type before its first use. This informs the compiler the size to reserve in memory for the variable and how to interpret its value. 
> Syntax: `type variable_name;`

Examples:
```c++
int age; /*declares a variable of type int named age*/
float height; /*declares a variable of type float named height*/
char favLetter; /*declares a variable of type char named favLetter*/
```
or, in case we have multiple variables of the same type, they can all be declared in one single line separated by commas, se below:
```c++
int my_age, your_age;
float my_height, your_height;
char myFavteLetter, yourFavLetter;
```
* Initialization

The variables declared above hold unspecified values until they are assigned values for the first time (initialized). Therefore, using them before their initialization may result in unspecified behaviour or compilation errors.
> Syntax: `type variable_name = initial_value;`

Examples:
```c++
/*declares an int variable named age and initializes it with value 27*/
int age = 27; 
/*declares a float variable named height and initializes it with value 1.85*/
float height = 1.85; 
/*declares a char variable named favLetter and initializes it with value Z*/
char favoriteLetter = 'Z'; 
```

### Constants


### References
* [The Cherno - Youtube](https://www.youtube.com/watch?v=zB9RI8_wExo&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=8)
* [C plus plus](https://www.cplusplus.com/doc/tutorial/variables/)
* [Learn Cpp]()
* [Cpp Reference]()