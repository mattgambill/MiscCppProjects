/* 
File: Tax Calculator 2015
Created By: Matt Gambill
Created on: 9/12/2015
*/
#include <iostream>
using namespace std;
int main() {
	int salary = 0;
	double fedTax = 0;
	double stateTax = 0;
	char userChar = 0;
	
	cout << "Hello Welcome to Tax Calculator 2015!" << endl << "Please enter your yearly salary to the nearest dollar. \n$"; //greeting
	cin >> salary; //user enters salary
		
	// Calculates Federal Tax
		if ((salary >= 0) && (salary < 9225)) { 
			fedTax = salary / 10;
		}
		if ((salary >= 9226) && (salary < 37450)) {
			fedTax = 922.50 + salary * 0.15;
		}
		if ((salary >= 37451) && (salary < 90750)) {
			fedTax = 5156.25 + salary * 0.25;
		}
		if ((salary >= 90751) && (salary < 189300)) {
			fedTax = 18481.25 + salary * 0.28;
		}
		if ((salary >= 189301) && (salary < 411500)) {
			fedTax = 46075.25 + salary * 0.33;
		}
		if ((salary >= 411501) && (salary < 413200)) {
			fedTax = 119401.25 + salary * 0.35;
		}
		if (salary >= 413201) {
			fedTax = 119996.25 + salary * 0.396;
		}
		//Exit Procedure
	cout << "Your federal tax is: $"<<fedTax<<endl;
	cout << "Thanks for using Tax Calculator 2015!";
	
	
return 0;
}
