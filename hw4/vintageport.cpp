// Brian Nava
// 12/03/11
// CIT224
// Assignment #4
//
// This program will create a base class (Port) and a derived class (VintagePort)
// to describe a collection of bottled port

#include "port.h"  //Port and VintagePort classes are created in "port.h"

//default constructor sets all fields to "none" or 0
VintagePort::VintagePort() : Port("none","none",0)
{
	nickname = new char [strlen("none")+1];
	strcpy(nickname,"none");
	year = 0;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br,"vintage",b)
{
	nickname = new char [strlen(nn)+1];
	strcpy(nickname,nn);
	year = y;
}

// copy constuctor
VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = new char [strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year = vp.year;
}

VintagePort::~VintagePort(void)  
{
	delete [] nickname;  //free memory created dynamically
}

//allows "=" to be used to set one objects 
//members equal to another objects members
VintagePort & VintagePort::operator =(const VintagePort & vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	nickname = new char [strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year = vp.year;
	return *this;
}

//display output to console
void VintagePort::Show() const
{
	cout << "\nNickname: " << nickname
		<< "\nYear: " << year;
	Port::Show();  //display base class members
}

//allows cout to be used to display VintagePort class
ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << vp.nickname << ", " << vp.year << ", "
		<< (const Port &) vp;
	return os;
}