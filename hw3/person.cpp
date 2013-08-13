// Brian Nava
// 11/18/11
// CIT224
// Assignment #3
//
// This program will create a person class with
// constuctors and functions to print a person objects 
// first and last name


#include "person.h"


Person::Person()  //default constuctor
{
	lname = "";  //set last name to empty string
	fname[0] = '\0';  
}

Person::Person(const string & ln, const char * fn)
{
	lname = ln;  
	strcpy(fname, fn);
}


Person::~Person()
{
	
}
//print fullname with firsname then last
void Person::Show() const
{
	cout << "Full name: " << fname << lname << endl;
}// firstname lastname format

//print fullname with lastname then comma then firstname
void Person::FormalShow() const
{
	cout << "Full name: " << lname << ", " << fname << endl;
}// lastname, firstname format
