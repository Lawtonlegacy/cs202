#ifndef CLASSES_H_
#define CLASSES_H_

#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;

class Player{

public:
    Player();   //Default Constructor
    Player(const Player & player1);     //Copy Constructor
    Player(string &initialInput);       //Extra Constructor
    ~Player(){
        cout << "Destructing \n";//Destructor
    }
    string getName();
    void setName(string userinput);
    
private:
    string name;
};

#endif