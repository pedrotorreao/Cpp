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

These operators are used to modify the value of a given variable/object by assigning a new value to it. Assignment is different from initialization.

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
