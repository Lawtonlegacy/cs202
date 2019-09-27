#include "Classes.h"


using std::cout;
using std::string;


Player::Player()
    :name("Player Unknown")
{
    cout << "This is the Default Constructor. \n";
}

Player::Player(string &initialInput)
    :name(initialInput)
{
    cout << "This extra constructor takes the name you just enterd and assigns it to a new object \n";
}

Player::Player(const Player & player1)
    :name(player1.name)
{
    cout << "Copy Constructor for Player. \n";
}



string Player::getName(){
    return name;
}

void Player::setName(string userinput){
    name = userinput;
}