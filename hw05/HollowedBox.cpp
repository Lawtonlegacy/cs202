// Homework #5 HollowedBox.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#include "HollowedBox.hpp"

//Print type
std::string HollowedBox::type() const {
	return "Hollow";
}

//Print HollowedBox to ostream
void HollowedBox::print(std::ostream& os) const {

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