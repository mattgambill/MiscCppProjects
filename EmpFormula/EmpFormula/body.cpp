#include "header.h"
#pragma once
void ReadData::data(const int numElements, vector<double>& fwtArray)
{
	const int NUM_ELEM = 93;
	
	vector<string> elementNames(NUM_ELEM);
	vector<double> molarMass(NUM_ELEM);
	
	//open text file;
	ifstream inFile;
	inFile.open("molarMass.txt",ios::in);
	//Check for Error
	if (inFile.fail()){
		cerr << "Error Opening File 1" << endl;
		exit(1);
	}

	//store data in array
	for ( i = 0; i < NUM_ELEM; i++) {
		inFile >> molarMass.at(i);

	}
	//Close molarMass.txt
	inFile.close();
	inFile.clear();
	//open ElementSymbols.txt
	inFile.open("elementSymbols.txt");
	//Check for Error
	if (inFile.fail()) {
		cerr << "Error Opening File 2"  << endl;
		
		exit(1);
	}
	//store data in array
	for (int j = 0; j < NUM_ELEM; j++) {
		inFile >> elementNames.at(j);
	}
	inFile.close();
	//find element and do calculations
	for (int n = 0; n < numElements; n++) {
		foundElement = false;
		while (!foundElement) {
			cout << "Enter Element Symbol: ";
			cin >> userElement;
			for (k = 0; k < NUM_ELEM; k++) {
				if (elementNames.at(k) == userElement) {
					foundElement = true;
					cout << "The element is: " << userElement << " The molar mass is: " << molarMass.at(k) << endl;
					fwtArray.at(n) = molarMass.at(k); //stores fwts to "export"
					break;
				}
			}
			if (!foundElement) {
				cout << "Element not found; try again." << endl;
			}
		}
	}
	
	return;
}
