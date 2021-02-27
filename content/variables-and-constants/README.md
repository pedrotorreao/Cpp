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
> C initialization - Syntax: `type variable_name = initial_value;`

Examples:
```c++
/*declares an int variable named age and initializes it with value 27*/
int age = 27; 
/*declares a float variable named height and initializes it with value 1.85*/
float height = 1.85; 
/*declares a char variable named favLetter and initializes it with value Z*/
char favoriteLetter = 'Z'; 
```
> Constructor initialization - Syntax: `type variable_name (initial_value);`

Examples:
```c++
/*declares an int variable named age and initializes it with value 27*/
int age (27); 
/*declares a float variable named height and initializes it with value 1.85*/
float height (1.85); 
/*declares a char variable named favLetter and initializes it with value Z*/
char favoriteLetter ('Z'); 
```

> Uniform initialization - Syntax: `type variable_name {initial_value};`

Examples:
```c++
/*declares an int variable named age and initializes it with value 27*/
int age {27}; 
/*declares a float variable named height and initializes it with value 1.85*/
float height {1.85}; 
/*declares a char variable named favLetter and initializes it with value Z*/
char favoriteLetter {'Z'}; 
```
### Constants

Constants are simply expressions with a fixed value. Constants can be subdivided in literals and constant variables.

#### Literals

Literals are data used for representing fixed values and used to express particular values within the source code of a program. In the example below
> `age = 27;`

the number `27` being assigned to `age` is a literal constant. We can classify literals into the following categories:

* Integers - numerical constants that identify integer values without any fractional or exponential part and they can be represented as decimal numbers (base 10), octal numbers (base 8 - preceded by a `0`) and hexadecimal numbers (base 16 - preceded by `0x`). See example below:
```c++
27      // decimal
033     // octal
0x1B    // hexadecimal
```

The default type for integer literals is `int` but, as with variables, there are a few variations regarding size and sign.

* Floating-point: used to express real values, with decimals and/or exponents and can include a decimal point, an e character (for exponencial numbers), or both. See example below:
```c++
1.41421            // square root of 2
2.99792458e9       // speed of light in a vaccum
6.67430e-11        // gravitational constant
```

The default type for floating-poin literals is `double` but, as with variables, there are a few variations regarding size and sign.

* Characters - A character literal is created by enclosing a single character inside single quotation marks. See example below:
```c++
'A'            // character A 
```
The default type for characters literals is `char` but, as with variables, there are a few variations regarding size and sign.

* String literals - A string literal is a sequence of characters enclosed in double-quote marks. See example below:
```c++
"What a beautiful day"      // this sentence is a string literal
```
The default type for string literals is also `char` but, as with variables, there are a few variations regarding size and sign.

* Escape sequences - special characters that cannot be typed and/or have special meaning in C++. See a non-exhaustive list below:
  * `'\n'` - adds a new line
  * `'\t'` - adds a horizontal tab
  * `'\v'` - adds a vertical tab
  * `'\r'` - carriage return 
  * `'\0'` - null character
  * `'\\'` - backslash
  * `'\''` - allows to use single quotes
  * `'\"'` - allows to use double quotes
  * `'\?'` - allows the use of quotation mark as text

#### Constant variables

Variables whose values cannot be modified. To declare a constant variable, we add the `const` keyword before the type. See below:
```c++
const int age = 27; /*that's it, I am forever 27*/
age = 28; /*ERROR: Sorry, I am forever young!*/
```

In the example above, the `const` keyword is used to declare a constant integer named `age`. Any attempts to change the value of `age` will result in an error message.

### References
* [The Cherno - Youtube](https://www.youtube.com/watch?v=zB9RI8_wExo&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=8)
* [C plus plus](https://www.cplusplus.com/doc/tutorial/variables/)
* [Learn Cpp](https://www.learncpp.com/cpp-tutorial/introduction-to-variables/)
* [Cpp Reference](https://en.cppreference.com/w/cpp/language/identifiers)
* [Programiz](https://www.programiz.com/cpp-programming/variables-literals)