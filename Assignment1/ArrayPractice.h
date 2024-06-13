#ifndef ARRAY_PRACTICE
# define ARRAY_PRACTICE

#include <utility>

using namespace std;

//PRE: Should have an array of integers, length, and value to locate
//POST: returns the index of an integer
int locationOfInteger(int arrayInts[], int length, int value);

//PRE: Should have an array of integers, index to modify, 
//     current integer amount, and value to modify as
//POST: returns the new value and old value back as a pair
pair<int, int> modifyArray(int arrayInts[], int index, int length, int value);

//PRE: Should have an array of integers, length, and value to add
//POST: Adds an integer to the end of the current integer amount
//      of the array
void addToArray(int arrayInts[], int& length, int value);

//PRE: Should have an array of integers, length, and index to replace
//POST: Replaces an index with zero
void replace(int arrayInts[], int length, int index);

#endif