/*
 * CTA2.cpp
 *
 *  Created on: Sep 29, 2024
 *      Author: bowen
 */

#include <iostream>
#include <string>

using namespace std;

int mains() {
	string str1, str2, concatenatedStr;

	//Loop to take input three times
	for (int i= 1; i <= 3; ++i) {
		cout << "Enter string 1 (Attempt " << i << "): ";
		getline(cin, str1);

		cout << "Enter string 2 (Attempt " << i << "): ";
		getline(cin, str2);

		//Concatenate the strings
		concatenatedStr = str1 + str2;

		//Print the concatenated result
		cout << "Concatenated String: " << concatenatedStr << endl << endl;
	}

	return 0;
}


