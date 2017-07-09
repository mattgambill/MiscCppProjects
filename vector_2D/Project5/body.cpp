#include <iostream>
#include <iomanip>
#include <cmath>
#include<string> 
#include"Header.h"
using namespace std;

const double EPSILON(1e-12);
// DEFINE FUNCTION read_vector HERE.
void read_vector(const string &a, double &u1, double &v1) {
	cout << a;
	cin >> u1 >> v1;
}

// DEFINE FUNCTION vector_length HERE.
double vector_length(double x, double y) {
	double length(0.0);
	length = sqrt(pow(x, 2) + pow(y, 2));
	return length;
}

// DEFINE FUNCTION write_vector HERE.
void write_vector(const string &b, double x, double y) {
	cout << b << "(" << x << ", " << y << ")" << endl;
	cout << "The length of the vector is: " << vector_length(x, y) << endl;;
	return;
}
// DEFINE FUNCTION vector_add HERE.
void vector_add(double x1, double y1, double x2, double y2, double &x3, double &y3) {
	x3 = x1 + x2;
	y3 = y1 + y2;
	return;
}
// DEFINE FUNCTION vector_subtract HERE.
void vector_subtract(double x1, double y1, double x2, double y2, double &x3, double &y3) {
	x3 = x1 - x2;
	y3 = y1 - y2;
	return;
}
// DEFINE FUNCTION scalar_mult HERE.
void scalar_mult(double x1, double y1, double scalar, double &x2, double &y2) {
	x2 = scalar * x1;
	y2 = scalar * y1;
	return;
}
// DEFINE FUNCTION normalize HERE.
void normalize(double &x, double &y) {
	if (abs(vector_length(x, y)) <= EPSILON) {
		x = 0;
		y = 0;
	}
	else {
		x = x / vector_length(x, y);
		y = y / vector_length(x, y);
	}
	return;
}
// DEFINE FUNCTION perpendicular HERE.
void perpendicular(double x1, double y1, double x2, double y2) {
	normalize(x1, y1);      // unit vector 1
	normalize(x2, y2);     //unit vector 2
	double px1 = -y1;     //first point for perpendicular vector p1
	double py1 = x1;     //second point for perpindicular vector p1
	double px2 = -px1;  //first point for perp. vector p2
	double py2 = -py1; // second point for perp. vector p2
	if ((abs(px1 - x2) <= EPSILON) && (abs(py1 - y2) <= EPSILON)) { //checks if second vector in the funciton argument is equal to vector p1
		cout << "Vectors are PERPENDICULAR.";
	}
	else if ((abs(px2 - x2) <= EPSILON) && (abs(py2 - y2) <= EPSILON)) { //checks if second vector in the funciton argument is equal to vector p2
		cout << "Vectors are PERPENDICULAR.";
	}
	else {
		cout << "Vectors are NOT PERPINDICULAR.";
	}
	cout << endl;
}