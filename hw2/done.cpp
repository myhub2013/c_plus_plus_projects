// Brian Nava
// 11/04/11
// CIT224
// Assignment #2
//
// This program will read input until "done" is entered.


#include <iostream>
#include <cstring>
using namespace std;
const int length(20);

int main() {

	char word[length]; 

	cout << "Enter words (to stop type the word done):\n";
	cin >> word;

	int count=0;
	while (strcmp(word, "done"))  //loop continues until the strcmp function returns false
	{
		count++;
		cin >> word;
	}

	cout << "You entered a total of " << count << " words.\n";
	return 0;
}