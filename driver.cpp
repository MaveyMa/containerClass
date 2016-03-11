//Name: Mavey Ma
//Date: Tuesday March 8, 2016
/*CSS7 Sets Lab
Create a program that creates a container. [0, 20] Size each.
Ask user for input for 2 sets. Run checks on each function/method.
 */
#include "Container.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Container Pica;
	Container Evan;
	unsigned picaSize = Pica.getSize();
	unsigned evanSize = Evan.getSize();
	cout << "Pica size: " << picaSize << endl;
	cout << "Evan size: " << evanSize << endl;

	Pica.addElement(1);
	Pica.addElement(2);
	Pica.addElement(3);

	Evan.addElement(1);
	Evan.addElement(2);
	Evan.addElement(3);

	Pica.displaySet();
	cout << endl;
	Evan.displaySet();
	cout << endl;
	
	cout << "Sets are equivalent: \n";
	cout <<  Pica.isEquivalent(Evan, evanSize) << endl;
	return 0;
}//END MAIN

