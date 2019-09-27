// CS 202 Lab 1
// Robert Lawton
// 8/29/2019

#include <iostream>
#include <vector>
using std::endl;
using std::cin;
using std::cout;
using std::vector; 


void add_3(int & input){
    
    input = input +3;;
}

int main() {
    
    int userint;
    
    do{
        cout << "Please enter a number between 1-4 (5 to exit): ";
        cin >> userint;
        cout << endl;
        switch (userint){
            case 1:
                cout << "one" << endl;
                break;
            case 2:
                cout << "two" << endl;
                break;
            case 3:
                cout << "three" << endl;
                break;
            case 4:
                cout << "four" << endl;
                break;
            case 5:
                break;
            default:
                cout << "That is not a valid response" << endl;
                break;
        }
    } while (userint != 5);

    
    cout << "Please enter a number and I will add 3 to it and place it in the Vector: ";
    
    vector<int> my_vecplus3;
    
    int num = 1;
    
    while(cin){
        cin >> num;
        if(num == 0){
            break;
        }
        else{
            add_3(num);
            my_vecplus3.push_back(num);
            cout << endl << "Choose another number to add to the vector + 3 (0 to end): ";
        }
    }
    
    cout << "Printing out vector!" << endl;
    
    for(int i : my_vecplus3){
        cout << i << endl;
    }

    cout << endl << "Regular for loop for printing numbers 1-10" << endl;
    
    for(int i = 1; i <= 10; i++){
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}