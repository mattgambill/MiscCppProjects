#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
//function protypes/class definition
class Point
{
private:
	double px;
	double py;

public:
	void setX(const double	x);
	void setY(const double y);
	double getX() const;
	double getY() const;
};

class Rectangle
{
private:
	string name;
	Point blPoint;
	double length, height;

public:
	// member functions
	void setName(const string & inName);
	void setBottomLeft(const double x, const double y);
	void setDimensions(const double inLength, const double inHeight);

	string getName() const;
	Point getBottomLeft() const;
	double getLength() const;
	double getHeight() const;

	double area() const;
	double perimeter() const;
	Point midPoint() const;
	void scaleBy2();
	void display() const;
};

// FUNCTION PROTOTYPES GO HERE:
void welcome();
bool isValidInput(const string & prompt, const string & errorInvalid, const string & errorUsed, string & validInput, vector<Rectangle>& recVector);
void blPoint(const string & prompt, double &x, double &y);
void heightAndLength(const string & prompt, double &length, double &height);
void addToVector(const string &recName, double x, double y, double length, double height, vector<Rectangle> & recVector);
void printVector(vector<Rectangle>& recVector);
#endif