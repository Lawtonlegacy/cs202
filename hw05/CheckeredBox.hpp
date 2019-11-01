// Homework #5 CheckeredBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef CHECKEREDBOX_HPP
#define CHECKEREDBOX_HPP


#include "box.hpp"

class CheckeredBox : public Box {

public:

	using Box::Box;

	std::string type() const override;

	void print(std::ostream& os) const override;

};

#endif