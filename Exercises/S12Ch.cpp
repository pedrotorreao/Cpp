#include <iostream>
#include <vector>
#include <string>
//g++ -Wall -std=c++14 S12Ch.cpp -o S12Ch.exe

int *apply_all(int arr1[], const std::size_t arr1_size, int arr2[], const std::size_t arr2_size);
void print(int *ptr, const std::size_t arr_size);

int main() {
	const std::size_t array1_size {5};
	const std::size_t array2_size {3};

	int array1[] {1,2,3,4,5};
	int array2[] {10,20,30};

	std::cout << "array 1: ";
	print(array1, array1_size);

	std::cout << "array 2: ";
	print(array2, array2_size);

	int *results = apply_all(array1, array1_size, array2, array2_size);
	constexpr std::size_t result_size {array1_size * array2_size};

	std::cout << "Result: ";
	print(results, result_size);

	std::cout << std::endl;

	delete [] results; //free the memory dynamically allocated on the heap.

	return 0;
}

int *apply_all(int arr1[], const std::size_t arr1_size, int arr2[], const std::size_t arr2_size){
	const std::size_t result_size {arr1_size * arr2_size};
	std::size_t inc{0};
    
	int *result_ptr {nullptr};
	result_ptr = new int [result_size]; //allocates memory on the heap for an array of result_size elements

	for(std::size_t i{0}; i < arr2_size; ++i){
		for (std::size_t j{0}; j < arr1_size; ++j){
			*(result_ptr + inc) = *(arr2+i) * *(arr1+j);
			++inc;
		}
	}

	return result_ptr;
}

void print(int *ptr, const std::size_t arr_size){
	for (std::size_t i{0}; i < arr_size; ++i) {
		std::cout << *(ptr+i) << " ";
	}
	std::cout << std::endl;
}