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
		int userId;
		while (input >> username) {
			ifile.clear();
			ifile.seekg(0, std::ios::beg);
			bool found = false;
			while (ifile >> temp >> userId) {
				if (temp == username) {
					found = true;
					output << userId, "\n";
					break;
				}
			} // error if not found
			if (!found) {
				output << "error\n";
			}
		}
		return 0; 
	} else {
		return -1;
	}
}

//Exercise B - "numberChase" function



