/* ---- STATEMENTS AND OPERATORS ----
-- Summary: 
	Write a program that asks the user to enter the number of cents. The program will then display 
	how to provide that change to the user using the following table:
		1 dollar -- 100 cents
		1 quarter -- 25 cents
		1 dime	-- 10 cents
		1 nickel -- 5 cents
		1 penny -- 1 cent
	Example: 
		If the user enters 92 cents, you can provide the change in the following manner:
			0 dollars
			3 quarters
			1 dime
			1 nickel
			2 pennies
*/
#include <iostream>

using namespace std;

int main()
{

	cout << "Enter an amount in cents: ";
	int myCents{0};
	cin >> myCents;

	int dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0}, remainder{0};

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