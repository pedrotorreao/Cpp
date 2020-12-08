#include <vector>
#include <iostream>
//using namespace std;

int main () {
	char userInput {};
	std::vector <int> listNumbers;
	int num {}, mean {}, smallest {INT_MAX}, largest {INT_MIN};

	do {
		std::cout << "P - Print the numbers on the list" << std::endl;
		std::cout << "A - Add a number to the list" << std::endl;
		std::cout << "M - Calculate and display the mean of the numbers" << std::endl;
		std::cout << "S - Display the smallest number" << std::endl;
		std::cout << "L - Display the largest number" << std::endl;
		std::cout << "C - Clear the list" << std::endl;
		std::cout << "Q - Quit" << std::endl;

		std::cout << std::endl << "Enter the desired operation: ";
		std::cin >> userInput;

		switch (userInput) {
			case 'P':
			case 'p':
				if(listNumbers.size() == 0) {
					std::cout << "[ ] - List is empty!\n" << std::endl;
				} else {
					std::cout << "List elements entered so far: [ ";
					for (unsigned int i {}; i < listNumbers.size(); i++) {
						std::cout << listNumbers.at(i) << ' ';
					}
					std::cout << "]\n" << std::endl;
				}  
				break; 
			case 'A':
			case 'a':
				std::cout << "A - Enter an integer: ";
				std::cin >> num;
				listNumbers.push_back(num); 
				std::cout << num << " was added to the list\n" << std::endl; break;
			case 'M':
			case 'm':
			 	if(listNumbers.size() == 0) {
					std::cout << "[ ] - Unnable to calculate the mean, the list is empty!\n" << std::endl;
				} else {
					for (unsigned int i {}; i < listNumbers.size(); i++) {
						mean += listNumbers.at(i);
					}
					mean = mean/listNumbers.size();
					std::cout << "Mean: " << mean << "\n" << std::endl; 
				}
				break;
			case 'S':
			case 's': 
				if(listNumbers.size() == 0) {
					std::cout << "[ ] - Unnable to determine the smallest number, the list is empty!\n" << std::endl;
				} else {
					for (unsigned int i {}; i < listNumbers.size(); i++) {
						if (listNumbers.at(i) < smallest) { smallest = listNumbers.at(i); }
					}
					std::cout << "Smallest number on the list: " << smallest << "\n" << std::endl; 
				}
				break;
			case 'L':
			case 'l':
				if(listNumbers.size() == 0) {
					std::cout << "[ ] - Unnable to determine the largest number, the list is empty!\n" << std::endl;
				} else {
					for (unsigned int i {}; i < listNumbers.size(); i++) {
						if (listNumbers.at(i) > largest) { largest = listNumbers.at(i); }
					}
					std::cout << "Largest number on the list: " << largest << "\n" << std::endl; 
				}
				break;
			case 'C':
			case 'c':
				if(listNumbers.size() == 0) {
					std::cout << "[ ] - The list is already empty!\n" << std::endl;
				} else {
					listNumbers.clear();
					std::cout << "The list was cleared!\n" << std::endl;
				}
				break;
			case 'Q':
			case 'q': 
				std::cout << "See you next time, goodbye!\n" << std::endl; break;
			default: 
				std::cout << "Unkown selection, please try again!\n" << std::endl;
		}

	} while(userInput != 'Q' && userInput != 'q');

	return 0;
}