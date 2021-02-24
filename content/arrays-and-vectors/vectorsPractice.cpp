/* ---- ARRAYS AND VECTORS ----
-- Step-by-step: 
	1. Declare 2 empty vectors of integers,.
	2. Add 10 and 20 to one of the vectors and 100 and 200 to the other.
	3. Display the contents of both vectors.
	4. Declare an empty 2D vector.
	5. Add both previously created vectors to the newly created 2D vector.
	6. Display the content of the 2D vector.
	7. Change the 1st element of the 1st vector to 1000 and display the 2D vector again.
	8. Display the content of the 2D vector.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vector1;
	vector<int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);
	cout << "vector1[0] is: " << vector1.at(0) << endl;
	cout << "vector1[1] is: " << vector1.at(1) << endl;
	cout << "vector1 size is: " << vector1.size() << endl;
	cout << endl;

	vector2.push_back(100);
	vector2.push_back(200);
	cout << "vector2[0] is: " << vector2.at(0) << endl;
	cout << "vector2[1] is: " << vector2.at(1) << endl;
	cout << "vector2 size is: " << vector2.size() << endl;
	cout << endl;

	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "vector_2d[0] is: " << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
	cout << "vector_2d[1] is: " << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	cout << endl;

	vector1.at(0) = 1000;

	cout << "vector_2d[0] is: " << vector_2d.at(0).at(0) << endl;
	cout << "vector_2d[1] is: " << vector_2d.at(1).at(0) << endl;

	return 0;
}