/*
  File: rectangles.cpp
  Created by: Matt Gambill
  Creation Date: 11/26/2015
  Synopsis: 
  Creates a list of axis aligned rectangles defined in a 2D space. User inputs a name for their rectangle by using keyword rec and  then enters the rectangle's bottom left point and it's length and height.
  Program then outputs the area, perimeter and midpoint, of the rectangles and area, perimeter and midpoint, of the rectangles scaled by two.
*/

#include <iostream>
#include <string>
#include <vector>
#include "Header.h"
using namespace std;


int main()
{
	// Define your local variables, e.g. a vector of class Rectangle
	double x(0.0), y(0.0), length(0), height(0);
	vector<Rectangle> recVector;
	string isValidPrompt = "Enter the name of the first rectangle: ";
	string isValidPrompt1 = "Enter the name of the next rectangle: ";
	string error1 = "Invalid input. Type 'rec' followed by the name or 'stop' if done.";
	string userInput;

	// Display welcome banner
	welcome();
	cout << endl;
	/* Prompt user for first rectangle or 'stop' */
	// WHILE user input is invalid
		// Display "Try again! "
	while (!isValidInput(isValidPrompt, error1, "Error, That name has already been used.", userInput, recVector)){
		cout << "Try again! ";
	}
	// IF user input is not 'stop'

	if (userInput.substr(0, 4) != "stop") {
		string recName = userInput.substr(4, userInput.size());
		addToVector(recName, x, y, length, height, recVector);
	}
	/* Prompt user for next rectangle or 'stop' */	 
	// while user input is not 'stop'
	while (userInput.substr(0, 4) != "stop") {
		cin.ignore(); //clears stream buffer. if not used program will skip the getline in isValidInput
		// display "thank you! "
		cout << "thank you! ";
		// while user input is invalid
		while (!isValidInput(isValidPrompt1, error1, "error, that name has already been used.", userInput, recVector)) {
			// display "try again! "
			cout << "try again! ";
		}
		
			// if user input is not 'stop'
			// extract rectangle name from user input
			// prompt for bottom left point
			// prompt for length and height
			// add rectangle to the rectangle list
		if (userInput.substr(0, 4) != "stop") {
			string recname = userInput.substr(4, userInput.size());
			addToVector(recname, x, y, length, height, recVector);
		}
			
	}
	// IF the rectangle list is not empty
		// Display all rectangles in the rectangle list
	if (recVector.size() > 0){
		printVector(recVector);
	}
	// ELSE 
		// Display that no rectangles are in the list
	else
	{
		cout << "There are no rectangles are in the list." << endl;
	}
	system("pause");
  return 0;
}	