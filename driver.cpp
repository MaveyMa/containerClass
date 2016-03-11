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

void addInput(Container& name);
//Ask user for input

int main()
{
	Container Pica;
	Container Evan;
	cout << "\n*****SET ONE*****\n" << endl;
	addInput(Pica);
	cout << "\n*****SET TWO*****\n" << endl;
	addInput(Evan);

	/*
	Pica.addElement(3);
	Pica.addElement(2);
	Pica.addElement(1);

	Evan.addElement(3);
	Evan.addElement(2);
	Evan.addElement(1);
	Evan.addElement(1);
	*/

	unsigned picaSize = Pica.getSize();
	unsigned evanSize = Evan.getSize();
	cout << "Pica size: " << picaSize << endl;
	cout << "Evan size: " << evanSize << endl;

	unsigned picaCount = Pica.getCount();
	unsigned evanCount = Evan.getCount();
	cout << "Pica Count: " << picaCount << endl;
	cout << "Evan Count: " << evanCount << endl;

	Pica.displaySet();
	cout << endl;
	Evan.displaySet();
	cout << endl;
	
	cout << "Sets are equivalent: \n";
	cout <<  Pica.isEquivalent(Evan, evanCount) << endl;
	return 0;
}//END MAIN

void addInput(Container& name)
{
	bool isRepeat = true;
	int n;
	char ans;
	do
	{
		cout << "Enter a value: ";
		cin >> n;
		name.addElement(n);
		cout << "Continue? Y or N: ";
		cin >> ans;
		ans = toupper(ans);
		if (ans != 'Y')
		{
			isRepeat = false;
		}
	}
	while(isRepeat);
}//END ADD INPUT
