// Brian Nava
// 11/25/11
// CIT224
// Assignment #3
//
// This program will create two sales objects from the sales namespace

#include "mysales.h"



int main()
{
	using namespace SALES;

	Sales interactive;  //interactive sales object
	setSales(interactive);
	showSales(interactive);

	double values[] = {33.4, 11.0, 21.0, 24.0};
	Sales nonInteractive;  //non-interactive sales object
	setSales(nonInteractive, values, 3);
	showSales(nonInteractive);

	return 0;
}