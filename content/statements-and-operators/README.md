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

Used to perform mathematical operations on operands. The operators for addition, subtraction, multiplication and division are overloaded, which just means that they work with different types, so we can add/subtract/multiply/divide two integers, two floats, two doubles, etc.

a. addition (`+`): used for adding two numbers.

```c++
int num1 {23};
int num2 {11};

// inline calculation - outputs: 23+11=34
std::cout << num1 << "+" << num2 << "=" << num1 + num2 << "\n";

// do the calculation and assign it to the variable res:
int res {0};        // initialize res to 0.
res = num1 + num2;  // res now is equal to 34.
```

b. subtraction (`-`): used for subtracting one number by the other.

```c++
int num1 {55};
int num2 {9};

// inline calculation - outputs: 55-9=46
std::cout << num1 << "-" << num2 << "=" << num1 + num2 << "\n";

// do the calculation and assign it to the variable res:
int res {0};        // initialize res to 0.
res = num1 - num2;  // res now is equal to 46.
res = num2 - num1;  // res now is equal to -46.
```

c. multiplication (`*`): used for multiplying one number by the other.

```c++
int num1 {12};
int num2 {3};

// inline calculation - outputs: 12*3=36
std::cout << num1 << "*" << num2 << "=" << num1 * num2 << "\n";

// do the calculation and assign it to the variable res:
int res {0};        // initialize res to 0.
res = num1 + num2;  // res now is equal to 36.
```

d. division (`/`): used for dividing one number by the other.

```c++
int num1 {8};
int num2 {2};

// inline calculation - outputs: 8/2=4
std::cout << num1 << "/" << num2 << "=" << num1 / num2 << "\n";

// do the calculation and assign it to the variable res:
int res {0};        // initialize res to 0.
res = num1 / num2;  // res now is equal to 4.
```

e. modulo or remainder (`%`): used for calculating the remainder of a division between two integers.

```c++
int num1 {7};
int num2 {2};

// inline calculation - outputs: 7%2=1
std::cout << num1 << "%" << num2 << "=" << num1 % num2 << "\n";

// do the calculation and assign it to the variable res:
int res {0};        // initialize res to 0.
res = num1 % num2;  // res now is equal to 1.
```

#### Increment and Decrement

Interesting operators which work as both assignment and arithmetic. Both can be used as prefix (`++oper_name`) and postfix (`oper_name++`), behaving differently for each case.

a. increment (`++`): adds 1 to its operand and can be used with integers, floating point types and pointers.

```c++
int num {5};

std::cout << num << "\n"; // outputs 5

num++;  // equivalent to (oper_name = oper_name + 1) or (oper_name += 1)
std::cout << num << "\n"; // outputs 6

++num;
std::cout << num << "\n"; // outputs 7

// the difference between prefix and postfix becomes evident when using
// these operators inside expressions:

//--prefix: num is incremented and then sent to the output stream
std::cout << ++num << "\n"; // outputs 8

//--postfix: num is sent to the output and then incremented
std::cout << num++ << "\n"; // outputs 8
std::cout << num << "\n";   // outputs 9 (updated value)
```

b. decrement (`--`): subtracts 1 to its operand and can also be used with integers, floating point types and pointers. Behavior is analog to the increment operator.

```c++
int num {5};

std::cout << num << "\n"; // outputs 5

num--;  // equivalent to (oper_name = oper_name - 1) or (oper_name -= 1)
std::cout << num << "\n"; // outputs 4

--num;
std::cout << num << "\n"; // outputs 3

// the difference between prefix and postfix becomes evident when using
// these operators inside expressions:

//--prefix: num is decremented and then sent to the output stream
std::cout << --num << "\n"; // outputs 2

//--postfix: num is sent to the output and then decremented
std::cout << num-- << "\n"; // outputs 2
std::cout << num << "\n";   // outputs 1 (updated value)
```

#### Equality

Equality operators are operators used when testing for equality. These operators are binary operators which compare the values of two expressions evaluating to a `Boolean` result.

a. equality (`==`): checks if two expressions evaluate to the same value. If so, the result will be `true`, if not, the result will be `false`. Obs.: It is easy to mistake the equality operator `==` with the assignment operator `=`.

