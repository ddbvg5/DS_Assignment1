#include "ArrayPractice.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

const int MAXIMUM = 101;

int locationOfInteger(int arrayInts[], int length, int value) {
	for (int i = 0; i < length; i++) {
		if (arrayInts[i] == value) {
			return i;
		}
	}

	return -1;
}

pair<int,int> modifyArray(int arrayInts[], int index, int length, int value) {
	int oldValue = 0;
	pair<int, int> valuesPair;

	try {
		if (index > length || index < 0) {
			throw range_error(to_string(index));
		}
			oldValue = arrayInts[index];
			arrayInts[index] = value;

			valuesPair.first = oldValue;
			valuesPair.second = value;

			return valuesPair;
	}
	catch (const range_error& e) {
		cout << "Index: " << e.what() << " is out of bounds" << endl;
		abort();
	}
}

void addToArray(int arrayInts[], int& length, int value) {
	try {
		//if list is full
		if (length >= MAXIMUM) {
			throw range_error(to_string(length));
		}
		arrayInts[length] = value;
		length++;
	}
	catch (const range_error& e) {
		cout << "Array is full at length " << e.what()
			 <<  " and addition is out of bounds" << endl;
		abort();
	}
}

void replace(int arrayInts[], int length, int index){
	if (index < length && index >= 0) {
		arrayInts[index] = 0;
	}
	else {
		cout << "Invalid index!" << endl;
	}
}