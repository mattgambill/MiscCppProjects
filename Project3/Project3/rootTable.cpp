/*
File: rootTable.cpp
Created by: Matt Gambill
Created on: 10/14/2015
Instructor: Dr. Mirzaei

Synopsis:
reads in the number of roots, a value increment,
and a precision and outputs a table of roots x^(1/2), x^(1/3),…
for the given number of roots and values of x equal to i times the increment up to and including 100.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#include "header.h"
using namespace std;

void rootTable(){
	int i, j, k, n, m;  // i and j are indicies, k is incrementor, n is number of roots, m is the precision
	double a; //a acts as an index and the denominator for x^(1/a)
	cout << "Enter number of roots: ";
	cin >> n;
	cout << "Enter value increment (integer): ";
	cin >> k;
	cout << "Enter precision: ";
	cin >> m;
	cout.setf(ios::fixed);
	cout.precision(m);
	//header row
	cout << "Value";
	for (i = 1;i <= n; i++) {
		if (i < 9) {
			cout << setw(m + 3) << "x^1/" << i + 1;
		}
		else {
			cout << setw(m + 2) << "x^1/" << i + 1;
		}

	}
	cout << endl;
	//value and its roots- outputs a table
	for (j = k; j <= 100;j += k) {  //first for loop controls rows and row spacing
		cout << setw(5) << j;

		for (a = 2.0; a <= n + 1; a += 1.0) {  //inner for loop control columns and what root is taken
			cout << setw(m + 4) << pow(j, 1 / a);

		}
		cout << endl;
	}

}
