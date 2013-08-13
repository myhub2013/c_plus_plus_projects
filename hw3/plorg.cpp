// Brian Nava
// 11/12/11
// CIT224
// Assignment #3
//
// This program will create a simple class with member functions to 
// change a plorgs contentment index and report name and CI


#include "plorg.h"


Plorg::Plorg()  // default constructor
	{
		strcpy(name, "Plorga");  //set name to "Plorga"
		CI = 50;
	}

Plorg::Plorg(const char * n)  
	{
		strcpy(name, n); 
		CI = 50;
	}


Plorg::~Plorg()  //destructor
	{
	}

//set CI to new value
void Plorg::changIndex(int val)
	{
		CI = val;
	}

//print name and CI
void Plorg::report() const
	{
		cout << "\nName: " << name << "\nCI: " << CI << endl;
	}