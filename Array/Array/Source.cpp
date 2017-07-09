#include<iostream>
#include<vector>
#include "Header.h"
using namespace std;


int main() {
	vector<int> vector(VECTOR_SIZE);   //intialize an array
	int array_length(0);		 //intialize an array length 
	int max(0);		//integer to be added 

	cout << "Enter non-negative numbers (ints) terminated by -99 " << endl;
	//read in numbers
	functions x;
	x.read_list(vector, array_length);

	//print vector
	x.print_array(vector, array_length);

	//find maximum value and set it  to x
	max = x.find_max(vector, array_length);

	//add x to vector to make a new vector
	x.array_add(max, vector, array_length);

	//print the new vector
	x.print_array(vector, array_length);
	
	//exit
	char userChar = '?';
	while (userChar !='q')
	{
		cout << "Enter q to quit" << endl;
		cin >> userChar;
	}

	return 0;
}
