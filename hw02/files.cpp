// Homework #2 files.hpp
// Robert Lawton
// CS 202 with Hartman
// 9/26/2019

#include "files.hpp"




//Exercise A - "getidfromfile" function
int getIdFromFile(std::string filename, std::istream & input, std::ostream & output){

	//open file to read
	std::ifstream ifile(filename);

	// Code to execute if file is open
	if (ifile.is_open()){
		std::string username, temp;
		int userId, tempid;
		while (input >> username) {
			ifile.clear();
			ifile.seekg(0, std::ios::beg);
			bool found = false;
		}

	} 
	else {
		return -1;
	}


}


