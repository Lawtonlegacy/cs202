// Homework #5 CheckeredBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef CHECKEREDBOX_HPP
#define CHECKEREDBOX_HPP


#include "box.hpp"
#include <iostream>

class CheckeredBox : public Box {

public:

	CheckeredBox();
	CheckeredBox(int width, int height);

	std::string type() const;

	void print(std::ostream& os) const;

};

#endif