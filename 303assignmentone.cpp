// 303assignmentone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "functions.h"
using namespace std;

int main() {
    // delare stream variables & open file
    ifstream inFile;
    ofstream outFile;
    inFile.open("input.txt");
    outFile.open("output.txt");
    int array[100] = {};

    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "Error in input or output file" << endl;
        return 1;

    }
    //ensure file is open


    //reads in up to 100 integers (10 lines with 10 integers per line, as stated on homework sheet)
    for (int i = 0; i < 100; i++) {
        int k;
        inFile >> k;

        array[i] = k;
       // cout << array[i] << " ";
    }
    //read in data from file to array

    bool menu = true;
    //menu for users to choose what to do
    while (menu) {
        char choice;
        cout << "Enter 'C' to check if an integer is present, and if so get the index" << endl;
        cout << "Press 'I' to enter the index of an integer you want to change" << endl;
        cout << "Press 'A' to enter a new integer to the end of the array" << endl;
        cout << "Press 'R' to enter the index of an integer you want to delete " << endl;
        cout << "Press 'Q' to exit the program" << endl;
        cin >> choice;
        choice = toupper(choice);
        if (choice == 'C') {
            cout << "What number are you looking for? " << endl;
            int num;
            cin >> num;
            int location = findNum(num, array);
            if (location >= 0) { cout << "The index of your number is " << location << endl; }
            else { cout << "your number was not in the array" << endl; }
            cout << endl;
        }
        else if (choice == 'I') {
            int index = -1;
            while (index < 0 || index >= 100) {
                cout << "What is the index of the number you want to change? " << endl;
                cout << "Select an index from 0 - 99 " << endl;
                cin >> index;  
            }
            changeNum(index,array);

        }
        else if(choice=='A'){
        cout<< "What integer would you like to add to end of the array?"<<endl;
        int x;
        cin >> x;
        addTooEnd(x, array);
        cout << x << " has been added to the end of the array" << endl;


             }
        else if(choice== 'R'){
            int index = -1;
            while (index < 0 || index >= 100) {
                cout << "What is the index of the number you want to delete? " << endl;
                cout << "Select an index from 0 - 99" << endl;
                cin >> index;
            }
            deleteNum(index, array);
            cout << "The number at index " << index << " has been deleted" << endl;

        }      //not modifying array
        else if (choice == 'Q') { cout << "Program ending" << endl; menu = false; }
        else { cout << "Invalid choice, try again please " << endl; }
        //checks to make sure choice is valid
        
    

    }


    
}



