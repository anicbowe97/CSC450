#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> //For std::reverse

void appendToFile(const std::string& filename);
void reverseFileContent(const std::string& inputFile, const std::string& outputFile);

int main() {
	std::string inputFilename = "CSC450_CT5_mod5.txt"; //Original file
	std::string reversedFileName = "CSC450-mod5-reverse.txt"; //Reversed file

	//Append user input to the original file
	appendToFile(inputFilename);
	const std::string &reversedFilename;

	//Reverse the content of the original file and store it in the new file
	reverseFileContent(inputFilename, reversedFilename);

	std::cout << "Process completed successfully!" << std::endl;
	return 0;
}

//Function to append user input to the provided file
void appendToFile(const std::string& filename) {
	std::ofstream outfile(filename, std::ios::app); //Open in append mode

	if(!outfile) {
		std::cerr <<"Error: Could not open " << filename << " for appending!" << std::endl;
		exit(1);
	}

	std::string userInput;
	std::cout << "Enter text to append to the file (type 'exit' to stop):" <<std::endl;
	while(true) {
		std::getline(std::cin, userInput);
		if (userInput == "exit") break; //Exit condition
		outfile << userInput << std::endl; //Append input to the file
	}

	outfile.close();
	std::cout << "Data successfully appended to " << filename << "!" << std::endl;
}

//Function to reverse the content of the inut file and store it in the output file
void reverseFileContent(const std::string& inputFile, const std::string& outputFile) {
	std::ifstream infile(inputFile); //Open the input file for reading
	if (!infile) {
		std::cerr << "Error: Could not open " << inputFile << " for reading!" <<std::endl;
		exit(1);
	}

	std::string content((stdistreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>()); //read the entire file content

	infile.close();

	std::reverse(content.begin(), content.end()); //Reverse the content

	std::ofstream outfile(outputFile); //Open the output file for writing
	if(!outfile) {
		std::cerr << "Error: Could not open " << outputFile << " for writing!" << std::endl;
		exit(1);
	}

	outfile << content; //Write reversed content to the new file
	outfile.close();

	std::cout << "Reversed content stored in " << outputFile << "!" << std::endl;
}
