/*
File: Factor.cpp
Created By: Matt Gambill
Created On: 10/5/2015
Synopsis:
User inputs a number to be factored and can chose between a list up to their numbers or just their number.
*/

#include<iostream>
using namespace std;

void factor(int test, int userNum){
	int i, j;
	switch (test)//computations
	{
	case 0:
		for (i = 1; i <= userNum; i++)
		{
			cout << i << ": ";
			for (j = 1; j <= i; j++)
			{
				if (i % j == 0 && i - j != 0)
				{
					cout << j << ", ";
				}
				else if (i % j == 0 && i - j == 0)
				{
					cout << j;
				}
			}
			cout << endl;
		}
		break;

	case 1:
		int k;
		for (k = 1; k <= userNum; k++)
		{
			if (userNum % k == 0 && userNum - k != 0)
			{
				cout << k << ", ";
			}
			else if (userNum % k == 0 && userNum - k == 0)
			{
				cout << k << endl;
			}
		}
		break;

	default:
		cout << "error" << endl;
		break;
	}
	return;
}
int main() {

	int userNum; 
	int test;//test for switch statement
	
	cout << "Enter a number: ";
	cin >> userNum;

	while (userNum <= 0) 
	{
		cout << "Integer must be positive and greater than 0.\nEnter a number: ";
		cin >> userNum;
	}
	cout << "Would you like to see a list of factors for each number from 0 to your number? \nEnter 0 for for list, or 1 for factors of your number only: ";
	cin >> test;
	while(test != 0 && test != 1)
	{
		cout << "Please enter 0 for list or 1 for factors to continue: ";
		cin >> test;
	}
	
	factor(test, userNum);

	//exit strategy
	char userChar = '?';
	while (userChar != 'q')
	{
		cout << "Enter q to quit: ";
		cin >> userChar;
	}



	return 0;
}