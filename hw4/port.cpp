// Brian Nava
// CIT224
// Assignment #4
//
// This program will create a base class (Port) and a derived class (VintagePort)
// to describe a collection of bottled port

#include "port.h"

//default constructor uses default values
//if no values passed in
Port::Port(const char * br, const char * st, int b)
{
	brand = new char[strlen(br)+1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & p)  //copy constructor
{
	brand = new char [strlen(p.brand)+1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port::~Port(void)
{
	delete [] brand;  //free memory created dynamically
}

//overloads "=" to be used to set one objects 
//members equal to another objects members
Port & Port::operator=(const Port & p)
{
	if (this == &p)
		return *this;
	brand = new char [strlen(p.brand)+1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}
//overloads "+=" to be used with Port class to
//subtract a value from current bottle value
Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}
//overloads "-=" to be used with Port class to
//subtract a value from current bottle value
Port & Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}
//display output to console
void Port::Show() const
{
	cout << "Brand: " << brand
		<< "\nKind: " << style
		<< "\nBottles: " << bottles;
}
//allows cout to be used to display Port class
ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

/*

b)  A method may be made virtual if it is intended to be redefined
by a derived class in which new members are added.  If a derived class can 
use a base class method as it is, without adding new members or data, then
the base class method need not be redefined.

c)  The operator=() is not virtual because the assigment operator is not
inherited by derived class.  The operator<<() is a friend function and
not a class member.  Only class memebers can be virtual.

*/