#include <iostream>		//std::cout, std::cin
#include <algorithm>	//std::shuffle
#include <string>		//std::string
//#include <vector>
#include <random>       // std::default_random_engine (introduces random number generation facilities.)
#include <chrono>       // std::chrono::system_clock
//#include <stdlib.h>
//#include <time.h> 

using namespace std;

string randomStr (string alphanum) {//(unsigned int size)
	//Generate a random string with the same length as the message.
	string cypher = {alphanum};

	unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();

	//Rearranges the elements in the range [first,last) randomly, using g as uniform random number generator.
	//The function swaps the value of each element with that of some other randomly picked element. 
	//The function determines the element picked by calling g().
  	shuffle (cypher.begin(), cypher.end(), std::default_random_engine(seed));

	return cypher;
}

string encode (string message, string cypher, string alphanum) {
	//Using substitution, swap the characters in the original message for the random.
	string encodedMsg {};
	/*
	for (unsigned int i {}; i < message.length(); i++) {
		for (unsigned int j {}; j < alphanum.length(); j++) {
			if (message.at(i) == alphanum.at(j)) { encodedMsg += cypher.at(j);}
		}
	}
	*/
	for (char c : message) {
		size_t position = alphanum.find(c);
		if (position != string::npos) {
			encodedMsg += cypher.at(position);
		}
		else {
			encodedMsg += c;
		}
	}

	return encodedMsg;
}

string decode (string encodedMsg, string cypher, string alphanum) {
	string decodedMsg {};
/*
	for (unsigned int i {}; i < encodedMsg.length(); i++) {
		for (unsigned int j {}; j < alphanum.length(); j++) {
			if (encodedMsg.at(i) == cypher.at(j)) { decodedMsg += alphanum.at(j);}
		}
	}
*/
	for (char c : encodedMsg) {
		size_t position = cypher.find(c);
		if (position != string::npos) {
			decodedMsg += alphanum.at(position);
		}
		else {
			decodedMsg += c;
		}
	}

	return decodedMsg;
}

int main () {
	string message {};
	string alphanum {"0123456789ABCDEFGHIJKLMNOPQRS TUVWXYZabcdefghijklmnopqrstuvwxyz"};

	cout << "Enter the message to be encoded: ";
	getline(cin,message);

	string cypher {};
	cypher = randomStr(alphanum);//randomStr(message.length());
	cout << "\n" << "key: " << cypher << endl;

	string encodedMsg {};
	encodedMsg = encode(message, cypher, alphanum);
	cout << "\n" << "message encoded: " << encodedMsg << endl;

	string decodedMsg {};
	decodedMsg = decode(encodedMsg, cypher, alphanum);
	cout << "\n" << "message decoded: " << decodedMsg << endl;

	return 0;
}
//g++ -Wall -std=c+144 filename.cpp -o filename.exe