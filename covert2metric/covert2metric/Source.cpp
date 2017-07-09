/*
File: convert2metric.cpp
Created by: Matt Gambill
Creation Date: 10/28/2015
Synopsis:
This program reads in a length yards, feet and inches,
and converts to meters and centimeters.
*/

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

// FUNCTION PROTOTYPE FOR read_us_length
void read_us_length(int &yards, int &feet, int &inches);

// FUNCTION PROTOTYPE FOR convert2inches
int convert2inches(int yards, int feet, int inches);
// FUNCTION PROTOTYPE FOR convert2metric
void convert2metric(int total_inches, int &meters, int &centimeters);
// FUNCTION PROTOTYPE FOR write_metric_length
void write_metric_length(int meters, int centimetersb);

int main()
{
	int yards, feet, inches;    // length in yards, feet and inches
	int total_inches;           // total length in inches
	int meters, centimeters;    // length in meters and centimeters

	read_us_length(yards, feet, inches);
	total_inches = convert2inches(yards, feet, inches);
	convert2metric(total_inches, meters, centimeters);
	write_metric_length(meters, centimeters);
	return 0;
}

// DEFINE FUNCTION read_us_length HERE:
void read_us_length(int &yards, int &feet, int &inches) {
	cout << "Enter number of yards: ";
	cin >> yards;
	if (yards < 0) {
		cerr << "Illegal negative value " << yards << " for yards.\n";
		exit(0); //exits if yards are negative 
	}
	cout << "Enter number of feet: ";
	cin >> feet;
	if (feet < 0) {
		cerr << "Illegal negative value " << feet << " for feet\n";
		exit(0); //exit code to end program if feet < 0
	}
	cout << "Enter number of inches: ";
	cin >> inches;
	if (inches < 0) {
		cerr << "Illegal negative value " << inches << " for inches\n";
		exit(0); //exit code to end program if inches < 0
	}
	return;
}

// DEFINE FUNCTION convert2inches HERE:
int convert2inches(int yards, int feet, int inches) {
	return 36 * yards + 12 * feet + inches;
}

// DEFINE FUNCTION convert2metric HERE
void convert2metric(int total_inches, int &meters, int &centimeters) {
	 centimeters = int(total_inches * 2.54) % 100;
	 meters = int(total_inches * 2.54) / 100;	
	return;
}
// DEFINE FUNCTION write_metric_length HERE:
void write_metric_length(int meters, int centimeters) {
	cout << "There are " << meters << " meters and " << centimeters << " centimeters" << endl;
	return;
}