```c++
int var_1 = 7;
int var_2 = 4;

std::cout << (var_1 == var_2) << "\n"; // outputs 0, which means false

std::cout << (var_1 == (var_2 + 3)) << "\n"; // outputs 1, which means true
```

b. inequality (`!=`): checks if two expressions evaluate to different values. If so, the result will be `true`, if not, the result will be `false`.

```c++
int var_1 = 7;
int var_2 = 4;

std::cout << (var_1 != var_2) << "\n"; // outputs 1, which means true

std::cout << (var_1 != (var_2 + 3)) << "\n"; // outputs 0, which means false
```

#### Relational operators

These operators allow us to compare the values of two operands. Similar to the equality operatos, relational operators are binary operators which compare the values of two expressions evaluating to a `Boolean` result. The syntax for them is

> `expression_1` **operator** `expression_2`

a. greater than (`>`): checks if the expression at left-hand side of the operator evaluates to a value greater than the value given by the expression at the rigth-hand side.

```c++
int var_1 = 7;
int var_2 = 4;

std::cout << (var_1 > var_2) << "\n"; // outputs 1 (true)

std::cout << (var_1 > (var_2 + 3)) << "\n"; // outputs 0 (false)

```

b. greater than or equal to (`>=`): checks if the expression at left-hand side of the operator evaluates to a value greater or equal to the value given by the expression at the rigth-hand side.

```c++
int var_1 = 7;
int var_2 = 4;

std::cout << (var_1 >= var_2) << "\n"; // outputs 1 (true)

std::cout << (var_1 >= (var_2 + 3)) << "\n"; // outputs 1 (true)

```

c. less than (`<`): checks if the expression at left-hand side of the operator evaluates to a value less than the value given by the expression at the rigth-hand side.

```c++
int var_1 = 7;
int var_2 = 4;

std::cout << (var_1 < var_2) << "\n"; // outputs 0 (false)

std::cout << (var_1 < (var_2 + 4)) << "\n"; // outputs 1 (true)

```

d. less than or equal to (`<=`): checks if the expression at left-hand side of the operator evaluates to a value less or equal to the value given by the expression at the rigth-hand side.

```c++
int var_1 = 7;
int var_2 = 4;

std::cout << (var_1 <= var_2) << "\n"; // outputs 0 (true)

std::cout << (var_1 <= (var_2 + 3)) << "\n"; // outputs 1 (true)

```

e. three-way comparison (`<=>`) [C++20]: determines for two expressions/objects `A` and `B` whether `A < B`, `A = B`, or `A > B` returning an integer. If this integer is less than `0` (`ans < 0`), `A` is less than `B`. In case this integer is equal to `0` (`ans == 0`), `A` is equal to `B`. Finally, if this integer is greater than `0` (`ans > 0`), `A` is greater than `B`.

```c++
int A = 5;
int B = 10;

auto ans = (A <=> B);

if(ans < 0)
  std::cout << "A less than B";
else if (ans > 0)
  std::cout << "A greater than B";
else
  std::cout << "A equal to B";
```

#### Logical operators

Used to test for logical or boolean conditions. These operators work on Boolean expressions and evaluate to a Boolean value themselves.

a. negation (`!`): this is an unary operator that simply negates the result of the expression it is applied to. So if the expression evaluates to `true`, the operator `!` changes it to a `false` and vice-versa. See the truth table below:

| expression_1 | result  |
| ------------ | ------- |
| `false`      | `true`  |
| `true`       | `false` |

```c++
int num_1 {30};
int num_2 {12};

bool n = (num_1 > num_2); // since 30 > 12, n = true.
bool m = !n; // since n is true, negating this value we get m = false.

```

b. logical AND (`&&`): this is a binary operator and the result is only `true` when both expressions evaluate to `true`. See truth table below for the possible scenarios:

| expression_1 | expression_2 | result  |
| ------------ | ------------ | ------- |
| `false`      | `false`      | `false` |
| `false`      | `true`       | `false` |
| `true`       | `false`      | `false` |
| `true`       | `true`       | `true`  |

