// Homework #5 box.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#include "box.hpp"

// Static int that keeps count of boxes made
int Box::_boxCount = 0;

//Default Constructor
Box::Box() :
	_height(1), _width(1)
{
	++Box::_boxCount;
}

//Constructor for user dimension input
Box::Box(int width, int height) :
	_height(height), _width(width)
{
	++Box::_boxCount;
}

//Deconstructor for keeping track of Box amount
Box::~Box()
{
	--Box::_boxCount;
}

//Member function to keep track of how many Box objects exist
int Box::howMany() {
	return Box::_boxCount;
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

//Overloaded stream insertion operator
std::ostream& operator<<(std::ostream& output, const Box& box) {
	box.print(output);
	return output;
}

//Member function that draws the box to the ostream
//void Box::print(std::ostream& output) const {
//
//	for (int row = 0; row < _height; ++row) {
//
//		for (int col = 0; col < _width; col++) {
//
//			Checkered Box
//			if (_type == CHECKERED) {
//
//				if (col % 2 != 0 && row % 2 != 0) {		//odd numbered rows and columns
//					output << "x";
//				}
//				else if (col % 2 == 0 && row % 2 == 0) {	// even numbered rows and columns
//					output << "x";
//				}
//				else {					// space placed if neither statement works
//					output << " ";
//				}
//
//			}
//			Filled Box
//			else if (_type == FILLED) {
//				output << "x";
//			}
//			Hollowed Box 
//			else if (_type == HOLLOW) {
//				if ((row == 0 || row == _height - 1)
//					|| (col == 0 || col == _width - 1)) {
//					output << "x";
//				}
//				else {
//					output << " ";
//				}
//			}
//		}
//		output << "\n";
//	}
//}