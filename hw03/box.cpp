// Homework #3 box.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/11/2019

#include "box.hpp"

// Static int that keeps count of boxes made
int Box::_boxCount = 0;

//Default Constructor
Box::Box() :
	_height(1), _width(1), _filled(Box::FILLED) 
{
	++Box::_boxCount;
}

//Constructor for user dimension input
Box::Box(int width, int height) :
	_height(height), _width(width), _filled(Box::FILLED) 
{
	++Box::_boxCount;
}

//Constructor to determine whether filled or hollow and dimension input
Box::Box(int width, int height, enum boxType type) :
	_height(height), _width(width), _filled(type) 
{
	++Box::_boxCount;
}

//Member function to keep track of how many Box objects exist
int Box::howMany() {
	return Box::_boxCount;
}


//Member function named type() that returns string "Filled" or string "Hollow
std::string Box::type() const {
	switch (_filled) {
		case FILLED:
			return "Filled";
		case HOLLOW:
			return "Hollow";
		case CHECKERED:
			return "Checkered";
		default:
			return "Error.. box type not specified";
	}
}

//getWidth() accessor function
int Box::getWidth() const {
	return _width;
}

//getHeight() accessor function
int Box::getHeight() const {
	return _height;
}

//setWidth() mutator function
void Box::setWidth(const int& width) {
	_width = width;
}

//setHeight() mutator function
void Box::setHeight(const int& height) {
	_height = height;
}

//Member function that draws the box to the ostream
void Box::print(std::ostream& output) const {

	for (int row = 0; row < _height; ++row) {

		for (int col = 0; col < _width; col++) {

			if (row == 0 || row == _height - 1) {
				output << "x";
			}
			else if (col == 0 || col == _width - 1) {
				output << "x";
			}
			else if (_filled) {
				output << "x";
			}
			else {
				output << " ";
			}
		}
		output << "\n";
	}
}