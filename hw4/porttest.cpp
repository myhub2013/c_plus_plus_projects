// Brian Nava
// 12/03/11
// CIT224
// Assignment #4
//
// This program will create a base class (Port) and a derived class (VintagePort)
// to describe a collection of bottled port
#include "port.h"

int main()
{
	//create four Port objects, one vintage
	Port one;
	Port two("Mason","Rose",10);
	Port three("Redtail","Red",4);
	Port four(three);
	VintagePort five("Vines",5,"Stomps",1988);
	
	cout << "Object one" << endl;
	one.Show();
	one = three;  //object one uses overloaded "=" to set one=three
	cout << "\nObject one = object three: " << one << endl << endl;
	
	cout << "Object two" << endl;
	two.Show();
	two -= 5;  //object two uses overloaded "-=" to subtract from bottles
	cout << "\nObject two bottles -= 5. Bottle count: " << two.BottleCount() << endl << endl;
	
	cout << "Object three" << endl;
	three.Show();
	three += 6;  //object three uses overloaded "+=" to add to bottles
	cout << "\nObject three bottles += 6. Bottle count: " << three.BottleCount() << endl << endl;
	
	cout << "Object four: " << four << endl;
	cout << "Object five: " <<  five << endl;
	cout << endl;

	return 0;
}