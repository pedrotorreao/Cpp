## Arrays & Vectors
### Arrays

An array is a data structure which consists of a collection of elements and all elements are of the same type. Array elements can be accessed directly by using its position/index keeping in mind that arrays are zero-based which means that its position count begins at 0.

Regarding size, arrays may be classified as _static_, which means that they are fixed in size.

#### Declaration & Initialization
* Declaring an array

*Syntax*: 
> `element_data_type  array_name[number_of_elements];`

*Example 1*:
```c++
int scores[5]; /* array of integers that contains 5 elements */
```

In the example above `scores` is not initialized, which means that we don't know what are the values stored in each of its positions. It is best practice to always initalize arrays to avoid them holding unpredictable data.

* Initializing an array

*Syntax*:
> `array_name[element_index] = value;`

*Example 2*:
```c++
scores[3] = 100; /* assigns 100 to the fourth array position */
```
It is possible to declare and initialize an array in a single line by using an initializer list. See below:

*Example 3*:
```c++
int scores[5] {100, 98, 99, 85, 90};
```

#### Accessing & Modifying
* Accessing array elements
  
*Syntax*:
> `array_name[element_index]`

*Example 4* - considering the initialized array of *Example 3*:
```c++
std::cout << scores[2] << std::endl; /* outputs 99 to the console */
```
* Modifying array elements

*Syntax*:

> `array_name[element_index]`

*Example 5* - considering the initialized array of *Example 3*:
```c++
scores[0] = 93; /* changes value at the first position of the array to 93*/
scores[1] = 82; /* changes value at the second position of the array to 88*/

std::cout << scores[0] << std::endl; /* outputs 93, previously 100*/
std::cout << scores[1] << std::endl; /* outputs 82, previously 98 */
```
Can you guess what the output would be for the code snippet below?
```c++
std::cout << scores << std::endl;
```
This would output an hexadecimal value representing the address of the first element of `scores`. This is simply due to the fact that the array name represents the location (address) of the first element of the array in memory. We can, then, imagine the indexes inside the square brackets as being simply offsets from that initial position.

### Vectors

Vectors are sequence containers (objects) in the C++ Standard Template Library which represent arrays that can change in size. Vectors also use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements.

Regarding size, vectors may be classified as dynamic, which means that memory is allocated on demand and use a dynamically allocated array as storage. When growing in size, this array may need to be reallocated to a different memory location in order to accomodate the new elements being inserted. This operation basically allocates memory for a larger array and copies all the elements to it, which is a relatively expensive task in terms of processing time. However, vectors do not reallocate each time an element is added to the container, instead, vectors may allocate some extra storage to accommodate for possible growth, and thus the vector may have an actual capacity greater than the storage strictly needed to contain its elements (i.e., its size). Therefore, compared to arrays, vectors consume more memory in exchange for the ability to manage storage and grow dynamically in an efficient way.

In order to be able to use vectors, it is necessarry to include its header file by adding the preprocessor directive `#include <vector>` at the top of your source file.

#### Declaration & Initialization
* Declaring a vector

*Syntax*: 
> `std::vector<element_data_type>  vector_name;`

*Example 6*:
```c++
std::vector<int> scores; /* empty vector of integers */
```
or, in case we know the initial size of the vector:
```c++
/*declares a vector of 5 elements and initialize them all to zero*/
std::vector<int> scores(5); 
```

* Initializing a vector

*Syntax*:
> `vector_name[element_index] = value;` 

or
> `vector_name.at(element_index) = value;`

It is valid to mention that the operator `[]` does not perform bounds checking The method `at()`, on the other hand, does bounds checking. This important for avoiding accessing/modifying memory addresses which don't belong to the vector and can contain important data.


*Example 7*:
```c++
scores[3] = 100; /* assigns 100 to the fourth array position */
scores.at(1) = 85; /* assigns 85 to the second array position */
```
However, if you don't specify the vector' size in the declaration and try to initialize it by specifying the index as above, you'll get an error since the vector is initially completely empty. Therefore, if possible, it's best to initialize the vector upon declaration. We can declare and initialize a vector in a single line by using an initializer list. See below:

*Example 8*:
```c++
std::vector<int> scores {100, 98, 99, 85, 90};
```

#### Accessing & Modifying
* Accessing vector elements
  
*Syntax*:
> `vector_name[element_index]`

*Example 9* - considering the initialized vector of *Example 8*:
```c++
std::cout << scores[2] << std::endl; /* outputs 99 to the console */
```
* Modifying vector elements

*Syntax*:

> `vector_name[element_index]`

*Example 10* - considering the initialized vector of *Example 8*:
```c++
scores[0] = 93; /* changes value at the first position of the array to 93*/
scores.at(1) = 82; /* changes value at the second position of the array to 88*/

std::cout << scores[0] << std::endl; /* outputs 93, previously 100*/
std::cout << scores.at(1) << std::endl; /* outputs 82, previously 98 */
```
In case we just want to add and remove elements at/from the last position in the vector, we may use the built-in methods `push_back()` and `pop_back` respectively. Consider the initialzed vector from *Example 8*:
```c++
std::cout << scores.size() << std::endl; /* this would output 5*/

scores.push_back(75); /*adds 75 to the end of the vector*/
scores.push_back(83); /*adds 83 to the end of the vector*/
std::cout << scores.size() << std::endl; /* this would output 7*/

scores.pop_back(); /*removes 83 from the last position of the vector*/
std::cout << scores.size() << std::endl; /* this would output 6*/
```

#### Useful methods
* Access:
  * `at(n)`: returns a reference to the element at position `n` in the vector.
  * `front()`: returns a reference to the first element in the vector.
  * `back()`: returns a reference to the last element in the vector.
* Capacity: 
  * `size()`: returns the number of elements in the vector.
  * `resize(n)`: resizes the container so that it contains n elements.
  * `capacity()`: returns the size of the storage space allocated for the vector, expressed in terms of elements. It can be equal or greater to the vector size, with the extra space allowing growth without the need to reallocate on each insertion.
  * `empty()`: returns a boolean value indicating whether the vector is empty.
  * `reserve(n)`: requests the vector capacity to be at least enough to contain `n` elements.
* Modifiers: 
  * `push_back(val)`: adds element `val` to end of the vector.
  * `pop_back()`: removes the last element.
  * `assign(n,val)`: assigns new contents (`val`) to the vector, replacing its current contents, and modifying its size (to `n`) if needed.
  * `erase(position)`: removes a single element (`position`) or a range of elements ([first,last)) reducing the container size by the number of elements removed, which are destroyed.
  * `clear()`: removes all elements from the vector (which are destroyed), leaving the container with a size of 0.

#### References
* [cplusplus ](https://www.cplusplus.com/reference/vector/vector/)
* [LearnCpp](https://www.learncpp.com/cpp-tutorial/an-introduction-to-stdvector/)
