/* ---- GETTING STARTED: READ AND WRITE FROM THE PROMPT ----
-- Summary: Create a C++ program that asks the user for their favorite number between 1 and 100, then 
read this number from the console.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int fav;
	char name[16];

	cout << "What is your favorite number between 1 and 100?" << endl;
	cin >> fav;
	cout << "Amazing! " << fav << " is my favorite number too!" << endl;

	printf("What is your name?\n");
	scanf("%s", name);
	printf("Whaaat?! %s is my name too!\n", name);

	return 0;
}