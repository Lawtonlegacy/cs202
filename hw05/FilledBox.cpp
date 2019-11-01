// Homework #5 FilledBox.cpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#include "Filledbox.hpp"


//Print type
std::string FilledBox::type() const {
	return "Filled";
}

//Print FilledBox to ostream
void FilledBox::print(std::ostream& os) const {

	for (int row = 0; row < _height; ++row) {

		for (int col = 0; col < _width; ++col) {
			os << "x";
		}
		os << "\n";
	}
}