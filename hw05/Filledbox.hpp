// Homework #5 FilledBox.hpp
// Robert Lawton
// CS 202 with Hartman
// 10/31/2019

#include "box.hpp"

class FilledBox : public Box {

public:

	using Box::Box;

	void print(std::ostream& os);


};