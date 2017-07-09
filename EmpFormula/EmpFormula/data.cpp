//user inputs an element and program displays element and molar mass


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "header.h"
using namespace std;

void data(const int &NUM_ELEM, vector<string>& newElementNames, vector<double>& newMolarMass) {
	/*vector<string> elementNames(NUM_ELEM);
	vector<double>  molarMass(NUM_ELEM);*/
     
	//open text file;
	ifstream inFile;
	inFile.open("molarMass.txt");
	//Check for Error
	if (inFile.fail())
	{
		cerr << "Error Opening File" << endl;
		exit(1);
	}

	//store data in array
	for (int i = 0; i < NUM_ELEM; i++) {
		inFile >> newMolarMass.at(i);
		
	}
	//Close molarMass.txt
	inFile.close();

	//open ElementSymbols.txt
	inFile.open("elementSymbols.txt");
	//Check for Error
	if (inFile.fail()){
		cerr << "Error Opening File" << endl;
		exit(1);
	}
	//store data in array
	for (int j = 0; j < NUM_ELEM; j++) {
		inFile >> newElementNames.at(j);
	}
	inFile.close();
}