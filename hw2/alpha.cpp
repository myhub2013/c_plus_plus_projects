// Brian Nava
// 11/10/11
// CIT224
// Assignment #2
//
// This program will read string input and count
// how many vowels, consonants and others


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

	string str;
	
	int vowels = 0;
	int consonants = 0;
	int others = 0;

	cout << "Enter words (q to quit):\n";
	

	
	while ( cin >> str)
	 {
		
			if (isalpha(str[0]))
			{
				switch (str[0])
				{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					vowels++;
					break;
				default:
					consonants++;
				}
			} else others++;
		    cout << str << endl;
			
		 
	  }
	

	cout << str << endl;
	cout << vowels << " words begining with vowels\n"
		<< consonants << " words begining with consonants\n"
		<< others << " others\n";

	return 0;
}