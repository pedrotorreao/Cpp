#include <vector>
#include <iostream>
//using namespace std;

//------Function Prototypes------->>
void displayMenu();
char userChoice();
void printList(const std::vector<int> &list);
void addToList(std::vector<int> &list);
void meanCalc(const std::vector<int> &list);
void getSmallestNum(const std::vector<int> &list);
void getLargestNum(const std::vector<int> &list);
void clearList(std::vector<int> &list);

//--------------------------------<<
int main () {
	char userInput {};
	std::vector <int> listNumbers;

	do {
		displayMenu();
		userInput = toupper(userChoice());

		switch (userInput) {
			case 'P':
				printList(listNumbers);
				break; 
			case 'A':
				addToList(listNumbers); 
				break;
			case 'M':
			 	meanCalc(listNumbers);
				break;
			case 'S': 
				getSmallestNum(listNumbers);
				break;
			case 'L':
				getLargestNum(listNumbers);
				break;
			case 'C':
				clearList(listNumbers);
				break;
			case 'Q': 
				std::cout << "See you next time, goodbye!\n" << std::endl; break;
			default: 
				std::cout << "Unkown selection, please try again!\n" << std::endl;
		}

	} while(userInput != 'Q');

	return 0;
}
//g++ -Wall -std=c++14 filename.cpp -o filename.exe

// ------------------- Function Definitions --------------------
void displayMenu() {
	std::cout << "P - Print the numbers on the list" << std::endl;
	std::cout << "A - Add a number to the list" << std::endl;
	std::cout << "M - Calculate and display the mean of the numbers" << std::endl;
	std::cout << "S - Display the smallest number" << std::endl;
	std::cout << "L - Display the largest number" << std::endl;
	std::cout << "C - Clear the list" << std::endl;
	std::cout << "Q - Quit" << std::endl;
}

char userChoice() {
	char userInput {};

	std::cout << std::endl << "Enter the desired operation: ";
	std::cin >> userInput;

	return userInput;
}

void printList(const std::vector<int> &list) {
	if(list.size() == 0) {
		std::cout << "[ ] - List is empty!\n" << std::endl;
	} 
	else {
		std::cout << "List elements entered so far: [ ";
		for (unsigned int i {}; i < list.size(); i++) {
			std::cout << list.at(i) << ' ';
		}
		std::cout << "]\n" << std::endl;
	}
}

void addToList(std::vector<int> &list) {
	int num {};
	std::cout << "A - Enter an integer: ";
	std::cin >> num;
	list.push_back(num); 
	std::cout << num << " was added to the list\n" << std::endl;
}

void meanCalc(const std::vector<int> &list) {
	double mean {};

	if(list.size() == 0) {
		std::cout << "[ ] - Unnable to calculate the mean, the list is empty!\n" << std::endl;
	} 
	else {
		for (unsigned int i {}; i < list.size(); i++) {
			mean += list.at(i);
		}
		mean = static_cast<double>(mean)/list.size();
		std::cout << "Mean: " << mean << "\n" << std::endl; 
	}
}

void getSmallestNum(const std::vector<int> &list) {
	int smallest {INT_MAX};

	if(list.size() == 0) {
		std::cout << "[ ] - Unnable to determine the smallest number, the list is empty!\n" << std::endl;
	} 
	else {
		for (unsigned int i {}; i < list.size(); i++) {
			if (list.at(i) < smallest) { smallest = list.at(i); }
		}
		std::cout << "Smallest number on the list: " << smallest << "\n" << std::endl; 
	}
}

void getLargestNum(const std::vector<int> &list) {
	int largest {INT_MIN};

	if(list.size() == 0) {
		std::cout << "[ ] - Unnable to determine the largest number, the list is empty!\n" << std::endl;
	} 
	else {
		for (unsigned int i {}; i < list.size(); i++) {
			if (list.at(i) > largest) { largest = list.at(i); }
		}
		std::cout << "Largest number on the list: " << largest << "\n" << std::endl; 
	}
}

void clearList(std::vector<int> &list) {
	if(list.size() == 0) {
		std::cout << "[ ] - The list is already empty!\n" << std::endl;
	} 
	else {
		list.clear();
		std::cout << "The list was cleared!\n" << std::endl;
	}
}