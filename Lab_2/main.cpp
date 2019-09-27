#include "Classes.h"
using std::cout;
using std::string;
using std::cin;
using std::vector;

void passByVal(Player val){
    cout << "Passed by Value " << val.getName() << " \n";
}

void passByRef(Player & ref, string & name){
    cout << "Passed by Reference player 1, and setting to same name as player 3 \n";
    ref.setName(name);
    cout << "Player 1 is now named - " << ref.getName() << "\n";
}

void passReftoConst(const Player & refconst){
    cout << "Passing by reference to const \n";
}

Player getObj() {
    Player temp;
    return temp;
}

int main() {
    cout << "Creating local variable object! \n";
    Player robert;
    cout << "Creating local variable copy of existing object! \n";
    const Player robert2(robert);
    string player3;
    cout << "Enter a name for player 3: ";
    cin >> player3;
    Player robert3(player3);
    passByVal(robert3);    
    passByRef(robert, player3);
    passReftoConst(robert2);
    
    cout << "\n\n\n Printing Vector of 5 Objects \n\n\n\n";
    vector<Player> vec;
    for (int i = 0; i <5; ++i){
        vec.push_back(getObj());
    }
    
    return 0;
}