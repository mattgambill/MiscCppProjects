/*
File: vector2D.cpp
Created by: Matt Gambill
Creation Date: 10/26/2015
Synopsis: 
Reads in a pair of 2d vectors such that the tails of the vectors are at the orgin and the heads of the vectors are at points (u1, v1) and (u2,v2), respectively.  
Reads in a scalar muliplier.
Program adds, and subtracts the two vectors, then performs a scalar multiplication.
Finally the program determines if the two vectors are perpindicular.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include<string> 
#include"Header.h"

using namespace std;

int main()
{
	double u1, v1;	// coordinates of first vector
	double u2, v2;	// coordinates of second vector
	double u3, v3;
	double scalar;

	read_vector("Enter first vector (2 floats): ", u1, v1);
	read_vector("Enter second vector (2 floats): ", u2, v2);

	cout << "Enter scalar multiplier: ";
	cin >> scalar;
	cout << endl;

	write_vector("First vector: ", u1, v1);
	write_vector("Second vector: ", u2, v2);

	cout << endl;

	vector_add(u1, v1, u2, v2, u3, v3);
	write_vector("Vector add: ", u3, v3);

	vector_subtract(u1, v1, u2, v2, u3, v3);
	write_vector("Vector subtract: ", u3, v3);

	scalar_mult(u1, v1, scalar, u3, v3);
	write_vector("Scalar multiplier: ", u3, v3);

	cout << endl;

	write_vector("First vector: ", u1, v1);
	write_vector("Second vector: ", u2, v2);
	perpendicular(u1, v1, u2, v2);

	//exit 
	char us('?');
	while (us != 'q')
	{
		cout << "enter q to quit: ";
		cin >> us;

	}
	return(0);
}

