// Homework #1 box.hpp
// Robert Lawton
// CS 202 with Hartman
// 9/26/2019

#ifndef BOX_HPP
#define BOX_HPP




class Box {

public:

	Box();		

	Box(int width, int height);		

	Box(int width, int height, bool foh);





private:

	int _height;
	int _width;
	bool _filled;

};

#endif 