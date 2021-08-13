## Statements and Operators

### Expressions

Expressions are the most basic building block of a program and can be defined as a sequence of operators and operands that specifies a computation.

- Examples:

```c++
25          // literal
counter     // variable
12 + 90     // addition
34 * 6      // multiplication
a > b       // relational
a = b       // assignment
```

### Statements

A statement is a complete line of code which performs some action. They are terminated with a semi-colon and usually contain different expressions.

- Examples:

```c++
int count;          // declaration
count = 5;          // assignment
count = count + 1;  // assignment
if(count > 10)      // if statement
  std::cout << "time is up!" << std::endl;
```

### Operators

C++ has a large set of operators which can be used to build up expressions. Most of the C++ operators are binary operators, which just mean that they operate on two operands. For example, in the expression below the addition (`+`) operator is being used to calculate the sum of operands `a` and `b`:

```c++
int sum = a + b;
```

However, in C++ we also have unary and ternary operators. An example of a unary operator is the unary minus (`-`) operator which negates its operand. In the example below, the variable `b` receives the value of negative `a`:

```c++
b = -a;
```

The ternary operator, as the name suggests, operates on three operands and is also known as the conditional operator. Its syntax is shown below, in case the expression before the question mark evaluates to `true`, the value of `operand_1` is used, otherwise, `operand_2` is used.

```c++
int sum = expression ? operand_1 : operand_2;
```

#### Assignment operator

These operators are used to modify the value of a given variable/object by assigning a new value to it. In the assignment statement below, `b` is an expression that is evaluated to a value and this value is stored in the memory address represented by `a`:

```c++
a = b;
```

As C++ is strongly typed, the compiler will check if both `a` and `b` are type compatible and if they're are not it will throw an error. Also, `a` must be assignable (i.e. a l-value), which means that `a` cannot be a literal or a constant, but a variable/identifier of a memory address where this new value can be stored. For example:

```c++
int age {27};                       // initialization
const std::string name = "Pedro";   // initialization

// assignment, expression age+1 is evaluated and the result
// is stored in the address represented by age:
age = age + 1;

// error, age and name have different data types:
age = name;

// error, literals cannot be assigned values because they are not l-values,// they don't have a location in memory:
28 = age + 1;

// error, name is qualified as constant, its value cannot be changed:
name = "Jose";
```

Please note that assignment is different from initialization. The later happens when the variable is declared and it has a value attributed to it from the get-go. The former is related to modifying the value that already exists in the variable.

```c++
int a {34}; // initialization
int b {29}; // initialization

a = a + 2*b;  // assignment
b = b*a;      // assignment
```

#### Arithmetic operators

Used to perform mathematical operations on operands.

#### Increment and Decrement

Interesting operators which work as both assignment and arithmetic.

#### Equality

#### Relational operators

These operators allow us to compare the values of two operands.

#### Logical operators

Used to test for logical or boolean conditions.

#### Compound assignment

#### Precedence