```c++
int num_1 {30};
int num_2 {12};
bool expression_1, expression_2, result;

expression_1 = (num_1 < num_2); // since 30 > 12, expression_1 evaluates to false.
expression_2 = (num_1 == num_2); // since 30 > 12, expression_2 evaluates to false.
result = expression_1 && expression_2; // by taking a look at the truth table, we know that result evaluates to false (false && false = false).


expression_2 = (num_1 > num_2); // since 30 > 12, expression_2 evaluates to true.
result = expression_1 && expression_2; // false && true = false


expression_1 = (num_1 >= 29); // since num_1 = 30, expression_1 evaluates to true.
expression_2 = !expression_1; // from previous topic, we know that expression_2 will evaluate to false;
result = expression_1 && expression_2; // true && false = false


expression_2 = ((num_1 - num_2) > num_2); // num_1 - num_2 = 18 and 18 > 12, so expression_2 evaluates to true.
result = expression_1 && expression_2; // true && true = true

```

c. logical OR (`||`): this is a binary operator and the result is `true` whenever one of the expressions evaluate to `true`. See truth table below for the possible scenarios:

| expression_1 | expression_2 | result  |
| ------------ | ------------ | ------- |
| `false`      | `false`      | `false` |
| `false`      | `true`       | `true`  |
| `true`       | `false`      | `true`  |
| `true`       | `true`       | `true`  |

```c++
int num_1 {30};
int num_2 {12};
bool expression_1, expression_2, result;

expression_1 = (num_1 < num_2); // since 30 > 12, expression_1 evaluates to false.
expression_2 = (num_1 == num_2); // since 30 > 12, expression_2 evaluates to false.
result = expression_1 && expression_2; // by taking a look at the truth table, we know that result evaluates to false (false && false = false).


expression_2 = (num_1 > num_2); // since 30 > 12, expression_2 evaluates to true.
result = expression_1 && expression_2; // false && true = true


expression_1 = (num_1 >= 29); // since num_1 = 30, expression_1 evaluates to true.
expression_2 = !expression_1; // from previous topic, we know that expression_2 will evaluate to false;
result = expression_1 && expression_2; // true && false = true


expression_2 = ((num_1 - num_2) > num_2); // num_1 - num_2 = 18 and 18 > 12, so expression_2 evaluates to true.
result = expression_1 && expression_2; // true && true = true

```

Just like we have for arithmetical operators, there is also the matter of precedence for logical operators. In case we're not using parenthesis to specify the order of evaluation:

- `!` has higher precedence than `&&`
- `&&` has higher precedence than `||`

#### Compound assignment

These commonly used operators provide a shorter syntax for assigning the results of an arithmetical or bitwise operator. The syntax for these operators is very simple, it is basically the operator we want to use immediately followed by an equal sign:

> `expr_1` **operator**= `expr_2`

The table below can be used as reference:

a. arithmetical operators:

| operator |        how to use         |            what it does             |
| :------: | :-----------------------: | :---------------------------------: |
|    +=    | `expr_1` **+**= `expr_2`  | `expr_1` = `expr_1` **+** `expr_2`  |
|    -=    | `expr_1` **-**= `expr_2`  | `expr_1` = `expr_1` **-** `expr_2`  |
|   \*=    | `expr_1` **\***= `expr_2` | `expr_1` = `expr_1` **\*** `expr_2` |
|    /=    | `expr_1` **/**= `expr_2`  | `expr_1` = `expr_1` **/** `expr_2`  |
|    %=    | `expr_1` **%**= `expr_2`  | `expr_1` = `expr_1` **%** `expr_2`  |
|          |                           |                                     |

b. bitwise operators:

| operator |        how to use         |            what it does             |
| :------: | :-----------------------: | :---------------------------------: |
|   >>=    | `expr_1` **>>**= `expr_2` | `expr_1` = `expr_1` **>>** `expr_2` |
|   <<=    | `expr_1` **<<**= `expr_2` | `expr_1` = `expr_1` **<<** `expr_2` |
|    &=    | `expr_1` **&**= `expr_2`  | `expr_1` = `expr_1` **&** `expr_2`  |
|    ^=    | `expr_1` **^**= `expr_2`  | `expr_1` = `expr_1` **^** `expr_2`  |
|   \|=    | `expr_1` **\|**= `expr_2` | `expr_1` = `expr_1` **\|** `expr_2` |
|          |                           |                                     |

#### Precedence
