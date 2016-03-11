//Name: Mavey Ma
//Date: Tuesday March 8, 2016
//CSS7 Sets Lab
#include "Container.h"
#include <iostream>
using  namespace std;

Container::Container()
{
	size = 20;
	count = 0;
}//END DEFAULT CONSTRUCTOR
		
void Container::addElement(int x)
{
	if (count == 0)
	{
		array[count] = x;
		count++;
	}//END IF ADDING FIRST ELEMENT
	else
	{
		if (!isElement(x))
		{
			array[count] = x;
			count++;
		}
	}//END ELSE
	return;
}//END ADD ELEMENT
		
void Container::displaySet()
{
	for (int i = 0; i < count; i++)
	{
		cout << array[i] << endl;
	}
	return;
}//END DISPLAY SET
		
bool Container::isElement(int x)
{
	for (int i = 0; i < count; i++)
	{
		if (array[i] == x)
		{
			return true;
		}
	}
	return false;
}//IS X AN ELEMENT OF THE SET?

bool Container::isEquivalent(Container name, unsigned nameCount)
{
	unsigned matches1 = 0, matches2 = 0;

	//Loop thru first array to compare to second.
	for (int i = 0; i < count; i++) //{3, 2, 1}
	{
		for (int j = 0; j < nameCount; j++) //{3, 2, 1}
		{
			if (array[i] == name.array[j])
			{
				matches1++;
				//cout << array[i] << endl;
				//cout << "First" << endl;
				break;
			}
		}//END J LOOP
	}//END I LOOP

	//Loop thru second array to compare to first.
	for (int i = 0; i < nameCount; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (name.array[i] == array[j])
			{
				matches2++;
				//cout << name.array[i] << endl;
				//cout << "Second" << endl;
				break;
			}
		}//END J LOOP
	}//END I LOOP

	if ((matches1 == count && matches2 == nameCount))
	{
		return true;
	}
	return false;
}//ARE THESE TWO SETS EQUIVALENT?

/*
bool Container::isEquivalent(int ara1[], int ara2[ ], unsigned sz1, unsigned sz2)
{
	unsigned matches1 = 0, matches2 = 0;

	//Loop thru first array to compare to second.
	for (int i = 0; i < sz1; i++) //{5, 7, 9}
	{
		for (int j = 0; j < sz2; j++) //{7, 6, 5, 9}
		{
			if (ara1[i] == ara2[j])
			{
				matches1++;
				break;
			}
		}//END J LOOP
	}//END I LOOP

	//Loop thru second array to compare to first.
	for (int i = 0; i < sz2; i++)
	{
		for (int j = 0; j < sz1; j++)
		{
			if (ara2[i] == ara1[j])
			{
				matches2++;
				break;
			}
		}//END J LOOP
	}//END I LOOP
	
	if ((matches1 == sz1) && (matches2 == sz2))
	{
		return true;
	}
	return false;
}//ARE THESE TWO SETS EQUIVALENT?
*/
