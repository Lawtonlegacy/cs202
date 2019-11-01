// Homework #5 FilledBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef FILLEDBOX_HPP
#define FILLEDBOX_HPP


#include "box.hpp"
#include <iostream>

class FilledBox : public Box {

public:

	FilledBox();

	FilledBox(int width, int height);

	std::string type() const;

	void print(std::ostream& os) const;

};

#endif