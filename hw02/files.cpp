// Homework #2 files.hpp
// Robert Lawton
// CS 202 with Hartman
// 9/26/2019

#include "files.hpp"




//Exercise A - "getIdFromFile" function
int getIdFromFile(std::string filename, std::istream & input, std::ostream & output){

	//open file to read
	std::ifstream ifile(filename);

	//error check if cannot open file
	if (!ifile.is_open()){
		return -1;
	}

	//containter to store names from input stream
	std::vector <std::string> listOfNames;
	std::string nameline;

	//while loop to grab names from and store in vector
	while (std::getline(input, nameline)){
		listOfNames.push_back(nameline);
	}
	
	//loop to read usernames
	for (auto name : listOfNames){


	}

}