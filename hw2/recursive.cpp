// Brian Nava
// 11/04/11
// CIT224
// Assignment #2
//
// This program will use a recursive function to calculate factorials


#include <iostream>
using namespace std;

unsigned long factorial(int);  //prototype

int main()
{
	int num=1;
	while (num>0)
	{
		cout << "Enter a positive integer to calculate factorial (q to quit): ";
		if (! (cin >> num)) break; //break if non integer input
		cout << num << "! = " << factorial(num) << endl;
	}
	return 0;
}


// recursive function calls itself until base case reached
unsigned long factorial(int num)
{
	return (num==1) ? 1 : num*factorial(num-1);  
}