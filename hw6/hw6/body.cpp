#include "Header.h"

// FUNCTION DEFINITIONS GO HERE:

// Welcome displays welcome banner
void welcome() {
	cout << "Welcome! Create your own list of rectangles." << endl;
	cout << "You will be  asked to provide information about each rectange in your list by name." << endl;
	cout << "Type the word 'stop' for the rectangle name when you're done." << endl;
}

// isValidInput determines if the users input is valid
// prompt is a prompt for the user
// errorInvalid is a message displayed when the input is invalid
// errorUsed is a error message displayed when the name of a rectangle is already used
// validINput is a string containg what the user entered
// recVector is the list of rectangles
bool isValidInput(const string & prompt, const string & errorInvalid, const string & errorUsed, string & validInput, vector<Rectangle>& recVector) {
	unsigned int recVectorSize = recVector.size();
	bool isValid = false;
	string userinput;
	Rectangle rec;
	//prompt user
	cout << prompt;
	getline(cin, userinput);
	//checks keywords
	if (userinput.substr(0, 4) == "rec " || userinput.substr(0, 4) == "stop") {
		string recName = userinput.substr(4, userinput.size());
		rec.setName(recName);
		validInput = userinput;
		isValid = true;
		for (unsigned int i = 0; i < recVectorSize; i++) {
			if (rec.getName() == recVector[i].getName()) {
				cerr << errorUsed << endl;
				isValid = false;
			}
		}
	}
	else {
		cerr << errorInvalid << endl;
	}

	return isValid;
}

// blPoint prompts for the x and y coordinates of rectangle
// prompt is the prompt for the user
// x is the x coordinate
// y is the y coordinate
void blPoint(const string & prompt, double &x, double &y) {
	cout << prompt;
	cin >> x;
	cin >> y;
	cout << endl;
}

// heightAndLength reads the height and length of the rectanle
// prompt is a string that prompts the user for height and length
// length is the length of rectangle
// height is the height of rectangle
void heightAndLength(const string & prompt, double &length, double &height) {
	cout << prompt;
	cin >> length;
	cin >> height;
	while (length < 0 || height < 0) {
		cout << "Make length and height positive values. Try again." << endl;
		cout << prompt;
		cin >> length;
		cin >> height;
	}
	cout << endl;
}

// add to vector ads a rectangle to a vector
// recName is the name of the rectangle
// x is the x coordinate of the bottom left point
// y is the y coordinate of the bottom left point.
// length is the length of the rectangle
// height is the height of the rectangle
// recVector is the vector containing the rectangles
void addToVector(const string &recName, double x, double y, double length, double height, vector<Rectangle> & recVector) {
	string XYprompt = "Enter " + recName + "'s bottom left x and y coords: ";
	string LHprompt = "Enter " + recName + "'s length and height: ";
	Rectangle rec1;
	// Extract rectangle name from user input
	rec1.setName(recName);
	// Prompt for bottom left point
	blPoint(XYprompt, x, y);
	rec1.setBottomLeft(x, y);
	// Prompt for length and height
	heightAndLength(LHprompt, length, height);
	rec1.setDimensions(length, height);
	// Add rectangle to the rectangle list
	recVector.push_back(rec1);
}

// printVector prints the vector of rectangles
// recVector is the vector containing the rectangles
void printVector(vector<Rectangle>& recVector) {
	unsigned int size = recVector.size();
	cout << "You have " << size << " rectangles in your list:" << endl << endl;
	for (unsigned int i = 0; i < size; i++) {
		cout << "Rectangle '" << recVector[i].getName() << "': ";
		recVector[i].display();
		recVector[i].scaleBy2();
		cout << "    After scale by 2: ";
		recVector[i].display();
		cout << endl;
	}
}
// CLASS MEMBER FUNCTION DEFINITIONS GO HERE:

void Point::setX(const double x) {
	px = x;
}

void Point::setY(const double y)
{
	py = y;
}

double Point::getX() const
{
	return (px);
}

double Point::getY() const
{
	return (py);
}

void Rectangle::setName(const string & inName)
{
	name = inName;
}

void Rectangle::setBottomLeft(const double x, const double y)
{
	blPoint.setX(x);
	blPoint.setY(y);
}

void Rectangle::setDimensions(const double inLength, const double inHeight)
{
	length = inLength;
	height = inHeight;
}

string Rectangle::getName() const
{
	return name;

}

Point Rectangle::getBottomLeft() const
{
	return blPoint;

}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::area() const
{
	return length * height;
}

double Rectangle::perimeter() const
{
	return 2 * length + 2 * height;
}

Point Rectangle::midPoint() const
{
	Point midpoint;
	double midX = blPoint.getX() + 0.5*length;
	double midy = blPoint.getY() + 0.5*height;
	midpoint.setX(midX);
	midpoint.setY(midy);
	return midpoint;

}

void Rectangle::scaleBy2()
{
	double x1 = blPoint.getX() - 0.5*length;
	double y1 = blPoint.getY() - 0.5*height;
	blPoint.setX(x1);
	blPoint.setY(y1);
	length *= 2;
	height *= 2;

}

void Rectangle::display() const
{
	cout << "Location is (" << blPoint.getX() << ", " << blPoint.getY() << "), ";
	cout << "Length is " << getLength() << ", Height is " << getHeight() << "; ";
	cout << "Area is " << area() << ", perimeter is " << perimeter() << ", midpoint is located at (" << midPoint().getX() << ", " << midPoint().getY() << ")" << endl;
}