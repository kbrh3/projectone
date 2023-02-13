#pragma once

int findNum(int num,int array[] );
//takes in number you are seeking and looks through array for it
//returns index if the number is found, returns -1 if not

void changeNum(int index, int (&array)[100]);                                         //add try/catch block
//takes in index of number you want to change, and asks for the value you want to change it to
//prints out the new value and old value
 
void addTooEnd(int num, int(&array)[100]);                                             //add try/catch block
//takes in number you want to add to the end of the array
//places it after last filled spot, or replaces the last number with this new value  

void deleteNum(int index, int(&array)[100]);
//takes in index of num you want to delete
//replaces num with 0