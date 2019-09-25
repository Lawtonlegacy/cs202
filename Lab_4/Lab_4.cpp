//Lab 4 CS 202
// 9/17/2019
// Prof. Hartman
// Code by Robert Lawton

#include <iostream>
#include <fstream>
#include <string>


int main()
{	
	std::string fileOutput;

	std::ifstream ifile;
	ifile.open("readwrite.txt");
	ifile >> fileOutput;
	std::cout << fileOutput;
	return 0;
}