// Homework #5 FilledBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#ifndef FILLEDBOX_HPP
#define FILLEDBOX_HPP


#include "box.hpp"

class FilledBox : public Box {

public:

	using Box::Box;

	std::string type() const override;

	void print(std::ostream& os) const override;

};

#endif