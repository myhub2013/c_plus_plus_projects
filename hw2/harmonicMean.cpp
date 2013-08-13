// Brian Nava
// 11/04/11
// CIT224
// Assignment #2
//
// This program will determine the harmonic mean of two numbers


#include <iostream>
using namespace std;

//inline function to calculate harmonic mean
inline double mean(double x, double y){return 2.0*x*y/(x+y);}


int main()
{
	double num1, num2;

	cout << "Enter a pair of numbers\n";
	do
	{
		cout << "First number: ";
		cin >> num1; //store first num
		cout << "Second number: ";
		cin >> num2;  //store second num
		cout << "The harmonic mean of " << num1 << " and " << num2 << " is " << mean(num1, num2) << "\n";
	} while (num1 != 0 && num2 != 0);

	return 0;
}