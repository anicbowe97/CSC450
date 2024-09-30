//============================================================================
// Name        : CSC4501.cpp
// Author      : Nicole C
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int maine() {
	//Variables to store person's details
	string firstName, lastName, streetAddress, city;
	int zipCode;

	//Input person's details
	cout << "Enter First Name: ";
	getline(cin, firstName);

	cout << "Enter Last Name: ";
	getline(cin, lastName);

	cout << "Enter Street Address: ";
	getline(cin, streetAddress);

	cout << "Enter City: ";
	getline(cin, city);

	cout << "Enter Zip Code: ";
	cin >> zipCode;

	//Display a person's information
	cout << "\n--- Person Information ---" << endl;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Address: " << streetAddress << ", " << city << endl;
	cout << "Zip Code: " <<zipCode << endl;

	return 0;
}
