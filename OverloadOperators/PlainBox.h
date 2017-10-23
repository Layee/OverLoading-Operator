//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2016 __Pearson Education__. All rights reserved.

/** Listing C1-3
@file PlainBox.h */

#ifndef PLAIN_BOX_
#define PLAIN_BOX_

#include <iostream>
using namespace std;

template<class ItemType> // Indicates this is a template definition

						 // Declaration for the class PlainBox
class PlainBox
{
private:
	// Data field
	ItemType item;

public:
	// Default constructor
	PlainBox();

	// Parameterized constructor
	PlainBox(const ItemType& theItem);

	// Mutator method that can change the value of the data field
	void setItem(const ItemType& theItem);

	// Accessor method to get the value of the data field
	ItemType getItem() const;

	// FRIEND FUNCTION
	friend ostream& operator<<(ostream& outs, const PlainBox<ItemType>& source) {
		outs << source.getItem() << endl;
		return outs;
	}

	bool operator==(const PlainBox<ItemType>& b); //member function


}; // end PlainBox

template <typename ItemType>	  
PlainBox<ItemType> operator+(const PlainBox<ItemType>& b1, const PlainBox<ItemType>& b2);//non-member function

#include "PlainBox.cpp" // Include the implementation file
#endif



