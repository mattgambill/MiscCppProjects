#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include"Header.h"
using namespace std;

int main() {
	
	int numElements(0);
	cout << "\nHello Welcome to The Empirical Formula Calculator! \nPlease Enter The Number of Elements You Are Working With: ";
	cin >> numElements;
	
	const int USER_ELEMENTS = static_cast<int> (numElements);
	vector<double> formulaWeights(USER_ELEMENTS);
	ReadData a;
	a.data(USER_ELEMENTS, formulaWeights);
	

	for (int i = 0; i < USER_ELEMENTS; i++){
		cout << formulaWeights.at(i) << endl;
	}
	//exit
	char str1('?');
	while (str1 != 'q') {
		cout << "...ENTER  q TO EXIT...\n";
		cin>>str1;
	}
	return 0;
}


