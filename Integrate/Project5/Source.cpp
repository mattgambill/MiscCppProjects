/*

File: integrate.cpp
Created By: Matt Gambill
Created On: 10/1/2015

Synopsis:
Program returns area under function given lower bound upper bound and a step size.

*/


# include<iostream>
#include<cmath>
using namespace std;


int main()
{
	char userChar = '?';
	while (userChar != 'q') //repeats program until user enters q
	{
		long double upperbound(0), lowerbound, i(0), stepsize(0);
		long double area(0.0), sum(0.0);
		cout << "Enter lower bound: ";
		cin >> lowerbound;
		cout << "Enter upper bound: ";
		cin >> upperbound;
		cout << "Enter stepsize: ";
		cin >> stepsize;
		for (i = lowerbound + stepsize; i <= (upperbound - stepsize); i += stepsize) {
			sum += sin(pow(i, 2)); //enter function to be integrated

		}
		area = 0.5 * stepsize * (upperbound + lowerbound + 2 * sum); //calculates integral via trapizoidal sum.

		cout << "Area is: " << area << endl;

		// exit
		cout << "Press q to quit or any key to run again!";
		cin >> userChar;
	}

	return 0;
}
