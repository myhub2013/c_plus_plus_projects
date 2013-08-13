// Brian Nava
// 11/04/11
// CIT224
// Assignment #2
//
// This program will display a message based on the user input.


#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "Please enter one of the following choices: \n"
		<< "c) carnivore p) pianist\n"
		<< "t) tree g) game\n";

	do
	{
		cin >> choice;  //store user input
		switch (choice) 
		{
		case 'c':
			cout << "A carnivor is a meat eating animal.";
			break;
		case 'p':
			cout << "A pianist is one who plays piano.";
			break;
		case 't':
			cout << "A maple is a tree.";
			break;
		case 'g':
			cout << "Baseball is a game.";
			break;
		default:
			cout << "Please enter a c,p,t or g: ";
		}
	} while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g');

	cout << "\n";
	return 0;
}