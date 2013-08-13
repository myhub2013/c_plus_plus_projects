// Brian Nava
// 11/25/11
// CIT224
// Assignment #3
//
// This program will provide definitions for the 
// SALES namespace functions 

#include "mysales.h"


namespace SALES
{
		// copies the lesser of 4 or n items from the array ar
		// to the sales member of s and computes and stores the
		// average, maximum, and minimum values of the entered items;
		// remaining elements of sales, if any, set to 0
	void setSales(Sales & s, const double ar[], int n)
	{
		double sum = 0;
		for (int i = 0; i < 4; i++)
		{
			if (i+1 > n) 
				s.sales[i] = 0;
			else s.sales[i] = ar[i];
			sum += s.sales[i];  //add sales to calculate average
		}
		s.average = sum/4;  //calculate average value
		
		s.min = s.sales[0];  
		s.max = s.sales[0];
		for (int i = 1; i < 4; i++)  //find min and max values
		{
			if (s.sales[i] < s.min)
				s.min = s.sales[i];
			if (s.sales[i] > s.max)
				s.max = s.sales[i];
		}
	}


	// gathers sales for 4 quarters interactively, stores them
	// in the sales member of s and computes and stores the
	// average, maximum, and minimum values
	void setSales(Sales & s)
	{
		double sum = 0;
		for (int i = 0; i < 4; i++)
		{
			cout << "Input quarter " << i+1 << " sales: ";  //prompt for input
			cin >> s.sales[i];  //store input
			sum += s.sales[i];  //add values to calculate average
		}
		s.average = sum/4;  //calculate average value

		s.min = s.sales[0];  
		s.max = s.sales[0];
		for (int i = 1; i < 4; i++)  //find min and max values
		{
			if (s.sales[i] < s.min)
				s.min = s.sales[i];
			if (s.sales[i] > s.max)
				s.max = s.sales[i];
		}
	}

	// display all information in structure s
	void showSales(const Sales & s)
	{
		cout << "\nSales: " << s.sales[0];
		for (int i = 1; i < 4; i++)
		{
			cout << ", " << s.sales[i];
		}
		cout << "\nAverage: " << s.average
			<< "\nMaximum: " << s.max
			<< "\nMinimum: " << s.min << endl << endl;
	}
}