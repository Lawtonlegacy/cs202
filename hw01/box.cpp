// Homework #1 box.cpp
// Robert Lawton
// CS 202 with Hartman
// 9/26/2019

#include "box.hpp"


//Default Constructor
Box::Box():		
	_height(1), _width(1), _filled(true){}

//Constructor for user dimension input
Box::Box(int width, int height):		
	_height(height), _width(width), _filled(true){}

//Constructor to determine whether filled or hollow and dimension input
Box::Box(int width, int height, bool filled):
	_height(height), _width(width), _filled(filled){}

//Member funciton named type() that returns string "Filled" or string "Hollow
std::string Box::type() const{
	if (_filled){
		return "Filled";
	}
	return "Hollow";
}

//getWidth() accessor function
int Box::getWidth() const{
	return _width;
}

//getHeight() accessor function
int Box::getHeight() const{
	return _height;
}

//setWidth() mutator function
void Box::setWidth(int width){
	_width = width;
}

//setHeight() mutator function
void Box::setHeight(int height){
	_height = height;
}

//Member function that draws the box to the ostream
void Box::print(std::ostream & output) const{

	for (int row = 0; row < _height; ++row){
		
		for (int column = 0; column < _width; column++){

			if (row == 0 || row == _height - 1) {
				output << "x";
			}else if(column == 0 || column == _width-1){
				output << "x";
			}else if(_filled){
				output << "x";
			}else{
				output << " ";
			}
		}
		output << "\n";
	}
}