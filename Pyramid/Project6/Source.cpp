/* 
File: pyramid.cpp
Created By: Matt Gambill
Created On: 10/3/2015
 
 Synopsis:
 reads in a postive odd integer and returns an inverted pyramid.
 ex n = 5
 54321
  432
   3

*/

#include<iostream>
using namespace std;

int main() {
	int i, j, n, space;
	char letterToQuit = '?';
	while (letterToQuit != '3') {
		
	
		cout << "Please Enter a Positive odd integer: ";
		cin >> n;
		while (((n % 2) != 1))
		{
			cout << "The Number you entered is not a positive integer please try again: ";
			cin >> n;
		}
	int k = n;



	for (i = 1;( n - (2 * i - 2) >= 1); i++) 
	{
		for (space = 1; i - 1 >= space; space++)
		{
			cout <<" ";
		}
	   for (j = k; j - space >= 0; j--)
		{ 
			cout <<j % 10;
		}
	
		cout << endl;
		k--;
	}

	cout << "Enter 3 to quit";
	cin >> letterToQuit;
	}




	return 0;
}