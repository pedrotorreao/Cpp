#include <iostream>

using namespace std;

int main() {

	cout << "Enter an amount in cents: ";
	int myCents {0};
	cin >> myCents;

	int dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0}, remainder {0};

	cout << "You can provide this change as follows:" << endl;

	dollars = myCents / 100;
	remainder = myCents % 100;
	cout << "- dollars: " << dollars << endl;

	quarters = remainder / 25;
	remainder = remainder % 25;
	cout << "- quarters: " << quarters << endl;

	dimes = remainder / 10;
	remainder = remainder % 10;
	cout << "- dimes: " << dimes << endl;

	nickels = remainder / 5;
	remainder = remainder % 5;
	cout << "- nickels: " << nickels << endl;

	pennies = remainder;
	cout << "- pennies: " << pennies << endl;

	return 0;
}
//Section 8 - Keypoints:
/*
-- Lecture 67: Increment and Decrement Operators
		int counter = 10;
		int result = 0;
a) pre-increment:
	++num: increment it and then use it
	Ex.: 
		result = ++counter; //counter = counter + 1 = 11; result = counter = 11;
		//counter = 11 and result = 11
b) pos-increment:
	num++: use it and then increment it 
	Ex.:
		result = counter++; //result = counter = 10; counter = counter + 1 = 11;
		//result = 10 and counter = 11;

-- Lecture 68: Mixed Expressions and Conversions

- C++ operations occur on same type operands. If operands are of different types, C++ will try to automatically convert types (coercion). 
If it can't, a compiler error will occur.

- Higher vs Lower types: based on the size of the values the type can hold. So a long double is 
a higher type than a long and a Long is of higher type than an int.

- The idea is that we can typically convert from a lower type to a larger type automatically since the
lower types value will fit into the higher types value. Short and character types are always converted to integers.

a) Promotion: when we convert a lower type to a higher type.
	Ex.: when we add an integer and a double. In this case we promote the integer to a double and then do the calculation.

b) Demotion: when we convert a higher type to a lower type.
	Ex.: suppose we want to store 12.5 into an int variable. A demotion happens and the decimal part of 12.5 is truncated and we're left just with
		the integer 12.

c) Explicit type casting - static_cast<type>:
	Ex.:
		int totalAmount {100}; int totalNumber {8}; double average {0.0};

		average = totalAmount/totalNumber; //int division, so average = 12
		average = static_cast<double>(totalAmount)/totalNumber; //one of the operands is a double, the compiler will convert 
		//the total number to a double and perform a double division. average = 12.5
		//in older versions, we could do:
		average = (double)totalAmount/totalNumber;
	Ex.:
		#include <iostream>
		#include <string>

		int main()
		{
  			int a = 100;
  			int b = 12;
  			double y = a / b;
  			double x = (double)a / b;
  			double z = static_cast<double>(a) / b;
  
  			std::cout << y << "\n"; //outputs 8
  			std::cout << x << "\n"; //outputs 8.33333
  			std::cout << z << "\n"; //outputs 8.33333
		}
*/