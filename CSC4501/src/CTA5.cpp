/*
 * CTA5.cpp
 *
 *  Created on: Oct 21, 2024
 *      Author: bowen
 */


#include <iostream>
#include <fstream>
#include <string>

int mainr() {
	std::ofstream outfile;
	std::string filename = "CSC450_CT5_mod5.txt"; //Path to your file
	std::string userInput;

	//Open the file in append mode
	outfile.open(filename, std ::ios::app);

	//check if the file opened successfully
	if (!outfile) {
		std::cerr << "Error: Could not open the file!" << std::endl;
		return 1;
	}

	//Get input from the user
	std::cout << "Enter text to append to the file (type 'exit' to stop):" << std::endl;
	while(true) {
		std::getline(std::cin, userInput);
		if (userInput == "exit") break; //Exit condition
		outfile << userInput << std::endl; //Append input to the file
	}

	//Close the file
	outfile.close();
	std::cout << "Data appended successfully!" << std::endl;

	return 0;
}
