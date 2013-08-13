// Brian Nava
// 10/24/11
// CIT 224
// Assignment #2
//
// This program will report total sales for the year using arrays and a loop.


#include <iostream>
#include <string>
using namespace std;

const int NUMBER_OF_MONTHS = 12;

int main() {

	//Store months as string array objects.
	string months[NUMBER_OF_MONTHS] = {"January", "February", "March", "April", "May", "June", 
						"July", "August", "September", "October", "November", "December"};

	int sales[NUMBER_OF_MONTHS];  //Create array to store monthly sales.
	int total = 0;  //Variable to store total sales.

	for (int i = 0; i < NUMBER_OF_MONTHS; i++) {
		cout << "Enter sales for " << months[i] << ": ";
		cin >> sales[i];  //Store the months sales input.
		total += sales[i];  //Add the months sales to total.
	}

	cout << "The total sales of \"C++ for fools\" for the year was: " << total << endl;

	return 0;
}