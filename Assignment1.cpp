//Name: Drew Barcelona
//Work: Assignment 1
//Date: 5 JUNE 2024

#include <iostream>
#include <fstream>
#include "ArrayPractice.h"

using namespace std;

const int MAXIMUM = 101;

int main() {

	//create variables
	fstream inputFile;
	pair<int, int> values;
	int locator, indexLocated, newValue, length = 100, next = 0;
	int intArray[MAXIMUM];
	
	//opens and checks file
	inputFile.open("A1input.txt");
	if (!inputFile.is_open()) {
		cout << "A1input.txt will not open" << endl;
		cout << "Ending program" << endl;
		return 0;
	}

	//stores input file numbers for processing
	while (!inputFile.eof()) {
		inputFile >> next;
		intArray[next - 1] = next;
	}

	//Q1.1 function check
	cout << "Enter number to locate: " << endl;
	cin >> locator;
	indexLocated = locationOfInteger(intArray, length, locator);
	indexLocated != -1 ?
		
		//if number exists
		cout << "The number: " << locator << " is located in index " << indexLocated << endl :
		
		//if number doesn't exist
		cout << "The number " << locator << " does not exist in the array" << endl;
	

	//Q1.2 function check
	cout << "Enter index to modify: " << endl;
	cin >> locator;
	cout << "Enter number to modify index as: " << endl;
	cin >> newValue;
	values = modifyArray(intArray, locator, length,newValue);
	cout << "The original number " << values.first
		<< " was modified to the number " << values.second << endl;

	//Q1.3 function check
	cout << "Enter a number to add to the end of the array: " << endl;
	cin >> newValue;
	addToArray(intArray, length, newValue);


	//Q1.4 function check
	cout << "Enter an index of a number to remove from array: " << endl;
	cin >> newValue;
	replace(intArray, length, newValue);

	for (int i = 0; i < length; i++) {
		cout << intArray[i] << " ";
	}


	return 0;
}