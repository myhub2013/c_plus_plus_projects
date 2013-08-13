// Brian Nava
// CIT224
// Assignment #2
//
// This program will use nested loops to display rows of characters.


#include <iostream>
using namespace std;

int main()
{
	int rows = 0;

	cout << "Enter number of rows: ";
	cin >> rows;  //input number of rows

	for (int i = 1; i<=rows; i++)  //outer loop controls number of rows to display
	{
		for (int j = 1; j<=rows-i; j++)  //loop to control number of periods
		{
			cout << ".";
		}

		for (int k = 1; k<=i; k++)  //loop to control number of asterisks
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}