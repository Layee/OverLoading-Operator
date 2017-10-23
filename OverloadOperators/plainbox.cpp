//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2016 __Pearson Education__. All rights reserved.

/** Listing C1-4
@file PlainBox.cpp */

#include "PlainBox.h"


template<class ItemType>
PlainBox<ItemType>::PlainBox()
{
} // end default constructor

template<class ItemType>
PlainBox<ItemType>::PlainBox(const ItemType& theItem) : item(theItem)
{
} // end constructor

template<class ItemType>
void PlainBox<ItemType>::setItem(const ItemType& theItem)
{
	item = theItem;
} // end setItem

template<class ItemType>
ItemType PlainBox<ItemType>::getItem() const
{
	return item;
} // end getItem

	 template<class ItemType>
PlainBox<ItemType> operator+(const PlainBox<ItemType>& b1, const PlainBox<ItemType>& b2) {
	ItemType sum_b3 = b1.getItem() + b2.getItem();
	PlainBox<ItemType> b3(sum_b3);
	return b3;
	
	

}//non-member function


template <class ItemType>
bool PlainBox<ItemType>:: operator==(const PlainBox<ItemType>& b) {  
	  
	return (item == b.getItem());

} //member function
