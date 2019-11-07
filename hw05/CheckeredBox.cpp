// Homework #5 HollowedBox.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#include "CheckeredBox.hpp"

//Default Constructor
CheckeredBox::CheckeredBox()
	: Box::Box(1, 1) {}

//Constructor with specified width and height
CheckeredBox::CheckeredBox(int width, int height)
	: Box::Box(width, height) {}

//Print type
std::string CheckeredBox::type() const {
	return "Checkered";
}

//Print CheckeredBox to ostream
void CheckeredBox::print(std::ostream& os) const {

	for (int row = 0; row < _height; ++row) {

		for (int col = 0; col < _width; ++col) {
			if (col % 2 != 0 && row % 2 != 0) {		//odd numbered rows and columns
				os << "x";
			}else if (col % 2 == 0 && row % 2 == 0) {	// even numbered rows and columns
				os << "x";
			}else {						// space placed if neither statement works
				os << " ";
			}
		}
		os << "\n";
	}
}