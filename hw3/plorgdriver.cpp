#include "plorg.h"

int main()
{

	Plorg one;  //first Plorg object
	one.report();
	one.changIndex(60);
	one.report();

	Plorg two("Ralph");  //second Plorg object
	two.changIndex(45);
	two.report();

	return 0;
}