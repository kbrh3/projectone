#include "functions.h"
#include <iostream>
using namespace std;

int findNum(int num, int array[] ) {
	for (int i = 0; i < 100; i++) {
		if (array[i] == num) {
			return i;
		}

	}
	return -1;

}
//takes in number you are seeking and looks through array for it
//returns index if the number is found, returns -1 if not

void changeNum(int index, int(&array)[100]){
	try {
		cout << "what value are replacing " << array[index] << " With? " << endl;
		int value;
		int temp = array[index];
		cin >> value;
		array[index] = value;
		cout << "Your old number was " << temp << ", it has been replaced with " << value << " at index " << index << endl;
	}
	catch (...) { cout << "This function did not work, try again with a different index and/or number" << endl; }

}                                         //add try/catch block
//takes in index of number you want to change, and asks for the value you want to change it to
//prints out the new value and old value

void addTooEnd(int num, int(&array)[100]){
	try {
		for (int i = 0; i < 100; i++) {
			if (array[i] == 0) { array[i] = num; }
			else if (i == 99) { array[99] == num; }
		}
	}
	catch(...) { cout << "This function did not work, try again with a different index and/or number" << endl; }

}                                          //add try/catch block
//takes in number you want to add to the end of the array
//places it after last filled spot, or replaces the last number with this new value  

void deleteNum(int index, int(&array)[100]){
	array[index] == 0;
}
//takes in index of num you want to delete
//replaces num with 0