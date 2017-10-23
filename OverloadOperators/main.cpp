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
	cout << "numberBox.getItem() = " << numberBox.getItem() <<endl;
	cout << "nameBox() = " << nameBox.getItem() <<endl;

	PlainBox<double> newBox = numberBox + nameBox;
	cout << newBox.getItem() << endl;
	system("pause");

	
	return 0;
} // end main

  /*
  numberBox.getItem() = 6.5
  nameBox() = Rumpelstiltskin
  */
