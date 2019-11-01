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

//Box Factory function
std::unique_ptr<Box> boxFactory(char c, int w, int h) {
	switch (c) {
		case 'f':
			return std::make_unique<FilledBox>(w,h);
		case 'h':
			return std::make_unique<HollowBox>(w,h);
		case 'c':
			return std::make_unique<CheckeredBox>(w,h);
		default:
			break;
	}
}