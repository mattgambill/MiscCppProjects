#pragma once
#ifndef HEADER_H
#define HEADER_H
using namespace std;
// function prototypes

// ENTER FUNCTION PROTOTYPE FOR read_vector HERE.
void read_vector(const string &a, double &u1, double &v1);
// ENTER FUNCTION PROTOTYPE FOR vector_length HERE.
double vector_length(double x, double y);
// ENTER FUNCTION PROTOTYPE FOR write_vector HERE.
void write_vector(const string &b, double x, double y);
// ENTER FUNCTION PROTOTYPE FOR vector_add HERE.
void vector_add(double x1, double y1, double x2, double y2, double &x3, double &y3);
// ENTER FUNCTION PROTOTYPE FOR vector_subtract HERE.
void vector_subtract(double x1, double y1, double x2, double y2, double &x3, double &y3);
// ENTER FUNCTION PROTOTYPE FOR scalar_mult HERE.
void scalar_mult(double x1, double y1, double scalar, double &x3, double &y3);
// ENTER FUNCTION PROTOTYPE FOR normalize HERE.
void normalize(double &x, double &y);
// ENTER FUNCTION PROTOTYPE FOR perpendicular HERE.
void perpendicular(double x1, double y1, double x2, double y2);

#endif
