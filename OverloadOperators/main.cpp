//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2016 __Pearson Education__. All rights reserved.

#include <iostream>
#include <string>
#include "PlainBox.h"
using namespace std;

int main()
{

	PlainBox<double> numberBox; // A box to hold a double
	PlainBox<double> nameBox;   // A box to hold a string object
	double health = 6.5;
	double secretName = 6.5;
	numberBox.setItem(health);
	nameBox.setItem(secretName);

	PlainBox<double> addBox = numberBox + nameBox;
	cout << addBox.getItem() << endl;

	PlainBox<double> compareBox = numberBox == nameBox;
	cout << compareBox.getItem() << endl;

	cout << numberBox;
	system("pause");

	
	return 0;
} // end main

  /*
  Outputs 

 13
1
6.5
Press any key to continue . . .
  */
