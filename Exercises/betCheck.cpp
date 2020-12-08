#include <iostream>
#include <vector>

using namespace std;

int checkLotoFacilBet (vector<int> vec) {
	int count {};
	vector <int> winNum {2,3,4,5,6,9,10,12,14,15,17,19,22,23,25};

	for (unsigned int i = 0; i < vec.size(); ++i) {
		for (unsigned int j = 0; j < winNum.size(); ++j) {
			if (vec.at(i) == winNum.at(j)) {
				count++;
			}
		}
	}
	//if (count > 10) { return true; }

	return count;
}

int main() {
	vector <int> bet1 {1,2,3,5,6,7,10,13,14,15,17,18,20,21,25}; vector <int> bet2 {1,3,4,6,8,9,10,11,12,13,16,19,21,23,24};
	vector <int> bet3 {1,3,4,5,6,7,10,11,12,13,14,16,19,20,24}; vector <int> bet4 {1,2,6,7,8,10,12,13,16,17,18,19,21,23,24};
	vector <int> bet5 {1,2,3,6,7,8,10,12,13,15,16,17,20,21,23}; vector <int> bet6 {3,5,6,7,8,10,12,13,15,16,18,20,22,23,25};
	vector <int> bet7 {1,4,5,8,11,12,13,14,15,16,17,19,22,23,24}; vector <int> bet8 {1,4,5,6,8,10,13,14,16,18,19,20,22,24,25};
	vector <int> bet9 {1,2,4,5,7,9,12,13,14,17,18,19,21,22,24}; vector <int> bet10 {2,3,4,8,9,10,12,13,14,15,16,18,20,23,25};
	vector <int> bet11 {2,3,4,7,8,9,10,12,14,17,18,19,20,21,24}; vector <int> bet12 {1,5,6,8,11,13,15,17,18,19,21,22,23,24,25};

	cout << "Bet 1: " << checkLotoFacilBet(bet1) << endl; cout << "Bet 2: " << checkLotoFacilBet(bet2) << endl;
	cout << "Bet 3: " << checkLotoFacilBet(bet3) << endl; cout << "Bet 4: " << checkLotoFacilBet(bet4) << endl;
	cout << "Bet 5: " << checkLotoFacilBet(bet5) << endl; cout << "Bet 6: " << checkLotoFacilBet(bet6) << endl;
	cout << "Bet 7: " << checkLotoFacilBet(bet7) << endl; cout << "Bet 8: " << checkLotoFacilBet(bet8) << endl;
	cout << "Bet 9: " << checkLotoFacilBet(bet9) << endl; cout << "Bet 10: " << checkLotoFacilBet(bet10) << endl;
	cout << "Bet 11: " << checkLotoFacilBet(bet11) << endl; cout << "Bet 12: " << checkLotoFacilBet(bet12) << endl;

	return 0;

}