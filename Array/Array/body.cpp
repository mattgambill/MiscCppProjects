#include "Header.h"



void functions::read_list(vector<int>& vector1, int& array_length) {

	for ( i = 0;(i < VECTOR_SIZE) && (j != -99); i++) {
		cin >> j;
		if (j >= 0) {
			vector1.at(i) = j;
			array_length++;
		}
		else {
			i -= 1; //delete value if j < 0
		}
	}
}

void functions::print_array(vector<int>& vector1, int array_length) {
	cout << "Original List (" << array_length << " values)" << endl;
	for (i = 0; i < array_length; i++) {
		if (i < array_length - 1) {
			cout << vector1.at(i) << ", "; //print values of vector with space until the second to last element
		}
		else
		{
			cout << vector1.at(i); //prints the last element
		}
	}
	cout << endl;
}

int functions::find_max(vector<int>& vector, int array_length) {
	int max(0); //variable to store the maximum of the vector 
	for (i = 0; i < array_length; i++) {
		if (max < vector.at(i)) {  //compares vector value to the stored value for max
			max = vector.at(i); //max becomes the value of the vector at location i if: max < the value at location i 
		}
	}
	return max;
}

void functions::array_add(int x, vector<int>& vector, int array_length) {
	for (i = 0; i < array_length; i++) {
		vector.at(i) = vector.at(i) + x; //adds x to each value at location i and saves it
	}
}
