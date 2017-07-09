/*
Alkane Combustion Equation Balance
By Matt Gambill, 11/4/2016
Program Takes in the number of carbons in an alkane and
outputs the balanced combustion equation for said alkane.
*/
#include<iostream>
#include<cmath>
using namespace std;

void getAlk(const int i);
void getSup(const int j);

int main() {
	//number of carbons in an alkane
	int numCarbons = 0;

	cout << endl;
	//Get number of Carbons
	cout << "Enter number of carbons in alkane chain (0-296):";
	cin >> numCarbons;


	//ensure carbons are in specified range
	while (numCarbons < 0 || numCarbons > 296) {
		cout << endl << "***ERROR Number of Carbons not in Specified Range***" << endl << endl;
		cout << "Enter number of carbons in alkane chain (0-296):";
		cin >> numCarbons;
	}
	cout << "Balanced equations is:" << endl;

	if (numCarbons % 2 == 0) {
		getAlk(numCarbons);
		cout << " + ";
		getSup(3 * numCarbons);
		cout << "\u2044" << "\u2082" << " O" << "\u2082" << " \u2192 ";
		cout << numCarbons;
		cout << " CO" << "\u2082" << " + " << numCarbons + 1 << " H" << "\u2082" << "O" << endl;
	}
	else {
		getAlk(numCarbons);
		cout << " + " << (3 * numCarbons + 1) / 2 << " O" << "\u2082" << " \u2192 ";
		cout << numCarbons;
		cout << " CO" << "\u2082" << " + " << numCarbons + 1 << " H" << "\u2082" << "O" << endl;
	}



	return 0;
}


void getAlk(const int i) {


	string a[] = { "\u2080","\u2081","\u2082","\u2083","\u2084","\u2085","\u2086","\u2087","\u2088","\u2089" };


	if (i<10) {
		cout << "C" << a[i % 10];
		if ((2 * i + 2)<10) {
			cout << "H" << a[(2 * i + 2) % 10];
		}
		if (2 * i + 2<23 && 2 * i + 2 >= 10) {
			cout << "H" << a[((2 * i + 2) % 100) / 10] << a[(2 * i + 2) % 10];
		}
	}
	if (i<100 && i >9) {
		cout << "C" << a[(i % 100) / 10] << a[i % 10];
		if (2 * i + 2<100 && 2 * i + 2 >= 10) {
			cout << "H" << a[((2 * i + 2) % 100) / 10] << a[(2 * i + 2) % 10];
		}
		if (2 * i + 2 >= 100) {
			cout << "H" << a[(2 * i + 2) / 100] << a[((2 * i + 2) % 100) / 10] << a[(2 * i + 2) % 10];
		}
	}
	if (i >= 100) {
		cout << "C" << a[i / 100] << a[(i % 100) / 10] << a[i % 10];
		cout << "H" << a[(2 * i + 2) / 100] << a[((2 * i + 2) % 100) / 10] << a[(2 * i + 2) % 10];
	}
}


void getSup(const int j) {

	//declare unicode superscripts
	string sup[] = { "\u00B9","\u00B2","\u00B3","\u2074","\u2075","\u2076","\u2077","\u2078","\u2079" };


	if (j<10) {
		cout << sup[j % 10];
	}
	if (j<100 && j >9) {
		cout << sup[(j % 100) / 10] << sup[j % 10];
	}
	if (j >= 100 && j <1000) {
		cout << sup[j / 100] << sup[(j % 100) / 10] << sup[j % 10];

	}



}
