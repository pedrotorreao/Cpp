/* ---- VARIABLES AND CONSTANTS ----
-- Summary: Create a C++ program to generate an invoice for a Carpet Cleaning Service.
	> Charges vary depending on the amount and size of the rooms;
	> Define a sales tax;
	> Come up with additional text.
-- Inputs: The user must input the number and size of the rooms to be cleaned;
-- Output: An estimate of the cost.
*/

#include <iostream>

using namespace std;

int main()
{
	const float priceSmallRoom{25.0};
	const float priceLargeRoom{35.0};
	const float salesTax{0.06};
	const int expirationDays{30};

	cout << "=====================================" << endl;
	cout << "-- Frank's Carpet Cleaning Service --" << endl;
	cout << "\nCharges:" << endl;
	cout << "\t$" << priceSmallRoom << " per small room." << endl;
	cout << "\t$" << priceLargeRoom << " per large room." << endl;
	cout << "Sales tax is " << salesTax * 100 << "%." << endl;
	cout << "Estimates are valid for " << expirationDays << " days." << endl;
	cout << "=====================================" << endl;

	int numSmallRooms{0}, numLargeRooms{0};

	cout << "Enter the number of small rooms that you'd like cleaned:";
	cin >> numSmallRooms;
	cout << "Enter the number of large rooms that you'd like cleaned:";
	cin >> numLargeRooms;
	cout << "=====================================" << endl;

	cout << "Estimates for carpet cleaning service." << endl;
	cout << "Number of small rooms: " << numSmallRooms << endl;
	cout << "Number of large rooms: " << numLargeRooms << endl;

	float totalSmallRooms = numSmallRooms * priceSmallRoom;
	float totalLargeRooms = numLargeRooms * priceLargeRoom;
	float cost = totalLargeRooms + totalSmallRooms;
	float taxCost = cost * salesTax;

	cout << "Price for small rooms: $" << totalSmallRooms << endl;
	cout << "Price for large rooms: $" << totalLargeRooms << endl;
	cout << "Cost: $" << cost << endl;
	cout << "Taxes: $" << taxCost << endl;
	cout << "=====================================" << endl;

	float totalPayment = cost + taxCost;

	cout << "Total estimate: $" << totalPayment << endl;
	cout << "This estimate is valid for " << expirationDays << " days." << endl;

	return 0;
}