// Homework #1 box.cpp
// Robert Lawton
// CS 202 with Hartman
// 9/26/2019

#include "box.hpp"


//Default Constructor
Box::Box():		
	_height(1),
	_width(1),		
	_filled(true)
{}

//Constructor for user dimension input
Box::Box(int width, int height):		
	_height(height),
	_width(width),
	_filled(true)
{}

//Constructor to determine whether filled or hollow and dimension input
Box::Box(int width, int height, bool foh):
	_height(height),
	_width(width),
	_filled(foh)
{}

//Member funciton named type() that returns string "Filled" or string "Hollow
std::string Box::type() {
	if (_filled){
		return "Filled";
	}
	return "Hollow";
}
