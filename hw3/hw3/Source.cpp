/*
File: trapezoid.cpp
Created by: Matt Gambill
Creation Date: 10/05/2015
Synopsis: 
Program reads a length of the top row of a trapezoid and an amount of rows then returns the specified trapezoid 
*/


#include<iostream>
using namespace std;

int main() {
	int i, j, n, space, numRows(0); //row,column, top row size, space variable, and number of rows
	
	cout << " Enter Size of top: ";
	cin >> n;
	while (n < 2) //ensures user enters a top row size of two or more
	{
		cout << "Size of top row must be at least two. " << endl;
		cout << " Enter Size of top: ";
		cin >> n;
	}
	cout << "Enter number of rows: ";
	cin >> numRows;
	while((n - (2 * numRows)) <= -1) // ensures bottom row will be at least two "*"'s
	 {
	cout<<"Invalid number of rows."<<endl;
	cout<<"Enter number of rows: ";
	cin>>numRows;
	}
	

	int k = n;//varible inverts n index for decrementing instead of incrementing
	cout<<endl;

	for (i = 1;i <= numRows; i++) //outer loop controls rows
	{
	for (space = 1; i - 1 >= space; space++)//controls spaces
	{
	cout <<" ";
	}
	for (j = k; j - space >= 0; j--)//column loop
	{
	cout <<"*";
	}

	cout << endl;
	k--;
	}
	
	return 0;
}
