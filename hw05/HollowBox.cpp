// Homework #5 HollowBox.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#include "HollowBox.hpp"

//Default Constructor
HollowBox::HollowBox()
	:Box::Box(1, 1) {}

//Constructor with specified width and height
HollowBox::HollowBox(int width, int height)
	: Box::Box(width, height) {}

//Virtual Destructor
HollowBox::~HollowBox() {}

//Print type
std::string HollowBox::type() const {
	return "Hollow";
}

//Print HollowedBox to ostream
void HollowBox::print(std::ostream& os) const {

	for (int row = 0; row < _height; ++row) {

		for (int col = 0; col < _width; ++col) {
			if (row == 0 || row == _height - 1){
				os << "x";
			}else if(col == 0 || col == _width -1){
				os << "x";
			}else {
				os << " ";
			}
		}
		os << "\n";
	}
}