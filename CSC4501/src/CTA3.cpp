/*
 * CTA3.cpp
 *
 *  Created on: Sep 29, 2024
 *      Author: bowen
 */

#include <iostream>

using namespace std;

int main() {
	int val1, val2, val3;

	//Prompt user to enter three integer values
	cout << "Enter the first integer value: ";
	cin >> val1;

	cout << "Enter the second integer value: ";
	cin >> val2;

	cout << "Enter the third integer value: ";
	cin >> val3;

	//Create integer pointers to dynamic memory for each variabe
	int* ptr1 = new int(val1);
	int* ptr2 = new int(val2);
	int* ptr3 = new int(val3);

	//Display the contents of the variables
	cout << "\nValues entered: " << endl;
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	cout << "val3: " << val3 << endl;

	//Display the contents of the pointers
	cout << "\nContents of pointers: " << endl;
	cout << "Pointer to val1: " << *ptr1 << endl;
	cout << "Pointer to val2: " << *ptr2 << endl;
	cout << "Pointer to val3: " << *ptr3 << endl;

	//Delete the dynamically allocated memory
	delete ptr1;
	delete ptr2;
	delete ptr3;

	//Set pointers to nullptr for safety
	ptr1 = nullptr;
	ptr2 = nullptr;
	ptr3 = nullptr;

	return 0;
}
